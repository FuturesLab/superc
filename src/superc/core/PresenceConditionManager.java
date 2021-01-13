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
package superc.core;

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

import superc.core.Syntax.Kind;

import xtc.tree.Node;
import xtc.tree.GNode;

import net.sf.javabdd.BDDFactory;
import net.sf.javabdd.BDD;

import com.microsoft.z3.enumerations.Z3_ast_print_mode;

import com.microsoft.z3.Context;
import com.microsoft.z3.Solver;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Tactic;
import com.microsoft.z3.Goal;
import com.microsoft.z3.ApplyResult;

/** Presence condition manager.  It abstracts away the nitty-gritty of
  * using BDDs.
  *
  * @author Paul Gazzillo
  * @version $Revision: 1.14 $
  */
public class PresenceConditionManager {

  /** The BDD factory. */
  private BDDFactory B;

  /** The z3 context. */
  Context ctx;

  /** The variable name manager. */
  private Variables vars;
  
  /** The stack of nested presence conditions. */
  private LinkedList<PresenceCondition> stack;

  /**
   * The current global presence condition, i.e. the conjunction of
   * nested presence conditions.
   */
  private PresenceCondition global;

  /**
   * The local presence condition of the current conditional branch.
   */
  private PresenceCondition branch;

  /**
   * The not of the union of all previous conditional branches.  This
   * models the short-circuiting of preprocessor conditonals.
   */
  private PresenceCondition notBranches;
  
  /** The CONFIG_-only domain of variables. */
  private PresenceCondition configDomain;

  /**
   * Whether to print presence conditions or not.
   */
  private boolean suppressConditions;

  /**
   * Create a new presence condition manager.
   */
  public PresenceConditionManager() {
    this.B = BDDFactory.init(5000000, 50000);
    HashMap<String, String> cfg = new HashMap<String, String>();
    cfg.put("model", "true");
    this.ctx = new Context(cfg);
    this.ctx.setPrintMode(Z3_ast_print_mode.Z3_PRINT_SMTLIB2_COMPLIANT);
    this.vars = new Variables(B);
    this.stack = new LinkedList<PresenceCondition>();
    this.global = newTrue();
    this.branch = null;
    this.notBranches = null;
    this.configDomain = null;
  }

  /**
   * Copy a presence condition manager.
   *
   * @param The presence condition manager to copy.
   */
  public PresenceConditionManager(PresenceConditionManager presenceConditionManager) {
    this.B = presenceConditionManager.B;
    this.ctx = presenceConditionManager.ctx;
    this.vars = presenceConditionManager.vars;
    
    this.stack = new LinkedList<PresenceCondition>();

    for (PresenceCondition cond : presenceConditionManager.stack) {
      if (cond != null) {
        this.stack.add(cond.addRef());
      } else {
        this.stack.add(null);
      }
    }

    this.global = presenceConditionManager.global.addRef();
    if (null != presenceConditionManager.branch) {
      this.branch = presenceConditionManager.branch.addRef();
    } else {
      this.branch = null;
    }
    if (null != presenceConditionManager.notBranches) {
      this.notBranches = presenceConditionManager.notBranches.addRef();
    } else {
      this.notBranches = null;
    }
  }

  public void suppressConditions(boolean suppressConditions) {
    this.suppressConditions = suppressConditions;
  }
  
  /**
   * Free all BDDs held by this presence condition manager.  Note this does not
   * free the BDDs generated by it, but only those it uses to track
   * nested presence conditions.
   */
  public void free() {
    global.delRef();
    if (null != branch) {
      branch.delRef();
    }
    if (null != notBranches) {
      notBranches.delRef();
    }
    for (PresenceCondition cond : stack) {
      if (null != cond) {
        cond.delRef();
      }
    }
  }
  
  /**
   * Push the current presence condition onto the stack.
   */
  public void push() {
    stack.push(notBranches);
    stack.push(branch);
    stack.push(global);
    
    notBranches = newTrue();
    branch = newFalse();
    global = newFalse();
  }
  
  /**
   * Enters a new local presence condition.
   *
   * @param bdd The new local presence condition.  Will be delRef'ed.
   */
  public void enter(PresenceCondition cond) {
    PresenceCondition andNot = notBranches.andNot(branch);
    notBranches.delRef(); notBranches = andNot;
    branch.delRef(); branch = cond.addRef();
    
    //       peekGlobal   &&  notBranches   &&     branch
    PresenceCondition peekGlobalAndNotBranches = stack.peek().and(notBranches);
    global.delRef(); global = peekGlobalAndNotBranches.and(branch);
    peekGlobalAndNotBranches.delRef();
  }
  
  /**
   * Enter a NEXT conditional branch.  IMPORTANT: the preprocessor
   * needs to call enterElse before evaluating the #elif's conditional
   * expression, otherwise macros in the expression will be evaluated
   * as if they were in the previous branch, which is wrong.
   *
   * @param bdd The presence condition of the branch.
   */
  public void enterElif(PresenceCondition cond) {
    branch = cond.addRef();
    
    PresenceCondition peekGlobalAndNotBranches = stack.peek().and(notBranches);
    global.delRef(); global = peekGlobalAndNotBranches.and(branch);
    peekGlobalAndNotBranches.delRef();
  }
  
  /**
   * Enter an else branch.  Else is a branch whose local presence condition is
   * TRUE.
   */
  public void enterElse() {
    enter(newTrue());
  }
  
  /**
   * Pop the current presence condition off of the stack.
   */
  public void pop() {
    global.delRef(); global = stack.pop();
    branch.delRef(); branch = stack.pop();
    notBranches.delRef(); notBranches = stack.pop();
  }
  
  /**
   * Get the parent presence condition, i.e. the presence condition
   * containing the current one.
   *
   * @param The parent presence condition.
   */
  public PresenceCondition parent() {
    return stack.peek().addRef();
  }

  /**
   * Whether the current presence condition is always true.
   *
   * @return true When the the current presence condition is true.
   */
  public boolean isTrue() {
    return global.isTrue();
  }
  
  /**
   * Whether the current presence condition is always false.
   *
   * @return true When the the current presence condition is false.
   */
  public boolean isFalse() {
    return global.isFalse();
  }
  
  /**
   * Whether the current presence condition is not always false.  Note
   * that this is not the same is isTrue, which means that the
   * formulas is always true.
   *
   * @return true When the the current presence condition is not false.
   */
  public boolean isNotFalse() {
    return ! global.isFalse();
  }

  /**
   * Get the current presence condition.
   *
   * @return The current presence condition.
   */
  public PresenceCondition reference() {
    return global.addRef();
  }
  
  public boolean is(PresenceCondition presenceCondition) {
    return global.is(presenceCondition);
  }

  // START TODO: rework/remove code that is manipulating BDDs
  // /**
  //  * Collect the domain of all CONFIG_-related BDDs.  This domain is
  //  * used by simplifyToConfigs.  Calling this method will regenerate
  //  * the domain if it's already computed.
  //  */
  // public void generateConfigDomain() {
  //   if (null != this.configDomain) this.configDomain.free();
    
  //   this.configDomain = B.zero();
  //   for (int i = 0; i < getVariableManager().getSize(); i++) {
  //     if (getVariableManager().getName(i).startsWith("(defined CONFIG_")) {
  //       this.configDomain = this.configDomain.orWith(getVariableManager().getVariable(getVariableManager().getName(i)));
  //     }
  //   }
  // }

  // /**
  //  * Check whether the config domain has been computed yet.
  //  *
  //  * @return true if the domain has been computed.
  //  */
  // public boolean hasConfigDomain() {
  //   return null != this.getConfigDomain();
  // }

  // /**
  //  * Get the CONFIG_-only domain.
  //  *
  //  * @return The config domain
  //  */
  // public BDD getConfigDomain() {
  //   return this.configDomain;
  // }

  // /**
  //  * Get the CONFIG_-only domain.
  //  *
  //  * @return The config domain
  //  */
  // public PresenceCondition getConfigDomainCond() {
  //   if (! hasConfigDomain()) {
  //     generateConfigDomain();
  //   }

  //   return new PresenceCondition(getConfigDomain());
  // }

  // /**
  //  * Simplify the BDD by narrowing the domain to only CONFIG_
  //  * variables.  This will call generateConfigDomain only if the
  //  * domain does not exist already.  Call generateConfigDomain to
  //  * regenerate if new variables have been added.
  //  *
  //  * @param pc The presence condition to simplify.
  //  * @return The simplified BDD.
  //  */
  // public PresenceCondition simplifyToConfigs(PresenceCondition pc) {
  //   if (! hasConfigDomain()) {
  //     generateConfigDomain();
  //   }

  //   BDD r = pc.getBDD().id();
  //   for (int i = 0; i < getVariableManager().getSize(); i++) {
  //     if (getVariableManager().getName(i).contains("CONFIG_")) {
  //       r = r.simplify(getVariableManager().getVariable(getVariableManager().getName(i)));
  //     }
  //   }

  //   return new PresenceCondition(r);
  //   // return new PresenceCondition(pc.getBDD().simplify(getConfigDomain()));
  // }

  // // TODO: convert to use presence condition operations
  // public PresenceCondition getRestrictCond(boolean val) {
  //   BDD restrictBDD = B.one();
  //   for (int i = 0; i < getVariableManager().getSize(); i++) {
  //     // if (! getVariableManager().getName(i).contains("(defined CONFIG_")) {
  //     if (! getVariableManager().getName(i).contains("CONFIG_")) {
  //       if (val) {
  //         restrictBDD = restrictBDD.andWith(getVariableManager().getVariable(name));
  //       } else {
  //         BDD varbdd = getVariableManager().getVariable(getVariableManager().getName(i));
  //         restrictBDD = restrictBDD.andWith(varbdd.not());
  //         varbdd.free();
  //       }
  //     }
  //   }

  //   return new PresenceCondition(restrictBDD);
  // }
  // END TODO

  /**
   * Return a new presence condition, given the bdd (created by this
   * PresenceConditionManager's BDDFactory) and a string
   * representation of the expression.  This is used by
   * ConditionEvaluator to construct a presence condition.
   */
  public PresenceCondition newCondition(BDD bdd, Node tree, BoolExpr expr) {
    return new PresenceCondition(bdd, tree, expr);
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
  // private Variables getVariableManager() {
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
    return new PresenceCondition(getVariableManager().getVariable(name),
                                 GNode.create("PrimaryIdentifier", name),
                                 ctx.mkBoolConst(name));
  }

  /**
   * Syntactic sugar for getting a variable A in its (define A) form.
   *
   * @param name The macro name.
   * @return A new presence condition containing the variable.
   */
  public PresenceCondition getDefinedVariable(String name) {
    // get defined variable gives a new bdd, which presence condition expects
    return new PresenceCondition(getVariableManager().getDefinedVariable(name),
                                 GNode.create("DefinedExpression", GNode.create("PrimaryIdentifier", name)),
                                 ctx.mkBoolConst(getVariableManager().createDefinedVariable(name)));
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
   * The BDD factory used to create BDDs.  This is used by
   * ConditionEvaluator.
   *
   * @return The BDD factory.
   */
  public BDDFactory getBDDFactory() {
    return B;
  }

  /**
   * The z3 context factory used to create z3 expressions.  This is
   * used by ConditionEvaluator.
   *
   * @return The z3 context.
   */
  public Context getZ3Context() {
    return ctx;
  }

  // /**
  //  * Return a new presence condition with the disjunction of all
  //  * variables, turned off or on according to the parameters.
  //  *
  //  * @param defaultSetting true for all variables on, false for off.
  //  * @param exceptions null for none, list of strings to set opposite
  //  * the defaultSetting.
  //  * @return The new presence condition.
  //  */
  // public BDD evaluateBDDs(ConditionEvaluator evaluator) {
  //   BDD b = B.one();

  //   for (int i = 0; i < vars.indices.size(); i++) {
  //     String varString = vars.indices.get(i);
  //     final CLexer clexer = new CLexer(new StringReader(varString));
  //     clexer.setFileName("string expression");

  //     Iterator<Syntax> stream = new Iterator<Syntax>() {
  //         Syntax syntax;
    
  //         public Syntax next() {
  //           try {
  //             syntax = clexer.yylex();
  //           } catch (IOException e) {
  //             e.printStackTrace();
  //             throw new RuntimeException();
  //           }
  //           return syntax;
  //         }
    
  //         public boolean hasNext() {
  //           return syntax.kind() != Kind.EOF;
  //         }

  //         public void remove() {
  //           throw new UnsupportedOperationException();
  //         }
  //       };

  //     stream.next();

  //     BDD result = evaluator.evaluate(stream);

  //     if (result.isOne()) {
  //       b.andWith(B.ithVar(i));
  //     } else if (result.isZero()) {
  //       BDD ith = B.ithVar(i);
  //       BDD not = ith.not();
  //       ith.free();
  //       b.andWith(not);
  //     } else {
  //       System.err.println("unresolved BDD variable");
  //       System.err.println(varString);
  //       BDD ith = B.ithVar(i);
  //       BDD not = ith.not();
  //       ith.free();
  //       b.andWith(not);
  //       // System.exit(1);
  //     }
  //   }

  //   return b;
  // }

  // /**
  //  * Return a new presence condition with the disjunction of all
  //  * variables, turned off or on according to the parameters.
  //  *
  //  * @param defaultSetting true for all variables on, false for off.
  //  * @param exceptions null for none, list of strings to set opposite
  //  * the defaultSetting.
  //  * @return The new presence condition.
  //  */
  // public BDD createConfiguration(boolean defaultSetting,
  //                                List<String> exceptions) {
  //   BDD b = B.one();

  //   for (int i = 0; i < vars.indices.size(); i++) {
  //     boolean setting = defaultSetting;
  //     String varString = vars.indices.get(i);

  //     if (null != exceptions && exceptions.contains(varString)) {
  //       setting = ! setting;
  //     }

  //     if (setting) {
  //       b.andWith(B.ithVar(i));
  //     } else {
  //       BDD ith = B.ithVar(i);
  //       BDD not = ith.not();
  //       ith.free();
  //       b.andWith(not);
  //     }
  //   }

  //   return b;
  // }

  // /**
  //  * Return a new presence condition with the disjunction of all
  //  * variables.
  //  *
  //  * @return The new presence condition.
  //  */
  // public BDD allYes() {
  //   return createConfiguration(true, null);
  // }

  // /**
  //  * Return a new presence condition with the disjunction of all
  //  * variables negated.
  //  *
  //  * @return The new presence condition.
  //  */
  // public BDD allNo() {
  //   return createConfiguration(false, null);
  // }

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
  
  private static Node oneNode = GNode.create("IntegerConstant", "1");

  private static Node zeroNode = GNode.create("IntegerConstant", "0");
    

  /** A reference-counted presence condition that automatically cleans up BDD when
    * nothing references it anymore.
    */
  public class PresenceCondition {
    /** The BDD backing the presence condition. */
    private BDD bdd;

    /** The tree representation of this expression. */
    private Node tree;

    /** The z3 expression representation of this expression. */
    private BoolExpr expr;

    /** Whether simplification was already run or not. */
    private boolean isSimplified = false;

    /**
     * The number of references to the presence condition, used to
     * automatically destroy the BDD object.
     */
    private int refs;

    /** Creates a new PresenceCondition out of the given bdd.  Make sure the bdd
      * is not shared by anyone else.
      */
    private PresenceCondition(BDD bdd, Node tree, BoolExpr expr) {
      this.bdd = bdd;
      this.refs = 1;
      this.tree = tree;
      this.expr = expr;
      // this.simplify();
    }
    
    private PresenceCondition(boolean value) {
      this.bdd = value ? B.one() : B.zero();
      this.refs = 1;
      this.tree = value ? oneNode : zeroNode;
      this.expr = value ? ctx.mkTrue() : ctx.mkFalse();
      this.isSimplified = true;
    }
    
    public boolean isTrue() {
      return bdd.isOne();
    }
    
    public boolean isFalse() {
      return bdd.isZero();
    }
    
    public boolean isNotFalse() {
      return ! isFalse();
    }

    // TODO: z3 simplify
    // ApplyResult ar = applyTactic(ctx, ctx.mkTactic("simplify"), goal);
    
    /** Return the negated presence condition. */
    public PresenceCondition not() {
      GNode nottree;
      BoolExpr notexpr;
      if (this.tree.getName().equals("LogicalNegationExpression")) {
        nottree = (GNode) this.tree.get(0);
        // TODO: just remove the negation
        notexpr = (BoolExpr) ctx.mkNot(this.expr).simplify();
      } else {
        nottree = GNode.create("LogicalNegationExpression", this.tree);
        // this.simplify();
        notexpr = ctx.mkNot(this.expr);
      }
      return new PresenceCondition(bdd.not(), nottree, notexpr);
    }
    
    /** Return this presence condition and c.  Free any intermediate bdds. */
    public PresenceCondition and(PresenceCondition c) {
      if (this.is(c)) {
        return this.addRef();
      } else if (c.isTrue()) {
        return this.addRef();
      } else if (this.isTrue()) {
        return c.addRef();
      } else if (this.isFalse()) {
        return new PresenceCondition(false);
      } else if (c.isFalse()) {
        return new PresenceCondition(false);
      } else {
        // this.simplify();
        // c.simplify();
        return new PresenceCondition(bdd.and(c.bdd),
                                     GNode.create("LogicalAndExpression", this.tree, c.tree),
                                     ctx.mkAnd(this.expr, c.expr));
      }
    }

    /** Return this presence condition and not c.  Free any intermediate bdds. */
    public PresenceCondition andNot(PresenceCondition c) {
      PresenceCondition not = c.not();
      PresenceCondition result = this.and(not);
      not.delRef();
      return result;
      // PresenceCondition newPresenceCondition;
      // BDD notBDD;
      
      // notBDD = c.bdd.not();
      // newPresenceCondition = new PresenceCondition(bdd.and(notBDD));
      // notBDD.free();
      
      // return newPresenceCondition;
    }
    
    /** Return this presence condition or c.  Free any intermediate bdds. */
    public PresenceCondition or(PresenceCondition c) {
      if (this.is(c)) {
        return this.addRef();
      } else if (c.isFalse()) {
        return this.addRef();
      } else if (this.isFalse()) {
        return c.addRef();
      } else if (this.isTrue()) {
        return new PresenceCondition(true);
      } else if (c.isTrue()) {
        return new PresenceCondition(true);
      } else {
        // this.simplify();
        // c.simplify();
        return new PresenceCondition(bdd.or(c.bdd),
                                     GNode.create("LogicalOrExpression", this.tree, c.tree),
                                     ctx.mkOr(this.expr, c.expr));
      }
    }

    // TODO: handle restrict and simplify for other representations or
    // // remove their use
    // /** Restrict */
    // public PresenceCondition restrict(PresenceCondition c) {
    //   return new PresenceCondition(bdd.restrict(c.getBDD()));
    // }
    
    // /** Simplify */
    // public PresenceCondition simplify(PresenceCondition c) {
    //   return new PresenceCondition(bdd.simplify(c.getBDD()));
    // }

    // /** One sat */
    // public PresenceCondition satOne() {
    //   // TODO: may need to remove this and rework its users
    //   return new PresenceCondition(bdd.satOne());
    // }
    
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

    public boolean useContextSimplify = true;
    public String nameContextSimplify = "ctx-simplify";  // better than "simplify" alone
    // public String nameContextSimplify = "ctx-solver-simplify";  // best simplification, but very slow due to calls to solver
    
    protected void simplify() {
      if (! isSimplified) {
        isSimplified = true;
        if (isFalse()) {
          this.expr = ctx.mkFalse();
        } else if (isTrue()) {
          this.expr = ctx.mkTrue();
        } else {
          if (useContextSimplify) {
            this.expr = contextsimplify(expr);
          }
          this.expr = (BoolExpr) expr.simplify();
        }
      }
    }

    protected BoolExpr contextsimplify(BoolExpr expr) {
      Goal goal = ctx.mkGoal(true, false, false);
      goal.add(expr);
      Tactic tactic = ctx.mkTactic(nameContextSimplify);
      ApplyResult ar = tactic.apply(goal);

      if (ar.getNumSubgoals() != 1) {
        throw new AssertionError("expected only one subgoal from z3 tactic");
      }

      Goal result = ar.getSubgoals()[0];
      return result.AsBoolExpr();
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
     * Get the expression tree representation of this presence condition.
     */
    public Node tree() {
      return tree;
    }
    
    /**
     * Get the z3 expression representation of this presence condition.
     */
    public BoolExpr z3() {
      return expr;
    }
    
    /**
     * Print the BDD expression to a writer.
     *
     * @param writer The writer.
     * @throws IOException Because it uses a Writer.
     */
    public void print(Writer writer) throws IOException {
      
      //printz3(expr, writer);
      printBDD(bdd, writer);
    }

    /**
     * Print the presence condition using z3 to a writer.
     *
     * @param writer The writer.
     * @throws IOException Because it uses a Writer.
     */
    public void printz3(BoolExpr expr, Writer writer) throws IOException {
      // boolean save = useContextSimplify;
      // useContextSimplify = false;
      // this.simplify();
      // useContextSimplify = save;

      // writer.write(expr.toString());

      Solver solver = getZ3Context().mkSimpleSolver();
      solver.add(expr);
      writer.write(solver.toString().replace("\n", ""));
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

    // /** Output the presence condition as a valid cpp conditional expression */
    // public String toCNF() {
    //   StringWriter writer = new StringWriter();

    //   try {
    //     PresenceCondition not = this.not();
    //     printNotCNF(not, writer);
    //     not.delRef();
    //   } catch (IOException e) {
    //     // An inelegant way to sidestep not being able to throw an
    //     // exception from the overridden toString method.
    //     throw new RuntimeException();
    //   }

    //   return writer.toString();
    // }

    // /** Output the presence condition as a valid cpp conditional expression */
    // public String toNotCNF() {
    //   StringWriter writer = new StringWriter();

    //   try {
    //     printNotCNF(this, writer);
    //   } catch (IOException e) {
    //     // An inelegant way to sidestep not being able to throw an
    //     // exception from the overridden toString method.
    //     throw new RuntimeException();
    //   }

    //   return writer.toString();
    // }

    /** Output the presence condition as a valid cpp conditional expression */
    public String toString() {
      // TODO: do boolean expression simplification
      // return this.tree.toString();
      StringWriter writer = new StringWriter();

      if (! suppressConditions) {
        try {
          print(writer);
        } catch (IOException e) {
          // An inelegant way to sidestep not being able to throw an
          // exception from the overridden toString method.
          throw new RuntimeException();
        }
      } else {
        writer.append("PRESENCE_CONDITION");
      }

      return writer.toString();
    }

    // /**
    //  * Use the underlying BDD's hashcode so that the same conditions
    //  * will have the same hash code.
    //  */
    // @Override
    // public int hashCode() {
    //   return this.bdd.hashCode();
    // }

    /**
     *
     */
    @Override
    public boolean equals(Object cond) {
      if (cond instanceof PresenceCondition) {
        return this.is((PresenceCondition) cond);
        // return this.hashCode() == ((PresenceCondition) cond).hashCode();
      } else {
        return false;
      }
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

