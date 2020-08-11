package xtc.lang.cpp;

import xtc.lang.cpp.Multiverse;

import xtc.lang.cpp.Multiverse.Element;

import xtc.lang.cpp.PresenceConditionManager.PresenceCondition;

import xtc.lang.cpp.SymbolTable.Entry;

import xtc.lang.cpp.Declarator;
import xtc.lang.cpp.Declarator.EmptyDeclarator;
import xtc.lang.cpp.Declarator.ParenDeclarator;
import xtc.lang.cpp.Declarator.SimpleDeclarator;
import xtc.lang.cpp.Declarator.PointerDeclarator;
import xtc.lang.cpp.Declarator.QualifiedPointerDeclarator;
import xtc.lang.cpp.Declarator.PointerAbstractDeclarator;
import xtc.lang.cpp.Declarator.QualifiedPointerAbstractDeclarator;
import xtc.lang.cpp.Declarator.ArrayDeclarator;
import xtc.lang.cpp.Declarator.ArrayAbstractDeclarator;
import xtc.lang.cpp.Declarator.FunctionDeclarator;
import xtc.lang.cpp.Declarator.ParameterDeclarator;
import xtc.lang.cpp.Declarator.ParameterListDeclarator;

import xtc.type.AliasT;

import java.util.List;
import java.util.LinkedList;

/**
 * These operators are used for cartesian products and transformations
 * in the desugaring SuperC grammar implementation.  This class only
 * holds static fields and methods and is not meant to be
 * instantiated.
 */
class DesugaringOperators {

  private DesugaringOperators() { }

  /**
   * A generic transformer that takes an object of some type and
   * turns it into a single-element list.  This is used for taking the
   * cartesian product of a multiverse of lists with a multiverse of
   * objects of the type that list stores.
   */
  public static class ListWrapper<T> extends Multiverse.Transformer<T, List<T>> {
    List<T> transform(T from) {
      List<T> result = new LinkedList<T>();
      result.add(from);
      return result;
    }
  }
  
  /**
   * Concatenates two list non-destructively.  This is used to create
   * multiverse operators that concat multiverses of lists of any
   * type.
   */
  private static <T> List<T> concatLists(List<T> list1, List<T> list2) {
    List<T> newlist = new LinkedList<T>();
    newlist.addAll(list1);
    newlist.addAll(list2);
    return newlist;
  }

  /*****************************************************************************
   ********* Multiverse operators for Declarators
   *****************************************************************************/

  /**
   * Create a function declarator from the product of a declarator and parameters.
   */
  public final static Multiverse.Operator<Declarator> createCompoundDeclarator = (declarator, abstractdeclarator) -> {
    if (abstractdeclarator.isParameterListDeclarator()) {
      return new FunctionDeclarator(declarator, (ParameterListDeclarator) abstractdeclarator);
    } else if (abstractdeclarator.isArrayAbstractDeclarator()) {
      return new ArrayDeclarator(declarator, (ArrayAbstractDeclarator) abstractdeclarator);
    } else {
      throw new AssertionError("unexpected abstract declarator type in ParameterTypedefDeclarator");
    }
  };

  /**
   * Create a multiverse of qualified pointer declarators.  This is not
   * a multiverse operator, because it combines two different types,
   * TypeBuilder and Declarator.
   */
  public final static Multiverse<Declarator> createQualifiedPointerDeclarator(Multiverse<Declarator> declarators, Multiverse<TypeBuilder> qualifierlists) {
    Multiverse<Declarator> valuemv = new Multiverse<Declarator>();

    for (Element<TypeBuilder> qualifierlist : qualifierlists) {
      for (Element<Declarator> declarator : declarators) {
        PresenceCondition combinedCond = qualifierlist.getCondition().and(declarator.getCondition());
        valuemv.add(new QualifiedPointerDeclarator(declarator.getData(),
                                                   qualifierlist.getData()),
                    combinedCond);
        combinedCond.delRef();
      }
    }

    return valuemv;
  }

  /**
   * Wrap with paren declarators.
   */
  public final static Multiverse.Transformer<Declarator, Declarator> toParenDeclarator = new Multiverse.Transformer<Declarator, Declarator>() {
      Declarator transform(Declarator from) {
        return new ParenDeclarator(from);
      }
    };

  /**
   * Create pointer declarators.
   */
  public final static Multiverse.Transformer<Declarator, Declarator> toPointerDeclarator = new Multiverse.Transformer<Declarator, Declarator>() {
      Declarator transform(Declarator from) {
        return new PointerDeclarator(from);
      }
    };

  /**
   * Create qualified pointer declarators.
   */
  public final static Multiverse.Transformer<TypeBuilder, Declarator> toQualifiedPointerAbstractDeclarator = new Multiverse.Transformer<TypeBuilder, Declarator>() {
      Declarator transform(TypeBuilder from) {
        return new QualifiedPointerAbstractDeclarator(from);
      }
    };

  /**
   * Create abstract array declarators.
   */
  public final static Multiverse.Transformer<StringBuilder, Declarator> toAbstractArrayDeclarator = new Multiverse.Transformer<StringBuilder, Declarator>() {
      Declarator transform(StringBuilder from) {
        return new ArrayAbstractDeclarator(from);
      }
    };

  /**
   * Concatenate two ParmeterListDeclarators
   */
  public final static Multiverse.Operator<List<ParameterDeclarator>> PARAMLISTCONCAT = (list1, list2) -> {
    return concatLists(list1, list2);
  };

  /**
   * A multiverse transformation to wrap a parameter declarator into a
   * single-element list.
   */
  public final static Multiverse.Transformer<ParameterDeclarator, List<ParameterDeclarator>> parameterListWrap
    = new ListWrapper<ParameterDeclarator>();

  /**
   * A multiverse transformation to turn a list of ParameterDeclarators
   * into a ParameterListDeclarator.
   */
  public final static Multiverse.Transformer<List<ParameterDeclarator>, ParameterListDeclarator> toParameterList = new Multiverse.Transformer<List<ParameterDeclarator>, ParameterListDeclarator>() {
      ParameterListDeclarator transform(List<ParameterDeclarator> from) {
        return new ParameterListDeclarator(from);
      }
    };

  /*****************************************************************************
   ********* Multiverse operators for TypeBuilders
   *****************************************************************************/

  public final static Multiverse.Operator<TypeBuilder> TBCONCAT = (tb1, tb2) -> {
    return tb1.combine(tb2);
  };

  /**
   * A multiverse transformation to turn a symtab entries for a
   * typedefname into a multiverse of typebuilders.
   */
  public final static Multiverse.Transformer<SymbolTable.Entry, TypeBuilder> typedefEntriesToTypeBuilder = new Multiverse.Transformer<SymbolTable.Entry, TypeBuilder>() {
      TypeBuilder transform(SymbolTable.Entry from) {
        // TODO: improve TypeBuilder's interface
        TypeBuilder tbunit = new TypeBuilder();
        if (from == SymbolTable.ERROR) {
          System.err.println("INFO: use of typedefname with invalid declaration");
          // TODO: needs a unit test
          tbunit.setTypeError();
        } else if (from == SymbolTable.UNDECLARED) {
          System.err.println("INFO: use of undeclared typedefname");
          // TODO: needs a unit test
          tbunit.setTypeError();
        } else {
          System.err.println("TODO: check that type is actually alias " + from.getType().isAlias());
          if (! from.getType().isAlias()) {
            System.err.println("INFO: typedefname is not declared as alias type");
            tbunit.setTypeError();
            // TODO: double-check that the parser already handles
            // this case, although it seems like the parser is
            // already handling this

            // TODO: use the new symtab for reclassifying
            // typedefname tokens
          } else {
            tbunit.setTypedef(from.getType().toAlias());
          }
        }
        return tbunit;
      }
    };

  /*****************************************************************************
   ********* Multiverse operators for declarations
   *****************************************************************************/

  /**
   * A multiverse transformation to wrap a parameter declarator into a
   * single-element list.
   */
  public final static Multiverse.Transformer<Declaration, List<Declaration>> declarationListWrap
    = new ListWrapper<Declaration>();
  
  /**
   * Concatenate two Declaration lists
   */
  public final static Multiverse.Operator<List<Declaration>> DECLARATIONLISTCONCAT = (list1, list2) -> {
    return concatLists(list1, list2);
  };

  /*****************************************************************************
   ********* Multiverse operators for Statements and Expressions
   *****************************************************************************/

  /**
   * Concatenate operator for string builders.
   */
  public final static Multiverse.Operator<StringBuilder> SBCONCAT = (sb1, sb2) -> {
    StringBuilder newsb = new StringBuilder();
    newsb.append(sb1);
    newsb.append(sb2);
    return newsb;
  };
}
