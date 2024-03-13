// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
    "fmt"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = strings.Split
var _ = thrift.ZERO


type Metasyntactic int32

const (
    Metasyntactic_FOO Metasyntactic = 1
    Metasyntactic_BAR Metasyntactic = 2
    Metasyntactic_BAZ Metasyntactic = 3
    Metasyntactic_BAX Metasyntactic = 4
)

// Enum value maps for Metasyntactic
var (
    MetasyntacticToName = map[Metasyntactic]string {
        Metasyntactic_FOO: "FOO",
        Metasyntactic_BAR: "BAR",
        Metasyntactic_BAZ: "BAZ",
        Metasyntactic_BAX: "BAX",
    }

    MetasyntacticToValue = map[string]Metasyntactic {
        "FOO": Metasyntactic_FOO,
        "BAR": Metasyntactic_BAR,
        "BAZ": Metasyntactic_BAZ,
        "BAX": Metasyntactic_BAX,
    }

    MetasyntacticNames = []string{
        "FOO",
        "BAR",
        "BAZ",
        "BAX",
    }

    MetasyntacticValues = []Metasyntactic{
        Metasyntactic_FOO,
        Metasyntactic_BAR,
        Metasyntactic_BAZ,
        Metasyntactic_BAX,
    }
)

func (x Metasyntactic) String() string {
    if v, ok := MetasyntacticToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x Metasyntactic) Ptr() *Metasyntactic {
    return &x
}

// Deprecated: Use MetasyntacticToValue instead (e.g. `x, ok := MetasyntacticToValue["name"]`).
func MetasyntacticFromString(s string) (Metasyntactic, error) {
    if v, ok := MetasyntacticToValue[s]; ok {
        return v, nil
    }
    return Metasyntactic(0), fmt.Errorf("not a valid Metasyntactic string")
}

// Deprecated: Use Metasyntactic.Ptr() instead.
func MetasyntacticPtr(v Metasyntactic) *Metasyntactic {
    return &v
}


type MyEnum1 int32

const (
    MyEnum1_ME1_0 MyEnum1 = 0
    MyEnum1_ME1_1 MyEnum1 = 1
    MyEnum1_ME1_2 MyEnum1 = 2
    MyEnum1_ME1_3 MyEnum1 = 3
    MyEnum1_ME1_5 MyEnum1 = 5
    MyEnum1_ME1_6 MyEnum1 = 6
)

// Enum value maps for MyEnum1
var (
    MyEnum1ToName = map[MyEnum1]string {
        MyEnum1_ME1_0: "ME1_0",
        MyEnum1_ME1_1: "ME1_1",
        MyEnum1_ME1_2: "ME1_2",
        MyEnum1_ME1_3: "ME1_3",
        MyEnum1_ME1_5: "ME1_5",
        MyEnum1_ME1_6: "ME1_6",
    }

    MyEnum1ToValue = map[string]MyEnum1 {
        "ME1_0": MyEnum1_ME1_0,
        "ME1_1": MyEnum1_ME1_1,
        "ME1_2": MyEnum1_ME1_2,
        "ME1_3": MyEnum1_ME1_3,
        "ME1_5": MyEnum1_ME1_5,
        "ME1_6": MyEnum1_ME1_6,
    }

    MyEnum1Names = []string{
        "ME1_0",
        "ME1_1",
        "ME1_2",
        "ME1_3",
        "ME1_5",
        "ME1_6",
    }

    MyEnum1Values = []MyEnum1{
        MyEnum1_ME1_0,
        MyEnum1_ME1_1,
        MyEnum1_ME1_2,
        MyEnum1_ME1_3,
        MyEnum1_ME1_5,
        MyEnum1_ME1_6,
    }
)

func (x MyEnum1) String() string {
    if v, ok := MyEnum1ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum1) Ptr() *MyEnum1 {
    return &x
}

// Deprecated: Use MyEnum1ToValue instead (e.g. `x, ok := MyEnum1ToValue["name"]`).
func MyEnum1FromString(s string) (MyEnum1, error) {
    if v, ok := MyEnum1ToValue[s]; ok {
        return v, nil
    }
    return MyEnum1(0), fmt.Errorf("not a valid MyEnum1 string")
}

// Deprecated: Use MyEnum1.Ptr() instead.
func MyEnum1Ptr(v MyEnum1) *MyEnum1 {
    return &v
}


type MyEnum2 int32

const (
    MyEnum2_ME2_0 MyEnum2 = 0
    MyEnum2_ME2_1 MyEnum2 = 1
    MyEnum2_ME2_2 MyEnum2 = 2
)

// Enum value maps for MyEnum2
var (
    MyEnum2ToName = map[MyEnum2]string {
        MyEnum2_ME2_0: "ME2_0",
        MyEnum2_ME2_1: "ME2_1",
        MyEnum2_ME2_2: "ME2_2",
    }

    MyEnum2ToValue = map[string]MyEnum2 {
        "ME2_0": MyEnum2_ME2_0,
        "ME2_1": MyEnum2_ME2_1,
        "ME2_2": MyEnum2_ME2_2,
    }

    MyEnum2Names = []string{
        "ME2_0",
        "ME2_1",
        "ME2_2",
    }

    MyEnum2Values = []MyEnum2{
        MyEnum2_ME2_0,
        MyEnum2_ME2_1,
        MyEnum2_ME2_2,
    }
)

func (x MyEnum2) String() string {
    if v, ok := MyEnum2ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum2) Ptr() *MyEnum2 {
    return &x
}

// Deprecated: Use MyEnum2ToValue instead (e.g. `x, ok := MyEnum2ToValue["name"]`).
func MyEnum2FromString(s string) (MyEnum2, error) {
    if v, ok := MyEnum2ToValue[s]; ok {
        return v, nil
    }
    return MyEnum2(0), fmt.Errorf("not a valid MyEnum2 string")
}

// Deprecated: Use MyEnum2.Ptr() instead.
func MyEnum2Ptr(v MyEnum2) *MyEnum2 {
    return &v
}


type MyEnum3 int32

const (
    MyEnum3_ME3_0 MyEnum3 = 0
    MyEnum3_ME3_1 MyEnum3 = 1
    MyEnum3_ME3_N2 MyEnum3 = -2
    MyEnum3_ME3_N1 MyEnum3 = -1
    MyEnum3_ME3_9 MyEnum3 = 9
    MyEnum3_ME3_10 MyEnum3 = 10
)

// Enum value maps for MyEnum3
var (
    MyEnum3ToName = map[MyEnum3]string {
        MyEnum3_ME3_0: "ME3_0",
        MyEnum3_ME3_1: "ME3_1",
        MyEnum3_ME3_N2: "ME3_N2",
        MyEnum3_ME3_N1: "ME3_N1",
        MyEnum3_ME3_9: "ME3_9",
        MyEnum3_ME3_10: "ME3_10",
    }

    MyEnum3ToValue = map[string]MyEnum3 {
        "ME3_0": MyEnum3_ME3_0,
        "ME3_1": MyEnum3_ME3_1,
        "ME3_N2": MyEnum3_ME3_N2,
        "ME3_N1": MyEnum3_ME3_N1,
        "ME3_9": MyEnum3_ME3_9,
        "ME3_10": MyEnum3_ME3_10,
    }

    MyEnum3Names = []string{
        "ME3_0",
        "ME3_1",
        "ME3_N2",
        "ME3_N1",
        "ME3_9",
        "ME3_10",
    }

    MyEnum3Values = []MyEnum3{
        MyEnum3_ME3_0,
        MyEnum3_ME3_1,
        MyEnum3_ME3_N2,
        MyEnum3_ME3_N1,
        MyEnum3_ME3_9,
        MyEnum3_ME3_10,
    }
)

func (x MyEnum3) String() string {
    if v, ok := MyEnum3ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum3) Ptr() *MyEnum3 {
    return &x
}

// Deprecated: Use MyEnum3ToValue instead (e.g. `x, ok := MyEnum3ToValue["name"]`).
func MyEnum3FromString(s string) (MyEnum3, error) {
    if v, ok := MyEnum3ToValue[s]; ok {
        return v, nil
    }
    return MyEnum3(0), fmt.Errorf("not a valid MyEnum3 string")
}

// Deprecated: Use MyEnum3.Ptr() instead.
func MyEnum3Ptr(v MyEnum3) *MyEnum3 {
    return &v
}


type MyEnum4 int32

const (
    MyEnum4_ME4_A MyEnum4 = 2147483645
    MyEnum4_ME4_B MyEnum4 = 2147483646
    MyEnum4_ME4_C MyEnum4 = 2147483647
    MyEnum4_ME4_D MyEnum4 = -2147483648
)

// Enum value maps for MyEnum4
var (
    MyEnum4ToName = map[MyEnum4]string {
        MyEnum4_ME4_A: "ME4_A",
        MyEnum4_ME4_B: "ME4_B",
        MyEnum4_ME4_C: "ME4_C",
        MyEnum4_ME4_D: "ME4_D",
    }

    MyEnum4ToValue = map[string]MyEnum4 {
        "ME4_A": MyEnum4_ME4_A,
        "ME4_B": MyEnum4_ME4_B,
        "ME4_C": MyEnum4_ME4_C,
        "ME4_D": MyEnum4_ME4_D,
    }

    MyEnum4Names = []string{
        "ME4_A",
        "ME4_B",
        "ME4_C",
        "ME4_D",
    }

    MyEnum4Values = []MyEnum4{
        MyEnum4_ME4_A,
        MyEnum4_ME4_B,
        MyEnum4_ME4_C,
        MyEnum4_ME4_D,
    }
)

func (x MyEnum4) String() string {
    if v, ok := MyEnum4ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum4) Ptr() *MyEnum4 {
    return &x
}

// Deprecated: Use MyEnum4ToValue instead (e.g. `x, ok := MyEnum4ToValue["name"]`).
func MyEnum4FromString(s string) (MyEnum4, error) {
    if v, ok := MyEnum4ToValue[s]; ok {
        return v, nil
    }
    return MyEnum4(0), fmt.Errorf("not a valid MyEnum4 string")
}

// Deprecated: Use MyEnum4.Ptr() instead.
func MyEnum4Ptr(v MyEnum4) *MyEnum4 {
    return &v
}


type MyBitmaskEnum1 int32

const (
    MyBitmaskEnum1_ONE MyBitmaskEnum1 = 1
    MyBitmaskEnum1_TWO MyBitmaskEnum1 = 2
    MyBitmaskEnum1_FOUR MyBitmaskEnum1 = 4
)

// Enum value maps for MyBitmaskEnum1
var (
    MyBitmaskEnum1ToName = map[MyBitmaskEnum1]string {
        MyBitmaskEnum1_ONE: "ONE",
        MyBitmaskEnum1_TWO: "TWO",
        MyBitmaskEnum1_FOUR: "FOUR",
    }

    MyBitmaskEnum1ToValue = map[string]MyBitmaskEnum1 {
        "ONE": MyBitmaskEnum1_ONE,
        "TWO": MyBitmaskEnum1_TWO,
        "FOUR": MyBitmaskEnum1_FOUR,
    }

    MyBitmaskEnum1Names = []string{
        "ONE",
        "TWO",
        "FOUR",
    }

    MyBitmaskEnum1Values = []MyBitmaskEnum1{
        MyBitmaskEnum1_ONE,
        MyBitmaskEnum1_TWO,
        MyBitmaskEnum1_FOUR,
    }
)

func (x MyBitmaskEnum1) String() string {
    if v, ok := MyBitmaskEnum1ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyBitmaskEnum1) Ptr() *MyBitmaskEnum1 {
    return &x
}

// Deprecated: Use MyBitmaskEnum1ToValue instead (e.g. `x, ok := MyBitmaskEnum1ToValue["name"]`).
func MyBitmaskEnum1FromString(s string) (MyBitmaskEnum1, error) {
    if v, ok := MyBitmaskEnum1ToValue[s]; ok {
        return v, nil
    }
    return MyBitmaskEnum1(0), fmt.Errorf("not a valid MyBitmaskEnum1 string")
}

// Deprecated: Use MyBitmaskEnum1.Ptr() instead.
func MyBitmaskEnum1Ptr(v MyBitmaskEnum1) *MyBitmaskEnum1 {
    return &v
}


type MyBitmaskEnum2 int32

const (
    MyBitmaskEnum2_ONE MyBitmaskEnum2 = 1
    MyBitmaskEnum2_TWO MyBitmaskEnum2 = 2
    MyBitmaskEnum2_FOUR MyBitmaskEnum2 = 4
)

// Enum value maps for MyBitmaskEnum2
var (
    MyBitmaskEnum2ToName = map[MyBitmaskEnum2]string {
        MyBitmaskEnum2_ONE: "ONE",
        MyBitmaskEnum2_TWO: "TWO",
        MyBitmaskEnum2_FOUR: "FOUR",
    }

    MyBitmaskEnum2ToValue = map[string]MyBitmaskEnum2 {
        "ONE": MyBitmaskEnum2_ONE,
        "TWO": MyBitmaskEnum2_TWO,
        "FOUR": MyBitmaskEnum2_FOUR,
    }

    MyBitmaskEnum2Names = []string{
        "ONE",
        "TWO",
        "FOUR",
    }

    MyBitmaskEnum2Values = []MyBitmaskEnum2{
        MyBitmaskEnum2_ONE,
        MyBitmaskEnum2_TWO,
        MyBitmaskEnum2_FOUR,
    }
)

func (x MyBitmaskEnum2) String() string {
    if v, ok := MyBitmaskEnum2ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyBitmaskEnum2) Ptr() *MyBitmaskEnum2 {
    return &x
}

// Deprecated: Use MyBitmaskEnum2ToValue instead (e.g. `x, ok := MyBitmaskEnum2ToValue["name"]`).
func MyBitmaskEnum2FromString(s string) (MyBitmaskEnum2, error) {
    if v, ok := MyBitmaskEnum2ToValue[s]; ok {
        return v, nil
    }
    return MyBitmaskEnum2(0), fmt.Errorf("not a valid MyBitmaskEnum2 string")
}

// Deprecated: Use MyBitmaskEnum2.Ptr() instead.
func MyBitmaskEnum2Ptr(v MyBitmaskEnum2) *MyBitmaskEnum2 {
    return &v
}


type SomeStruct struct {
    Reasonable Metasyntactic `thrift:"reasonable,1" json:"reasonable" db:"reasonable"`
    Fine Metasyntactic `thrift:"fine,2" json:"fine" db:"fine"`
    Questionable Metasyntactic `thrift:"questionable,3" json:"questionable" db:"questionable"`
    Tags []int32 `thrift:"tags,4" json:"tags" db:"tags"`
}
// Compile time interface enforcer
var _ thrift.Struct = &SomeStruct{}

func NewSomeStruct() *SomeStruct {
    return (&SomeStruct{}).
        SetReasonableNonCompat(
              Metasyntactic_FOO,
          ).
        SetFineNonCompat(
              Metasyntactic_BAR,
          ).
        SetQuestionableNonCompat(
              Metasyntactic(-1),
          ).
        SetTagsNonCompat(
              []int32{
},
          )
}

func (x *SomeStruct) GetReasonableNonCompat() Metasyntactic {
    return x.Reasonable
}

func (x *SomeStruct) GetReasonable() Metasyntactic {
    return x.Reasonable
}

func (x *SomeStruct) GetFineNonCompat() Metasyntactic {
    return x.Fine
}

func (x *SomeStruct) GetFine() Metasyntactic {
    return x.Fine
}

func (x *SomeStruct) GetQuestionableNonCompat() Metasyntactic {
    return x.Questionable
}

func (x *SomeStruct) GetQuestionable() Metasyntactic {
    return x.Questionable
}

func (x *SomeStruct) GetTagsNonCompat() []int32 {
    return x.Tags
}

func (x *SomeStruct) GetTags() []int32 {
    if !x.IsSetTags() {
        return []int32{
}
    }

    return x.Tags
}

func (x *SomeStruct) SetReasonableNonCompat(value Metasyntactic) *SomeStruct {
    x.Reasonable = value
    return x
}

func (x *SomeStruct) SetReasonable(value Metasyntactic) *SomeStruct {
    x.Reasonable = value
    return x
}

func (x *SomeStruct) SetFineNonCompat(value Metasyntactic) *SomeStruct {
    x.Fine = value
    return x
}

func (x *SomeStruct) SetFine(value Metasyntactic) *SomeStruct {
    x.Fine = value
    return x
}

func (x *SomeStruct) SetQuestionableNonCompat(value Metasyntactic) *SomeStruct {
    x.Questionable = value
    return x
}

func (x *SomeStruct) SetQuestionable(value Metasyntactic) *SomeStruct {
    x.Questionable = value
    return x
}

func (x *SomeStruct) SetTagsNonCompat(value []int32) *SomeStruct {
    x.Tags = value
    return x
}

func (x *SomeStruct) SetTags(value []int32) *SomeStruct {
    x.Tags = value
    return x
}

func (x *SomeStruct) IsSetTags() bool {
    return x != nil && x.Tags != nil
}

func (x *SomeStruct) writeField1(p thrift.Format) error {  // Reasonable
    if err := p.WriteFieldBegin("reasonable", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetReasonableNonCompat()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) writeField2(p thrift.Format) error {  // Fine
    if err := p.WriteFieldBegin("fine", thrift.I32, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetFineNonCompat()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) writeField3(p thrift.Format) error {  // Questionable
    if err := p.WriteFieldBegin("questionable", thrift.I32, 3); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetQuestionableNonCompat()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) writeField4(p thrift.Format) error {  // Tags
    if err := p.WriteFieldBegin("tags", thrift.SET, 4); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetTagsNonCompat()
    if err := p.WriteSetBegin(thrift.I32, len(item)); err != nil {
    return thrift.PrependError("error writing set begin: ", err)
}
for _, v := range item {
    {
        item := v
        if err := p.WriteI32(item); err != nil {
    return err
}
    }
}
if err := p.WriteSetEnd(); err != nil {
    return thrift.PrependError("error writing set end: ", err)
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) readField1(p thrift.Format) error {  // Reasonable
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := Metasyntactic(enumResult)

    x.SetReasonableNonCompat(result)
    return nil
}

func (x *SomeStruct) readField2(p thrift.Format) error {  // Fine
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := Metasyntactic(enumResult)

    x.SetFineNonCompat(result)
    return nil
}

func (x *SomeStruct) readField3(p thrift.Format) error {  // Questionable
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := Metasyntactic(enumResult)

    x.SetQuestionableNonCompat(result)
    return nil
}

func (x *SomeStruct) readField4(p thrift.Format) error {  // Tags
    _ /* elemType */, size, err := p.ReadSetBegin()
if err != nil {
    return thrift.PrependError("error reading set begin: ", err)
}

setResult := make([]int32, 0, size)
for i := 0; i < size; i++ {
    var elem int32
    {
        result, err := p.ReadI32()
if err != nil {
    return err
}
        elem = result
    }
    setResult = append(setResult, elem)
}

if err := p.ReadSetEnd(); err != nil {
    return thrift.PrependError("error reading set end: ", err)
}
result := setResult

    x.SetTagsNonCompat(result)
    return nil
}

func (x *SomeStruct) toString1() string {  // Reasonable
    return fmt.Sprintf("%v", x.GetReasonableNonCompat())
}

func (x *SomeStruct) toString2() string {  // Fine
    return fmt.Sprintf("%v", x.GetFineNonCompat())
}

func (x *SomeStruct) toString3() string {  // Questionable
    return fmt.Sprintf("%v", x.GetQuestionableNonCompat())
}

func (x *SomeStruct) toString4() string {  // Tags
    return fmt.Sprintf("%v", x.GetTagsNonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewSomeStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
type SomeStructBuilder struct {
    obj *SomeStruct
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewSomeStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewSomeStructBuilder() *SomeStructBuilder {
    return &SomeStructBuilder{
        obj: NewSomeStruct(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewSomeStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *SomeStructBuilder) Reasonable(value Metasyntactic) *SomeStructBuilder {
    x.obj.Reasonable = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewSomeStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *SomeStructBuilder) Fine(value Metasyntactic) *SomeStructBuilder {
    x.obj.Fine = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewSomeStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *SomeStructBuilder) Questionable(value Metasyntactic) *SomeStructBuilder {
    x.obj.Questionable = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewSomeStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *SomeStructBuilder) Tags(value []int32) *SomeStructBuilder {
    x.obj.Tags = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewSomeStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *SomeStructBuilder) Emit() *SomeStruct {
    var objCopy SomeStruct = *x.obj
    return &objCopy
}

func (x *SomeStruct) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("SomeStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := x.writeField3(p); err != nil {
        return err
    }

    if err := x.writeField4(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) Read(p thrift.Format) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.I32)):  // reasonable
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.I32)):  // fine
            if err := x.readField2(p); err != nil {
                return err
            }
        case (id == 3 && wireType == thrift.Type(thrift.I32)):  // questionable
            if err := x.readField3(p); err != nil {
                return err
            }
        case (id == 4 && wireType == thrift.Type(thrift.SET)):  // tags
            if err := x.readField4(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *SomeStruct) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("SomeStruct({")
    sb.WriteString(fmt.Sprintf("Reasonable:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("Fine:%s ", x.toString2()))
    sb.WriteString(fmt.Sprintf("Questionable:%s ", x.toString3()))
    sb.WriteString(fmt.Sprintf("Tags:%s", x.toString4()))
    sb.WriteString("})")

    return sb.String()
}

type MyStruct struct {
    Me2_3 MyEnum2 `thrift:"me2_3,1" json:"me2_3" db:"me2_3"`
    Me3N3 MyEnum3 `thrift:"me3_n3,2" json:"me3_n3" db:"me3_n3"`
    Me1T1 MyEnum1 `thrift:"me1_t1,4" json:"me1_t1" db:"me1_t1"`
    Me1T2 MyEnum1 `thrift:"me1_t2,6" json:"me1_t2" db:"me1_t2"`
}
// Compile time interface enforcer
var _ thrift.Struct = &MyStruct{}

func NewMyStruct() *MyStruct {
    return (&MyStruct{}).
        SetMe2_3NonCompat(
              MyEnum2(3),
          ).
        SetMe3N3NonCompat(
              MyEnum3(-3),
          ).
        SetMe1T1NonCompat(
              MyEnum1_ME1_1,
          ).
        SetMe1T2NonCompat(
              MyEnum1_ME1_1,
          )
}

func (x *MyStruct) GetMe2_3NonCompat() MyEnum2 {
    return x.Me2_3
}

func (x *MyStruct) GetMe2_3() MyEnum2 {
    return x.Me2_3
}

func (x *MyStruct) GetMe3N3NonCompat() MyEnum3 {
    return x.Me3N3
}

func (x *MyStruct) GetMe3N3() MyEnum3 {
    return x.Me3N3
}

func (x *MyStruct) GetMe1T1NonCompat() MyEnum1 {
    return x.Me1T1
}

func (x *MyStruct) GetMe1T1() MyEnum1 {
    return x.Me1T1
}

func (x *MyStruct) GetMe1T2NonCompat() MyEnum1 {
    return x.Me1T2
}

func (x *MyStruct) GetMe1T2() MyEnum1 {
    return x.Me1T2
}

func (x *MyStruct) SetMe2_3NonCompat(value MyEnum2) *MyStruct {
    x.Me2_3 = value
    return x
}

func (x *MyStruct) SetMe2_3(value MyEnum2) *MyStruct {
    x.Me2_3 = value
    return x
}

func (x *MyStruct) SetMe3N3NonCompat(value MyEnum3) *MyStruct {
    x.Me3N3 = value
    return x
}

func (x *MyStruct) SetMe3N3(value MyEnum3) *MyStruct {
    x.Me3N3 = value
    return x
}

func (x *MyStruct) SetMe1T1NonCompat(value MyEnum1) *MyStruct {
    x.Me1T1 = value
    return x
}

func (x *MyStruct) SetMe1T1(value MyEnum1) *MyStruct {
    x.Me1T1 = value
    return x
}

func (x *MyStruct) SetMe1T2NonCompat(value MyEnum1) *MyStruct {
    x.Me1T2 = value
    return x
}

func (x *MyStruct) SetMe1T2(value MyEnum1) *MyStruct {
    x.Me1T2 = value
    return x
}

func (x *MyStruct) writeField1(p thrift.Format) error {  // Me2_3
    if err := p.WriteFieldBegin("me2_3", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMe2_3NonCompat()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField2(p thrift.Format) error {  // Me3N3
    if err := p.WriteFieldBegin("me3_n3", thrift.I32, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMe3N3NonCompat()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField4(p thrift.Format) error {  // Me1T1
    if err := p.WriteFieldBegin("me1_t1", thrift.I32, 4); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMe1T1NonCompat()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField6(p thrift.Format) error {  // Me1T2
    if err := p.WriteFieldBegin("me1_t2", thrift.I32, 6); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMe1T2NonCompat()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) readField1(p thrift.Format) error {  // Me2_3
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum2(enumResult)

    x.SetMe2_3NonCompat(result)
    return nil
}

func (x *MyStruct) readField2(p thrift.Format) error {  // Me3N3
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum3(enumResult)

    x.SetMe3N3NonCompat(result)
    return nil
}

func (x *MyStruct) readField4(p thrift.Format) error {  // Me1T1
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum1(enumResult)

    x.SetMe1T1NonCompat(result)
    return nil
}

func (x *MyStruct) readField6(p thrift.Format) error {  // Me1T2
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum1(enumResult)

    x.SetMe1T2NonCompat(result)
    return nil
}

func (x *MyStruct) toString1() string {  // Me2_3
    return fmt.Sprintf("%v", x.GetMe2_3NonCompat())
}

func (x *MyStruct) toString2() string {  // Me3N3
    return fmt.Sprintf("%v", x.GetMe3N3NonCompat())
}

func (x *MyStruct) toString4() string {  // Me1T1
    return fmt.Sprintf("%v", x.GetMe1T1NonCompat())
}

func (x *MyStruct) toString6() string {  // Me1T2
    return fmt.Sprintf("%v", x.GetMe1T2NonCompat())
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewMyStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
type MyStructBuilder struct {
    obj *MyStruct
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewMyStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func NewMyStructBuilder() *MyStructBuilder {
    return &MyStructBuilder{
        obj: NewMyStruct(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewMyStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *MyStructBuilder) Me2_3(value MyEnum2) *MyStructBuilder {
    x.obj.Me2_3 = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewMyStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *MyStructBuilder) Me3N3(value MyEnum3) *MyStructBuilder {
    x.obj.Me3N3 = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewMyStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *MyStructBuilder) Me1T1(value MyEnum1) *MyStructBuilder {
    x.obj.Me1T1 = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewMyStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *MyStructBuilder) Me1T2(value MyEnum1) *MyStructBuilder {
    x.obj.Me1T2 = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g NewMyStruct().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *MyStructBuilder) Emit() *MyStruct {
    var objCopy MyStruct = *x.obj
    return &objCopy
}

func (x *MyStruct) Write(p thrift.Format) error {
    if err := p.WriteStructBegin("MyStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := x.writeField4(p); err != nil {
        return err
    }

    if err := x.writeField6(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) Read(p thrift.Format) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.I32)):  // me2_3
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.I32)):  // me3_n3
            if err := x.readField2(p); err != nil {
                return err
            }
        case (id == 4 && wireType == thrift.Type(thrift.I32)):  // me1_t1
            if err := x.readField4(p); err != nil {
                return err
            }
        case (id == 6 && wireType == thrift.Type(thrift.I32)):  // me1_t2
            if err := x.readField6(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *MyStruct) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("MyStruct({")
    sb.WriteString(fmt.Sprintf("Me2_3:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("Me3N3:%s ", x.toString2()))
    sb.WriteString(fmt.Sprintf("Me1T1:%s ", x.toString4()))
    sb.WriteString(fmt.Sprintf("Me1T2:%s", x.toString6()))
    sb.WriteString("})")

    return sb.String()
}

// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {
    registry.RegisterType("test.dev/fixtures/enums/SomeStruct", func() any { return NewSomeStruct() })
    registry.RegisterType("test.dev/fixtures/enums/MyStruct", func() any { return NewMyStruct() })

    registry.RegisterType("test.dev/fixtures/enums/Metasyntactic", func() any { return Metasyntactic(0) })
    registry.RegisterType("test.dev/fixtures/enums/MyEnum1", func() any { return MyEnum1(0) })
    registry.RegisterType("test.dev/fixtures/enums/MyEnum2", func() any { return MyEnum2(0) })
    registry.RegisterType("test.dev/fixtures/enums/MyEnum3", func() any { return MyEnum3(0) })
    registry.RegisterType("test.dev/fixtures/enums/MyEnum4", func() any { return MyEnum4(0) })
    registry.RegisterType("test.dev/fixtures/enums/MyBitmaskEnum1", func() any { return MyBitmaskEnum1(0) })
    registry.RegisterType("test.dev/fixtures/enums/MyBitmaskEnum2", func() any { return MyBitmaskEnum2(0) })
}
