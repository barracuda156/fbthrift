// Annotations that indicate which IDL definition a structured annotation can
// be placed on.
// 
// For example:
//   include "thrift/annotation/scope.thrift"
// 
//   @scope.Struct
//   struct MyStructAnnotation {...}
// 
//   @MyStructAnnotation // Good.
//   struct Foo{
//     @MyStructAnnotation // Compile-time failure. MyStructAnnotation is not
//                         // allowed on fields.
//     1: i32 my_field;
//   }

// Autogenerated by Thrift for thrift/annotation/scope.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package scope
