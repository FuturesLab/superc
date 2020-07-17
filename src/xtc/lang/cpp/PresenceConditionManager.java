/*
 * xtc - The eXTensible Compiler
 * Copyright (C) 2009-2012 New York University
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
 * USA.
 */
package xtc.lang.cpp;

import java.io.Writer;
import java.io.StringWriter;
import java.io.IOException;
import java.io.StringReader;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;

import xtc.lang.cpp.Syntax.Kind;

import net.sf.javabdd.BDDFactory;
import net.sf.javabdd.BDD;
  

/** Presence condition manager.  It abstracts away the nitty-gritty of
  * using BDDs.
  *
  * @author Paul Gazzillo
  * @version $Revision: 1.14 $
  */
class PresenceConditionManager {

  /** The BDD factory. */
  private BDDFactory B;

  /** The variable name manager. */
  private Variables vars;
  
  /** The stack of nested presence conditions. */
  private LinkedList<BDD> stack;

  /**
   * The current global presence condition, i.e. the conjunction of
   * nested presence conditions.
   */
  private BDD global;

  /**
   * The local presence condition of the current conditional branch.
   */
  private BDD branch;

  /**
   * The not of the union of all previous conditional branches.  This
   * models the short-circuiting of preprocessor conditonals.
   */
  private BDD notBranches;
  
  /** The current presence condition. */
  private PresenceCondition current;

  /** The CONFIG_-only domain of variables. */
  private BDD configDomain;

  /**
   * Create a new presence condition manager.
   */
  public PresenceConditionManager() {
    this.B = BDDFactory.init(5000000, 50000);
    this.vars = new Variables(B);
    this.stack = new LinkedList<BDD>();
    this.global = B.one();
    this.branch = null;
    this.notBranches = null;
    this.current = null;
    this.configDomain = null;
  }

  /**
   * Copy a presence condition manager.
   *
   * @param The presence condition manager to copy.
   */
  public PresenceConditionManager(PresenceConditionManager presenceConditionManager) {
    this.B = presenceConditionManager.B;
    this.vars = presenceConditionManager.vars;
    
    this.stack = new LinkedList<BDD>();

    for (BDD bdd : presenceConditionManager.stack) {
      if (bdd != null) {
        this.stack.add(bdd.id());
      }
      else {
        this.stack.add(null);
      }
    }

    this.global = presenceConditionManager.global.id();
    if (null != presenceConditionManager.branch) {
      this.branch = presenceConditionManager.branch.id();
    }
    else {
      this.branch = null;
    }
    if (null != presenceConditionManager.notBranches) {
      this.notBranches = presenceConditionManager.notBranches.id();
    }
    else {
      this.notBranches = null;
    }
    
    this.current = null;
  }
  
  /**
   * Free all BDDs held by this presence condition manager.  Note this does not
   * free the BDDs generated by it, but only those it uses to track
   * nested presence conditions.
   */
  public void free() {
    global.free();
    if (null != branch) {
      branch.free();
    }
    if (null != notBranches) {
      notBranches.free();
    }
    for (BDD bdd : stack) {
      if (null != bdd) {
        bdd.free();
      }
    }
    
    if (null != current) {
      current.delRef();
      current = null;
    }
  }
  
  /**
   * Push the current presence condition onto the stack.
   */
  public void push() {
    stack.push(notBranches);
    stack.push(branch);
    stack.push(global);
    
    notBranches = B.one();
    branch = B.zero();
    global = B.zero();
    
    if (null != current) {
      current.delRef();
      current = null;
    }
  }
  
  /**
   * Enters a new local presence condition.
   *
   * @param bdd The new local presence condition.  Will be delRef'ed.
   */
  public void enter(BDD bdd) {
    notBranches.andWith(branch.not());
    branch.free();
    branch = bdd;
    
    global.free();
    //       peekGlobal   &&  notBranches   &&     branch
    global = stack.peek().and(notBranches).andWith(branch.id());
    
    if (null != current) {
      current.delRef();
      current = null;
    }
  }
  
  /**
   * Enter a NEXT conditional branch.  IMPORTANT: the preprocessor
   * needs to call enterElse before evaluating the #elif's conditional
   * expression, otherwise macros in the expression will be evaluated
   * as if they were in the previous branch, which is wrong.
   *
   * @param bdd The presence condition of the branch.
   */
  public void enterElif(BDD bdd) {
    branch = bdd;
    global = stack.peek().and(notBranches).andWith(branch.id());
    
    if (null != current) {
      current.delRef();
      current = null;
    }
  }
  
  /**
   * Enter an else branch.  Else is a branch whose local presence condition is
   * TRUE.
   */
  public void enterElse() {
    enter(B.one());
  }
  
  /**
   * Pop the current presence condition off of the stack.
   */
  public void pop() {
    global.free();
    branch.free();
    notBranches.free();
    
    global = stack.pop();
    branch = stack.pop();
    notBranches = stack.pop();
    
    if (null != current) {
      current.delRef();
      current = null;
    }
  }
  
  /**
   * Get the parent presence condition, i.e. the presence condition
   * containing the current one.
   *
   * @param The parent presence condition.
   */
  public PresenceCondition parent() {
    return new PresenceCondition(stack.peek().id());
  }

  /**
   * Whether the current presence condition is true.
   *
   * @return true When the the current presence condition is true.
   */
  public boolean isTrue() {
    return global.isOne();
  }
  
  /**
   * Whether the current presence condition is false
   *
   * @return true When the the current presence condition is false.
   */
  public boolean isFalse() {
    return global.isZero();
  }

  /**
   * Get the current presence condition.
   *
   * @return The current presence condition.
   */
  public PresenceCondition reference() {
    if (null == current) {
      current = new PresenceCondition(global.id());
    }
    current.addRef();
    
    return current;
  }
  
  public boolean is(PresenceCondition presenceCondition) {
    return global.equals(presenceCondition.getBDD());
  }

  /**
   * Collect the domain of all CONFIG_-related BDDs.  This domain is
   * used by simplifyToConfigs.  Calling this method will regenerate
   * the domain if it's already computed.
   */
  public void generateConfigDomain() {
    if (null != this.configDomain) this.configDomain.free();
    
    this.configDomain = B.zero();
    for (int i = 0; i < getVariableManager().getSize(); i++) {
      if (getVariableManager().getName(i).startsWith("(defined CONFIG_")) {
        this.configDomain = this.configDomain.orWith(getVariableManager().getVariable(getVariableManager().getName(i)));
      }
    }
  }

  /**
   * Check whether the config domain has been computed yet.
   *
   * @return true if the domain has been computed.
   */
  public boolean hasConfigDomain() {
    return null != this.getConfigDomain();
  }

  /**
   * Get the CONFIG_-only domain.
   *
   * @return The config domain
   */
  public BDD getConfigDomain() {
    return this.configDomain;
  }

  /**
   * Get the CONFIG_-only domain.
   *
   * @return The config domain
   */
  public PresenceCondition getConfigDomainCond() {
    if (! hasConfigDomain()) {
      generateConfigDomain();
    }

    return new PresenceCondition(getConfigDomain());
  }

  /**
   * Simplify the BDD by narrowing the domain to only CONFIG_
   * variables.  This will call generateConfigDomain only if the
   * domain does not exist already.  Call generateConfigDomain to
   * regenerate if new variables have been added.
   *
   * @param pc The presence condition to simplify.
   * @return The simplified BDD.
   */
  public PresenceCondition simplifyToConfigs(PresenceCondition pc) {
    if (! hasConfigDomain()) {
      generateConfigDomain();
    }

    BDD r = pc.getBDD().id();
    for (int i = 0; i < getVariableManager().getSize(); i++) {
      if (getVariableManager().getName(i).contains("CONFIG_")) {
        r = r.simplify(getVariableManager().getVariable(getVariableManager().getName(i)));
      }
    }

    return new PresenceCondition(r);
    // return new PresenceCondition(pc.getBDD().simplify(getConfigDomain()));
  }

  public PresenceCondition getRestrictCond(boolean val) {
    BDD restrictBDD = B.one();
    for (int i = 0; i < getVariableManager().getSize(); i++) {
      // if (! getVariableManager().getName(i).contains("(defined CONFIG_")) {
      if (! getVariableManager().getName(i).contains("CONFIG_")) {
        if (val) {
          restrictBDD = restrictBDD.andWith(getVariableManager().getVariable(getVariableManager().getName(i)));
        } else {
          BDD varbdd = getVariableManager().getVariable(getVariableManager().getName(i));
          restrictBDD = restrictBDD.andWith(varbdd.not());
          varbdd.free();
        }
      }
    }

    return new PresenceCondition(restrictBDD);
  }

  /**
   * Return a new presence condition instance of true.
   *
   * @returns a new presence condition instance of true.
   */
  public PresenceCondition newTrue() {
    return new PresenceCondition(true);
  }

  /**
   * Return a new presence condition instance of false.
   *
   * @returns a new presence condition instance of false
   */
  public PresenceCondition newFalse() {
    return new PresenceCondition(false);
  }

  // TODO: make this private
  public Variables getVariableManager() {
    return vars;
  }

  /**
   * Gets the variable of the given name.
   *
   * @param The variable name.
   * @return A new presence condition containing the variable.
   */
  public PresenceCondition getVariable(String name) {
    // get variable gives a new bdd, which presence condition expects
    return new PresenceCondition(getVariableManager().getVariable(name));
  }

  /**
   * Syntactic sugar for getting a variable A in its (define A) form.
   *
   * @param name The macro name.
   * @return A new presence condition containing the variable.
   */
  public PresenceCondition getDefinedVariable(String name) {
    // get defined variable gives a new bdd, which presence condition expects
    return new PresenceCondition(getVariableManager().getDefinedVariable(name));
  }

  /**
   * Determines whether the variable name exists.
   *
   * @param The variable name.
   * @return true if it exists.
   */
  public boolean hasVariable(String name) {
    return getVariableManager().hasVariable(name);
  }

  /**
   * Syntactic sugar for hasVariable on a (defined A) variable, where
   * you just pass A.
   *
   * @param The variable name.
   * @return true if it exists.
   */
  public boolean hasDefinedVariable(String name) {
    return getVariableManager().hasDefinedVariable(name);
  }

  /**
   * The nesting depth of presence conditions.
   *
   * @return The nesting depth.
   */
  public int getDepth() {
    return stack.size();
  }

  /**
   * The BDD factory used to create BDDs.  This is needed for directly
   * manipulating BDDs outside of the PresenceConditionManager, because all BDDs
   * that share variables need to be created from the same factory.
   *
   * @return The BDD factory.
   */
  public BDDFactory getBDDFactory() {
    return B;
  }

  /**
   * Return a new presence condition with the disjunction of all
   * variables, turned off or on according to the parameters.
   *
   * @param defaultSetting true for all variables on, false for off.
   * @param exceptions null for none, list of strings to set opposite
   * the defaultSetting.
   * @return The new presence condition.
   */
  public BDD evaluateBDDs(ConditionEvaluator evaluator) {
    BDD b = B.one();

    for (int i = 0; i < vars.indices.size(); i++) {
      String varString = vars.indices.get(i);
      final CLexer clexer = new CLexer(new StringReader(varString));
      clexer.setFileName("string expression");

      Iterator<Syntax> stream = new Iterator<Syntax>() {
          Syntax syntax;
    
          public Syntax next() {
            try {
              syntax = clexer.yylex();
            } catch (IOException e) {
              e.printStackTrace();
              throw new RuntimeException();
            }
            return syntax;
          }
    
          public boolean hasNext() {
            return syntax.kind() != Kind.EOF;
          }

          public void remove() {
            throw new UnsupportedOperationException();
          }
        };

      stream.next();

      BDD result = evaluator.evaluate(stream);

      if (result.isOne()) {
        b.andWith(B.ithVar(i));
      } else if (result.isZero()) {
        BDD ith = B.ithVar(i);
        BDD not = ith.not();
        ith.free();
        b.andWith(not);
      } else {
        System.err.println("unresolved BDD variable");
        System.err.println(varString);
        BDD ith = B.ithVar(i);
        BDD not = ith.not();
        ith.free();
        b.andWith(not);
        // System.exit(1);
      }
    }

    return b;
  }

  /**
   * Return a new presence condition with the disjunction of all
   * variables, turned off or on according to the parameters.
   *
   * @param defaultSetting true for all variables on, false for off.
   * @param exceptions null for none, list of strings to set opposite
   * the defaultSetting.
   * @return The new presence condition.
   */
  public BDD createConfiguration(boolean defaultSetting,
                                 List<String> exceptions) {
    BDD b = B.one();

    for (int i = 0; i < vars.indices.size(); i++) {
      boolean setting = defaultSetting;
      String varString = vars.indices.get(i);

      if (null != exceptions && exceptions.contains(varString)) {
        setting = ! setting;
      }

      if (setting) {
        b.andWith(B.ithVar(i));
      } else {
        BDD ith = B.ithVar(i);
        BDD not = ith.not();
        ith.free();
        b.andWith(not);
      }
    }

    return b;
  }

  /**
   * Return a new presence condition with the disjunction of all
   * variables.
   *
   * @return The new presence condition.
   */
  public BDD allYes() {
    return createConfiguration(true, null);
  }

  /**
   * Return a new presence condition with the disjunction of all
   * variables negated.
   *
   * @return The new presence condition.
   */
  public BDD allNo() {
    return createConfiguration(false, null);
  }

  /**
   * Print one sat to a writer.
   *
   * @param writer The writer.
   * @throws IOException Because it uses a Writer.
   */
  public void printOneSat(byte[] sat, Writer writer) throws IOException {
    boolean first = true;
    for (int i = 0; i < sat.length; i++) {
      if (sat[i] >= 0 && ! first) {
        writer.write(" && ");
      }
      switch (sat[i]) {
      case 0:
        writer.write("!");
      case 1:
        writer.write(vars.getName(i));
        first = false;
        break;
      }
    }
  }

  /**
   * Print the BDD to a writer.
   *
   * @param bdd The bdd.
   * @param writer The writer.
   * @throws IOException Because it uses a Writer.
   */
  public void printBDD(BDD bdd, Writer writer) throws IOException {
    List allsat;
    boolean firstTerm;

    if (bdd.isOne()) {
      writer.write("1");

      return;

    } else if (bdd.isZero()) {
      writer.write("0");

      return;
    }
      
    allsat = (List) bdd.allsat();
      
    firstTerm = true;
    for (Object o : allsat) {        
      if (! firstTerm) {
        writer.write(" || ");
      }
      firstTerm = false;
      
      printOneSat((byte[]) o, writer);
    }
  }

  /**
   * Get the set of all config vars used by the given BDD.
   *
   * @param The BDD.
   * @return The set of all config vars used.
   */
  public Set<String> getAllConfigsFromBDD(BDD bdd) {
    List allsat;
    Set<String> allConfigs = new HashSet<String>();

    if (bdd.isOne()) {
      return allConfigs;

    } else if (bdd.isZero()) {
      return allConfigs;
    }
      
    allsat = (List) bdd.allsat();
      
    for (Object o : allsat) {
      byte[] sat;

      sat = (byte[]) o;
      for (int i = 0; i < sat.length; i++) {
        switch (sat[i]) {
        case 0:
          allConfigs.add("!" + vars.getName(i));
          break;
        case 1:
          allConfigs.add(vars.getName(i));
          break;
        }
      }
    }

    return allConfigs;
  }

  /**
   * A wrapper for a literal representation of presence condition
   * expressions.  This is meant for more efficient printing of the
   * expression and to be used in parallel with BDDs which provide
   * efficient SAT solving.  This class is intended to be completely
   * immutable.
   */
  protected class Expression {
    /**
     * The current implementation maintains strings.  Maintain the
     * invariant that parentheses always wrap the string (except for
     * constants) so that operations will not result in precedence
     * issues.  TODO: use an expression tree or z3.
     */
    protected final String str;
    
    public Expression(boolean value) {
      this(value ? "1" : "0");
    }

    public Expression(String str) {
      // always wrap result in parentheses
      this.str = String.format("(%s)", str);
    }

    public Expression and(Expression other) {
      return new Expression(String.format("%s && %s", this.str, other));
    }

    public Expression or(Expression other) {
      return new Expression(String.format("%s || %s", this.str, other));
    }

    public Expression not() {
      // always wrap result in parentheses
      return new Expression(String.format("! %s", this.str));
    }

    public String toString() {
      return this.str;
    }
  }
  
  /** A reference-counted presence condition that automatically cleans up BDD when
    * nothing references it anymore.
    */
  public class PresenceCondition {
    /** The BDD backing the presence condition. */
    private BDD bdd;

    /**
     * The number of references to the presence condition, used to
     * automatically destroy the BDD object.
     */
    private int refs;
    
    /** Creates a new PresenceCondition out of the given bdd.  Make sure the bdd
      * is not shared by anyone else.
      */
    private PresenceCondition(BDD bdd) {
      this.bdd = bdd;
      this.refs = 1;
    }
    
    private PresenceCondition(boolean value) {
      this.bdd = value ? B.one() : B.zero();
      this.refs = 1;
    }
    
    public boolean isTrue() {
      return bdd.isOne();
    }
    
    public boolean isFalse() {
      return bdd.isZero();
    }
    
    /** Return the negated presence condition. */
    public PresenceCondition not() {
      return new PresenceCondition(bdd.not());
    }
    
    /** Return this presence condition and c.  Free any intermediate bdds. */
    public PresenceCondition and(PresenceCondition c) {
      return new PresenceCondition(bdd.and(c.bdd));
    }

    /** Return this presence condition and not c.  Free any intermediate bdds. */
    public PresenceCondition andNot(PresenceCondition c) {
      PresenceCondition newPresenceCondition;
      BDD notBDD;
      
      notBDD = c.bdd.not();
      newPresenceCondition = new PresenceCondition(bdd.and(notBDD));
      notBDD.free();
      
      return newPresenceCondition;
    }
    
    /** Return this presence condition or c.  Free any intermediate bdds. */
    public PresenceCondition or(PresenceCondition c) {
      return new PresenceCondition(bdd.or(c.bdd));
    }
    
    /** Restrict */
    public PresenceCondition restrict(PresenceCondition c) {
      return new PresenceCondition(bdd.restrict(c.getBDD()));
    }
    
    /** Simplify */
    public PresenceCondition simplify(PresenceCondition c) {
      return new PresenceCondition(bdd.simplify(c.getBDD()));
    }

    /** One sat */
    public PresenceCondition satOne() {
      return new PresenceCondition(bdd.satOne());
    }
    
    /** All sats */
    public void allsat() {
      bdd.allsat();
    }
    
    /** Compare */
    public boolean is(PresenceCondition presenceCondition) {
      return is(presenceCondition.getBDD());
    }
    
    /** Compare */
    public boolean is(BDD bdd) {
      return this.bdd.equals(bdd);
    }
    
    /**
     *
     */
    public boolean isMutuallyExclusive(PresenceCondition presenceCondition) {
      PresenceCondition and;
      
      and = this.and(presenceCondition);
      
      if (and.isFalse()) {
        and.delRef();
        
        return true;
      }
      else {
        and.delRef();
        
        return false;
      }
    }
    

    public PresenceCondition addRef() {
      if (refs > 0) {
        refs++;
      }
      
      return this;
    }
    
    public void delRef() {
      if (refs > 0) {
        refs--;
        
        if (0 == refs) {
          bdd.free();
        }
      }
    }
    
    // TODO: don't expose the BDDs outside presence condition manager
    /**
     * Get the raw BDD backing this presence condition.
     *
     * @return The raw BDD.
     */
    public BDD getBDD() {
      return bdd;
    }

    /**
     * Print the BDD to a writer.
     *
     * @param bdd The BDD.
     * @param writer The writer.
     * @throws IOException Because it uses a Writer.
     */
    public void print(Writer writer) throws IOException {
      printBDD(bdd, writer);
    }


    // /**
    //  * Print the BDD as a CNF clauses.
    //  *
    //  * @param writer The writer.
    //  * @throws IOException Because it uses a Writer.
    //  */
    // public void printCNF(Writer writer) throws IOException {
    //   if (this.isTrue()) {
    //     writer.write("1");

    //     return;

    //   } else if (this.isFalse()) {
    //     writer.write("0");

    //     return;
    //   }

    //   // We use the allsat() function on the bdd to get the clauses.
    //   // allsat is in DNF, so we first negate the bdd.  Then, to
    //   // generate CNF, we negate the clauses to make them conjunctive
    //   // again.
    //   PresenceCondition not = this.not();
    //   List allsat = (List) not.getBDD().allsat();

    //   for (Object o : allsat) {
    //     byte[] sat = (byte[]) o;
    //     ArrayList<Integer> clause = new ArrayList<Integer>();
    //     StringBuilder sb = new StringBuilder();
    //     for (int i = 0; i < sat.length; i++) {
    //       int sign = 1;
              
    //       switch (sat[i]) {
    //       case 1:
    //         // negate again
    //         sign = -1;
    //       case 0:
    //         String varname = not.presenceConditionManager().getVariableManager().getName(i);
    //         // if (varname.startsWith("(defined ")) {
    //         if (varname.contains("CONFIG")) {
    //         // if (varname.startsWith("(defined CONFIG_")) {
    //           // varname = varname.substring(9, varname.length() - 1);
    //           if (-1 == sign) {
    //             sb.append("-");
    //           }
    //           // sb.append("[");
    //           sb.append(varname);
    //           // sb.append("]");
    //           sb.append(",");
    //         }
    //         break;
    //       }
    //     }
    //     if (sb.toString().length() > 0) {
    //       writer.write("(");
    //       writer.write(sb.toString());
    //       writer.write(")");
    //     }
    //   }

    //   not.delRef();
    // }

    /**
     * Print the BDD as a CNF clauses.
     *
     * @param writer The writer.
     * @throws IOException Because it uses a Writer.
     */
    public void printNotCNF(PresenceCondition cond, Writer writer) throws IOException {
      if (cond.isTrue()) {
        writer.write("0");

        return;

      } else if (cond.isFalse()) {
        writer.write("1");

        return;
      }

      // We use the allsat() function on the bdd to get the clauses.
      // allsat is in DNF, so we first negate the bdd.  Then, to
      // generate CNF, we negate the clauses to make them conjunctive
      // again.
      List allsat = (List) cond.getBDD().allsat();

      for (Object o : allsat) {
        byte[] sat = (byte[]) o;
        ArrayList<Integer> clause = new ArrayList<Integer>();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < sat.length; i++) {
          int sign = 1;
              
          switch (sat[i]) {
          case 1:
            // negate again
            sign = -1;
          case 0:
            String varname = cond.presenceConditionManager().getVariableManager().getName(i);
            // if (varname.startsWith("(defined ")) {
            if (varname.contains("CONFIG")) {
            // if (varname.startsWith("(defined CONFIG_")) {
              // varname = varname.substring(9, varname.length() - 1);
              if (-1 == sign) {
                sb.append("-");
              }
              // sb.append("[");
              sb.append(varname);
              // sb.append("]");
              sb.append(",");
            }
            break;
          }
        }
        if (sb.toString().length() > 0) {
          writer.write("(");
          writer.write(sb.toString());
          writer.write(")");
        }
      }
    }

    /**
     * Get the set of all config vars used.
     *
     * @return The set of all config vars used.
     */
    public Set<String> getAllConfigs() {
      return getAllConfigsFromBDD(bdd);
    }

    public PresenceConditionManager presenceConditionManager() {
      return PresenceConditionManager.this;
    }

    /** Output the presence condition as a valid cpp conditional expression */
    public String toCNF() {
      StringWriter writer = new StringWriter();

      try {
        PresenceCondition not = this.not();
        printNotCNF(not, writer);
        not.delRef();
      } catch (IOException e) {
        // An inelegant way to sidestep not being able to throw an
        // exception from the overridden toString method.
        throw new RuntimeException();
      }

      return writer.toString();
    }

    /** Output the presence condition as a valid cpp conditional expression */
    public String toNotCNF() {
      StringWriter writer = new StringWriter();

      try {
        printNotCNF(this, writer);
      } catch (IOException e) {
        // An inelegant way to sidestep not being able to throw an
        // exception from the overridden toString method.
        throw new RuntimeException();
      }

      return writer.toString();
    }

    /** Output the presence condition as a valid cpp conditional expression */
    public String toString() {
      StringWriter writer = new StringWriter();

      try {
        print(writer);
      } catch (IOException e) {
        // An inelegant way to sidestep not being able to throw an
        // exception from the overridden toString method.
        throw new RuntimeException();
      }

      return writer.toString();
    }
  }
  
  /**
   * Manages BDD variables and provides a string representation for
   * BDD variables.
   */
  public static class Variables {
    /** The BDD factory */
    private BDDFactory B;
    
    /** The initial number of variables */
    private int varNum;
    
    /** The number of variables to add when varNum is topped */
    private int extVarNum;
    
    /** Hash from variable name to BDD variable index */
    private Map<String, BDD> variables;
    
    /** Map from BDD variable index to variable name */
    private List<String> indices;
    
    /**
     * Create a new BDD variable manager.
     *
     * @param B The BDD factory.
     */
    public Variables(BDDFactory B) {
      this(B, 1023, 512);
    }
    
    
    /**
     * Create a new BDD variable manager.
     *
     * @param B The BDD factory.
     * @param varNum The initial number of BDD variables.
     * @param extVarNum How much to increase the number of variables
     * by each time the limit is reached.
     */
    public Variables(BDDFactory B, int varNum, int extVarNum) {
      this.B = B;
      this.varNum = varNum;
      this.extVarNum = extVarNum;
  
      this.variables = new HashMap<String, BDD>();
      this.indices = new ArrayList<String>();
      B.setVarNum(this.varNum);
      B.setMinFreeNodes(.40);
      B.setMaxIncrease(500000);
    }
    
    /**
     * Create a new BDD with the given variable name.  If the variable
     * does not exist yet, create it.
     *
     * @param str The name of the variable.
     * @return A new BDD containing the variable.
     */
    public BDD getVariable(String str) {
      if (variables.containsKey(str)) {
        return variables.get(str).id();

      } else {
        int newNum = indices.size();
        BDD newBDD;
        
        if (newNum > varNum - 1) {
          varNum += extVarNum;
          //System.err.println("INCREASE: " + varNum);
          B.extVarNum(extVarNum);
        }
        
        newBDD = B.ithVar(newNum);
        variables.put(str, newBDD);
        indices.add(str);
        
        return newBDD.id();
      }
    }

    /**
     * Get the number of variables.
     *
     * @return The number of variables.
     */
    public int getSize() {
      return indices.size();
    }
    
    /**
     * Map BDD variable number to name.
     *
     * @param i The variable number.
     * @return The variable name.
     */
    public String getName(int i) {
      if (i < indices.size()) {
        return indices.get(i);
      }
      else {
        return null;
      } 
    }
    
    /**
     * Determines whether the variable name exists.
     *
     * @param The variable name.
     * @return true if it exists.
     */
    public boolean hasVariable(String name) {
      return variables.containsKey(name);
    }

    /**
     * Syntactic sugar for hasVariable(createDefinedVariable(name)).
     *
     * @param name The macro name.
     * @return true If the variable exists.
     */
    public boolean hasDefinedVariable(String name) {
      return hasVariable(createDefinedVariable(name));
    }

    /**
     * Syntactic sugar for getVariable(createDefinedVariable(name)).
     *
     * @param name The macro name.
     * @return A new BDD containing the variable.
     */
    public BDD getDefinedVariable(String name) {
      return getVariable(createDefinedVariable(name));
    }

    /**
     * Create a string representation for the "is a macro defined"
     * boolean variable, i.e. the "defined" operator.  This variable is
     * truly boolean variable, as opposed to the macro name itself,
     * since a macro may have non-boolean values.
     *
     * @param The name of the macro.
     * @return A string representation of the boolean variable.
     */
    public static String createDefinedVariable(String name) {
      return "(defined " + name + ")";
    }

    /**
     * Create a string representation for the "is a macro not defined"
     * boolean variable
     *
     * @param The name of the macro.
     * @return A string representation of the boolean variable.
     */
    public static String createNotDefinedVariable(String name) {
      return "! " + createDefinedVariable(name);
    }
  }
}

