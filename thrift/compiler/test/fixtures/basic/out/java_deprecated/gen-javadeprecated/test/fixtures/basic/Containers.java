/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.basic;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class Containers implements TBase, java.io.Serializable, Cloneable, Comparable<Containers> {
  private static final TStruct STRUCT_DESC = new TStruct("Containers");
  private static final TField I32_LIST_FIELD_DESC = new TField("I32List", TType.LIST, (short)1);
  private static final TField STRING_SET_FIELD_DESC = new TField("StringSet", TType.SET, (short)2);
  private static final TField STRING_TO_I64_MAP_FIELD_DESC = new TField("StringToI64Map", TType.MAP, (short)3);

  public List<Integer> I32List;
  public Set<String> StringSet;
  public Map<String,Long> StringToI64Map;
  public static final int I32LIST = 1;
  public static final int STRINGSET = 2;
  public static final int STRINGTOI64MAP = 3;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(I32LIST, new FieldMetaData("I32List", TFieldRequirementType.DEFAULT, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.I32))));
    tmpMetaDataMap.put(STRINGSET, new FieldMetaData("StringSet", TFieldRequirementType.DEFAULT, 
        new SetMetaData(TType.SET, 
            new FieldValueMetaData(TType.STRING))));
    tmpMetaDataMap.put(STRINGTOI64MAP, new FieldMetaData("StringToI64Map", TFieldRequirementType.DEFAULT, 
        new MapMetaData(TType.MAP, 
            new FieldValueMetaData(TType.STRING), 
            new FieldValueMetaData(TType.I64))));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(Containers.class, metaDataMap);
  }

  public Containers() {
  }

  public Containers(
      List<Integer> I32List,
      Set<String> StringSet,
      Map<String,Long> StringToI64Map) {
    this();
    this.I32List = I32List;
    this.StringSet = StringSet;
    this.StringToI64Map = StringToI64Map;
  }

  public static class Builder {
    private List<Integer> I32List;
    private Set<String> StringSet;
    private Map<String,Long> StringToI64Map;

    public Builder() {
    }

    public Builder setI32List(final List<Integer> I32List) {
      this.I32List = I32List;
      return this;
    }

    public Builder setStringSet(final Set<String> StringSet) {
      this.StringSet = StringSet;
      return this;
    }

    public Builder setStringToI64Map(final Map<String,Long> StringToI64Map) {
      this.StringToI64Map = StringToI64Map;
      return this;
    }

    public Containers build() {
      Containers result = new Containers();
      result.setI32List(this.I32List);
      result.setStringSet(this.StringSet);
      result.setStringToI64Map(this.StringToI64Map);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Containers(Containers other) {
    if (other.isSetI32List()) {
      this.I32List = TBaseHelper.deepCopy(other.I32List);
    }
    if (other.isSetStringSet()) {
      this.StringSet = TBaseHelper.deepCopy(other.StringSet);
    }
    if (other.isSetStringToI64Map()) {
      this.StringToI64Map = TBaseHelper.deepCopy(other.StringToI64Map);
    }
  }

  public Containers deepCopy() {
    return new Containers(this);
  }

  public List<Integer> getI32List() {
    return this.I32List;
  }

  public Containers setI32List(List<Integer> I32List) {
    this.I32List = I32List;
    return this;
  }

  public void unsetI32List() {
    this.I32List = null;
  }

  // Returns true if field I32List is set (has been assigned a value) and false otherwise
  public boolean isSetI32List() {
    return this.I32List != null;
  }

  public void setI32ListIsSet(boolean __value) {
    if (!__value) {
      this.I32List = null;
    }
  }

  public Set<String> getStringSet() {
    return this.StringSet;
  }

  public Containers setStringSet(Set<String> StringSet) {
    this.StringSet = StringSet;
    return this;
  }

  public void unsetStringSet() {
    this.StringSet = null;
  }

  // Returns true if field StringSet is set (has been assigned a value) and false otherwise
  public boolean isSetStringSet() {
    return this.StringSet != null;
  }

  public void setStringSetIsSet(boolean __value) {
    if (!__value) {
      this.StringSet = null;
    }
  }

  public Map<String,Long> getStringToI64Map() {
    return this.StringToI64Map;
  }

  public Containers setStringToI64Map(Map<String,Long> StringToI64Map) {
    this.StringToI64Map = StringToI64Map;
    return this;
  }

  public void unsetStringToI64Map() {
    this.StringToI64Map = null;
  }

  // Returns true if field StringToI64Map is set (has been assigned a value) and false otherwise
  public boolean isSetStringToI64Map() {
    return this.StringToI64Map != null;
  }

  public void setStringToI64MapIsSet(boolean __value) {
    if (!__value) {
      this.StringToI64Map = null;
    }
  }

  @SuppressWarnings("unchecked")
  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case I32LIST:
      if (__value == null) {
        unsetI32List();
      } else {
        setI32List((List<Integer>)__value);
      }
      break;

    case STRINGSET:
      if (__value == null) {
        unsetStringSet();
      } else {
        setStringSet((Set<String>)__value);
      }
      break;

    case STRINGTOI64MAP:
      if (__value == null) {
        unsetStringToI64Map();
      } else {
        setStringToI64Map((Map<String,Long>)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case I32LIST:
      return getI32List();

    case STRINGSET:
      return getStringSet();

    case STRINGTOI64MAP:
      return getStringToI64Map();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof Containers))
      return false;
    Containers that = (Containers)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetI32List(), that.isSetI32List(), this.I32List, that.I32List)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetStringSet(), that.isSetStringSet(), this.StringSet, that.StringSet)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetStringToI64Map(), that.isSetStringToI64Map(), this.StringToI64Map, that.StringToI64Map)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {I32List, StringSet, StringToI64Map});
  }

  @Override
  public int compareTo(Containers other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetI32List()).compareTo(other.isSetI32List());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(I32List, other.I32List);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetStringSet()).compareTo(other.isSetStringSet());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(StringSet, other.StringSet);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetStringToI64Map()).compareTo(other.isSetStringToI64Map());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(StringToI64Map, other.StringToI64Map);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case I32LIST:
          if (__field.type == TType.LIST) {
            {
              TList _list6 = iprot.readListBegin();
              this.I32List = new ArrayList<Integer>(Math.max(0, _list6.size));
              for (int _i7 = 0; 
                   (_list6.size < 0) ? iprot.peekList() : (_i7 < _list6.size); 
                   ++_i7)
              {
                int _elem8;
                _elem8 = iprot.readI32();
                this.I32List.add(_elem8);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case STRINGSET:
          if (__field.type == TType.SET) {
            {
              TSet _set9 = iprot.readSetBegin();
              this.StringSet = new HashSet<String>(Math.max(0, 2*_set9.size));
              for (int _i10 = 0; 
                   (_set9.size < 0) ? iprot.peekSet() : (_i10 < _set9.size); 
                   ++_i10)
              {
                String _elem11;
                _elem11 = iprot.readString();
                this.StringSet.add(_elem11);
              }
              iprot.readSetEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case STRINGTOI64MAP:
          if (__field.type == TType.MAP) {
            {
              TMap _map12 = iprot.readMapBegin();
              this.StringToI64Map = new HashMap<String,Long>(Math.max(0, 2*_map12.size));
              for (int _i13 = 0; 
                   (_map12.size < 0) ? iprot.peekMap() : (_i13 < _map12.size); 
                   ++_i13)
              {
                String _key14;
                long _val15;
                _key14 = iprot.readString();
                _val15 = iprot.readI64();
                this.StringToI64Map.put(_key14, _val15);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.I32List != null) {
      oprot.writeFieldBegin(I32_LIST_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I32, this.I32List.size()));
        for (int _iter16 : this.I32List)        {
          oprot.writeI32(_iter16);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.StringSet != null) {
      oprot.writeFieldBegin(STRING_SET_FIELD_DESC);
      {
        oprot.writeSetBegin(new TSet(TType.STRING, this.StringSet.size()));
        for (String _iter17 : this.StringSet)        {
          oprot.writeString(_iter17);
        }
        oprot.writeSetEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.StringToI64Map != null) {
      oprot.writeFieldBegin(STRING_TO_I64_MAP_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.STRING, TType.I64, this.StringToI64Map.size()));
        for (Map.Entry<String, Long> _iter18 : this.StringToI64Map.entrySet())        {
          oprot.writeString(_iter18.getKey());
          oprot.writeI64(_iter18.getValue());
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("Containers");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("I32List");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getI32List() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getI32List(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("StringSet");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getStringSet() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getStringSet(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("StringToI64Map");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getStringToI64Map() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getStringToI64Map(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

