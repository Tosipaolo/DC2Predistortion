#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"struct_Ys0g6NvmxKEOD5COiDA9mC" , 15 , 64 } , {
"struct_H4yvRFy43r96c7f3c3jXnD" , 16 , 5208 } , {
"struct_6vjZE1zVXiMs9MoZnA9ZPB" , 17 , 136 } , { "uint64_T" , 18 , 8 } , {
"int64_T" , 19 , 8 } , { "char_T" , 20 , 8 } , { "uchar_T" , 21 , 8 } , {
"time_T" , 22 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T
) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof (
int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) ,
sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof (
pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
int32_T ) , sizeof ( struct_Ys0g6NvmxKEOD5COiDA9mC ) , sizeof (
struct_H4yvRFy43r96c7f3c3jXnD ) , sizeof ( struct_6vjZE1zVXiMs9MoZnA9ZPB ) ,
sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( char_T ) , sizeof (
uchar_T ) , sizeof ( time_T ) } ; static const char_T * rtDataTypeNames [ ] =
{ "real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" ,
"int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" ,
"action_T" , "timer_uint32_pair_T" , "physical_connection" ,
"struct_Ys0g6NvmxKEOD5COiDA9mC" , "struct_H4yvRFy43r96c7f3c3jXnD" ,
"struct_6vjZE1zVXiMs9MoZnA9ZPB" , "uint64_T" , "int64_T" , "char_T" ,
"uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions [ ] = { { (
char_T * ) ( & rtB . kymkdfxsdf [ 0 ] . re ) , 0 , 1 , 58 } , { ( char_T * )
( & rtB . fwlyf33y4r ) , 0 , 0 , 8 } , { ( char_T * ) ( & rtDW . plgnzuu14l [
0 ] . re ) , 0 , 1 , 234 } , { ( char_T * ) ( & rtDW . isga1tvhed ) , 0 , 0 ,
3248 } , { ( char_T * ) ( & rtDW . fau3j3pljx ) , 6 , 0 , 2 } , { ( char_T *
) ( & rtDW . j5nte5je4m ) , 7 , 0 , 6 } , { ( char_T * ) ( & rtDW .
mlcl0axizw ) , 2 , 0 , 8 } , { ( char_T * ) ( & rtDW . ivl3pyl0kb ) , 8 , 0 ,
1 } , { ( char_T * ) ( & rtDW . m5sexzzsxy . cejkopwbtv ) , 2 , 0 , 1 } , { (
char_T * ) ( & rtDW . ky1gbhg5rq . fibqjkqnjk ) , 2 , 0 , 1 } , { ( char_T *
) ( & rtDW . nupi545oen . p5zzsmsop2 ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . lgb24eydta . ktphnd4lwv ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW .
itlpj4fodu . ddfnl1zb3v ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW .
g5asqdbxd2 . cejkopwbtv ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
cnoquaiecb . fibqjkqnjk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
bxzsvnh1aw . p5zzsmsop2 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ohwibl0oik . ktphnd4lwv ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW .
oxx5igb303 . ddfnl1zb3v ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW .
la2ioretvo . cejkopwbtv ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
m0wf3m1kcq . fibqjkqnjk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
mw5ylf2af1 . p5zzsmsop2 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
b31ukzlbiz . ktphnd4lwv ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW .
h11e1j2gz5 . ddfnl1zb3v ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW .
a2ydei5a12c . cejkopwbtv ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
i3mmrklbhsy . fibqjkqnjk ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
jlq4jj2wgyy . p5zzsmsop2 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
h2dghdnqpmo . ktphnd4lwv ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW .
gjgjhmx54tp . ddfnl1zb3v ) , 2 , 0 , 2 } } ; static DataTypeTransitionTable
rtBTransTable = { 28U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . Gamma ) , 0 , 0 , 700 } , { (
char_T * ) ( & rtP . m5sexzzsxy . InputGain_Gain ) , 0 , 0 , 3 } , { ( char_T
* ) ( & rtP . ky1gbhg5rq . InputGain_Gain ) , 0 , 0 , 12 } , { ( char_T * ) (
& rtP . nupi545oen . InputGain_Gain ) , 0 , 0 , 8 } , { ( char_T * ) ( & rtP
. lgb24eydta . dBConversion_R ) , 0 , 0 , 10 } , { ( char_T * ) ( & rtP .
itlpj4fodu . dBConversion_R ) , 0 , 0 , 14 } , { ( char_T * ) ( & rtP .
g5asqdbxd2 . InputGain_Gain ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP .
cnoquaiecb . InputGain_Gain ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtP .
bxzsvnh1aw . InputGain_Gain ) , 0 , 0 , 8 } , { ( char_T * ) ( & rtP .
ohwibl0oik . dBConversion_R ) , 0 , 0 , 10 } , { ( char_T * ) ( & rtP .
oxx5igb303 . dBConversion_R ) , 0 , 0 , 14 } , { ( char_T * ) ( & rtP .
la2ioretvo . InputGain_Gain ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP .
m0wf3m1kcq . InputGain_Gain ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtP .
mw5ylf2af1 . InputGain_Gain ) , 0 , 0 , 8 } , { ( char_T * ) ( & rtP .
b31ukzlbiz . dBConversion_R ) , 0 , 0 , 10 } , { ( char_T * ) ( & rtP .
h11e1j2gz5 . dBConversion_R ) , 0 , 0 , 14 } , { ( char_T * ) ( & rtP .
a2ydei5a12c . InputGain_Gain ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP .
i3mmrklbhsy . InputGain_Gain ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtP .
jlq4jj2wgyy . InputGain_Gain ) , 0 , 0 , 8 } , { ( char_T * ) ( & rtP .
h2dghdnqpmo . dBConversion_R ) , 0 , 0 , 10 } , { ( char_T * ) ( & rtP .
gjgjhmx54tp . dBConversion_R ) , 0 , 0 , 14 } } ; static
DataTypeTransitionTable rtPTransTable = { 21U , rtPTransitions } ;
