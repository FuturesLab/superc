package xtc.lang.cpp;

import java.lang.StringBuilder;
import java.util.Iterator;
import java.util.List;
import java.util.LinkedList;

import xtc.lang.cpp.PresenceConditionManager.PresenceCondition;

/**
 * This is a multiverse, which stores a set of data tagged by presence
 * conditions.  It takes a type parameter to indicate the type of data
 * it contains.
 *
 * @author Paul Gazzillo
 * @version $Revision: 1.272 $
 */
public class Multiverse<T> implements Iterable<Multiverse.Element<T>> {
  protected List<Element<T>> contents;
  //protected PresenceCondition doesntExist;
  
  public Multiverse() {
    contents = new LinkedList<Element<T>>();
    //doesntExist = p.new PresenceCondition(true);
  }
	
  /** copy constructor */
  public Multiverse(Multiverse<T> mv) {
    this();
    for (Element<T> elem : mv.contents) {
      this.add(elem.getData(), elem.getCondition());
    }
  }

  /**
   * This is one element of the multiverse, i.e., a pair containing
   * the data and the presence condition representing the
   * configuration under which that version of the data appears.
   */
  public static class Element<T> {
    T data;
    PresenceCondition cond;

    public Element(T data, PresenceCondition cond) {
      this.data = data;
      this.cond = cond;
      this.cond.addRef();
    }

    public Element(T data) {
      this.data = data;
      this.cond = null;
    }
    
    public Element(PresenceCondition cond) {
      this.data = null;
      this.cond = cond;
      this.cond.addRef();
    }

    public Element() {
      this.data = null;
      this.cond = null;
    }
    
    public void destruct() {
      this.cond.delRef();
    }

    public void setData(T t) {
      this.data = t;
    }
    
    public void setCondition(PresenceCondition p) {
      if (cond != null) {
        this.cond.delRef();
      }
      this.cond = p;
      this.cond.addRef();
    }

    public boolean exclusiveFrom(PresenceCondition p) {
      return cond.isMutuallyExclusive(p);
    }
      
    public String toString() {
      StringBuilder sb = new StringBuilder();

      sb.append("(");
      sb.append(this.data);
      sb.append(", ");
      sb.append(this.cond);
      sb.append(")");
      
      return sb.toString();
    }

    public T getData() {
      return data;
    }

    public PresenceCondition getCondition() {
      return cond;
    }
  }

  /**
   * Decrement the references of all presence conditions and remove
   * the string builders.  Be sure to do this once you no longer
   * need the multiverse, e.g., after constructing a new multiverse
   * using this one.  The multiverse will no longer be useable after
   * calling this function.
   */
  public void destruct() {
    for (Element<T> elem : contents) {
      elem.destruct();
    }
    contents.clear();
    contents = null;
  }

  /**
   * Add a new element to the multiverse.
   */
  public void add(Element<T> elem) {
    this.add(elem.getData(), elem.getCondition());
  }

  /**
   * Add a new element to the multiverse.
   */
  public void add(T data, PresenceCondition cond) {
    contents.add(new Element<T>(data, cond));
    //doesntExist = doesntExist.andNot(cond);
  }

  /**
   * Get an element of the list.  Warning, the backing storage is a
   * linked list, so this may only be efficient for get(0).
   */
  public Element<T> get(int index) {
    return contents.get(0);
  }

  public int size() {
    return contents.size();
  }

  public boolean isEmpty() {
    return size() == 0;
  }

  public Iterator<Element<T>> iterator() {
    return contents.iterator();
  }

  public String toString() {
    StringBuilder sb = new StringBuilder();
    
    sb.append(this.contents);
    return sb.toString();
  }

  /*  public PresenceCondition getUndefined()
      {
      return doesntExist;
      }*/
}
