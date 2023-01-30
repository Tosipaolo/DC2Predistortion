#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DC2_predistortion_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "DC2_predistortion.h"
#include "DC2_predistortion_capi.h"
#include "DC2_predistortion_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 22 , TARGET_STRING
( "DC2_predistortion/PREDISTORTION" ) , TARGET_STRING ( "Y" ) , 0 , 0 , 0 , 0
, 0 } , { 1 , 0 , TARGET_STRING ( "DC2_predistortion/Data Store Read" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"DC2_predistortion/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 3 , 0 , TARGET_STRING (
"DC2_predistortion/Crest Reduction/Magnitude-Angle to Complex" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Rapp Model" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/tanh fit" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Merge" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Probe" ) , TARGET_STRING ( "" ) ,
0 , 1 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Rapp Model" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/tanh fit" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Merge" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Probe" ) , TARGET_STRING ( "" ) ,
0 , 1 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Rapp Model" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/tanh fit" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Merge" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Probe" ) , TARGET_STRING ( "" ) , 0 , 1 ,
0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Rapp Model" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/tanh fit" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Merge" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 31 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Probe" ) , TARGET_STRING ( "" ) , 0 , 1 , 0
, 0 , 0 } , { 32 , 0 , TARGET_STRING (
"DC2_predistortion/input signal/Real-Imag to Complex" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/Output Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Rapp Model/Output Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model/Output Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit/Output Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/tanh fit/Output Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/Output Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Rapp Model/Output Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model/Output Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit/Output Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/tanh fit/Output Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/Output Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Rapp Model/Output Gain" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model/Output Gain" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/Output Gain1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/tanh fit/Output Gain2" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/Output Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Rapp Model/Output Gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model/Output Gain" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/Output Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/tanh fit/Output Gain2" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
"DC2_predistortion/OBO Calculation/TO-DB/Log10" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
"DC2_predistortion/OBO Calculation1/TO-DB/Log10" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
"DC2_predistortion/OBO Calculation2/TO-DB/Log10" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"DC2_predistortion/OBO Calculation3/TO-DB/Log10" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 57 ,
TARGET_STRING ( "DC2_predistortion/Memoryless Nonlinearity" ) , TARGET_STRING
( "vsat" ) , 1 , 0 , 0 } , { 58 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1" ) , TARGET_STRING ( "vsat" ) , 1
, 0 , 0 } , { 59 , TARGET_STRING ( "DC2_predistortion/Memoryless S=20" ) ,
TARGET_STRING ( "p" ) , 1 , 0 , 0 } , { 60 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20" ) , TARGET_STRING ( "vsat" ) , 1 , 0 , 0
} , { 61 , TARGET_STRING ( "DC2_predistortion/Memoryless S=3" ) ,
TARGET_STRING ( "p" ) , 1 , 0 , 0 } , { 62 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3" ) , TARGET_STRING ( "vsat" ) , 1 , 0 , 0 }
, { 63 , TARGET_STRING ( "DC2_predistortion/LAMBDA" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 64 , TARGET_STRING (
"DC2_predistortion/Crest Reduction/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 1 , 0 , 0 } , { 65 , TARGET_STRING (
"DC2_predistortion/Crest Reduction/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 1 , 0 , 0 } , { 66 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Gain" ) , TARGET_STRING ( "Gain" )
, 1 , 0 , 0 } , { 67 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Merge" ) , TARGET_STRING (
"InitialOutput" ) , 1 , 0 , 0 } , { 68 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Gain" ) , TARGET_STRING ( "Gain"
) , 1 , 0 , 0 } , { 69 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Merge" ) , TARGET_STRING (
"InitialOutput" ) , 1 , 0 , 0 } , { 70 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Gain" ) , TARGET_STRING ( "Gain" ) , 1 , 0
, 0 } , { 71 , TARGET_STRING ( "DC2_predistortion/Memoryless S=20/Merge" ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 72 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Gain" ) , TARGET_STRING ( "Gain" ) , 1 , 0
, 0 } , { 73 , TARGET_STRING ( "DC2_predistortion/Memoryless S=3/Merge" ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 74 , TARGET_STRING (
"DC2_predistortion/input signal/Random Number" ) , TARGET_STRING ( "Mean" ) ,
1 , 0 , 0 } , { 75 , TARGET_STRING (
"DC2_predistortion/input signal/Random Number" ) , TARGET_STRING ( "StdDev" )
, 1 , 0 , 0 } , { 76 , TARGET_STRING (
"DC2_predistortion/input signal/Random Number" ) , TARGET_STRING ( "Seed" ) ,
1 , 0 , 0 } , { 77 , TARGET_STRING (
"DC2_predistortion/input signal/Random Number1" ) , TARGET_STRING ( "Mean" )
, 1 , 0 , 0 } , { 78 , TARGET_STRING (
"DC2_predistortion/input signal/Random Number1" ) , TARGET_STRING ( "StdDev"
) , 1 , 0 , 0 } , { 79 , TARGET_STRING (
"DC2_predistortion/input signal/Random Number1" ) , TARGET_STRING ( "Seed" )
, 1 , 0 , 0 } , { 80 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/Input Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 81 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/Output Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 82 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Rapp Model/Input Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 83 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Rapp Model/Output Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 84 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model/Input Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 85 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model/Output Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 86 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit/Input Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 87 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit/Output Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 88 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/tanh fit/Input Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 89 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/tanh fit/Output Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 90 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/Input Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 91 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/Output Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 92 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Rapp Model/Input Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 93 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Rapp Model/Output Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 94 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model/Input Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 95 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model/Output Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 96 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit/Input Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 97 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit/Output Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 98 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/tanh fit/Input Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 99 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/tanh fit/Output Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 100 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/Input Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 101 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/Output Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 102 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Rapp Model/Input Gain" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 103 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Rapp Model/Output Gain" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 104 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model/Input Gain" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 105 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model/Output Gain" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 106 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/Input Gain1" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 107 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/Output Gain1" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 108 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/tanh fit/Input Gain2" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 109 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/tanh fit/Output Gain2" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 110 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/Input Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 111 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/Output Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 112 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Rapp Model/Input Gain" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 113 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Rapp Model/Output Gain" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 114 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model/Input Gain" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 115 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model/Output Gain" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 116 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/Input Gain1" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 117 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/Output Gain1" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 118 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/tanh fit/Input Gain2" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 119 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/tanh fit/Output Gain2" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 120 , TARGET_STRING (
"DC2_predistortion/OBO Calculation/TO-DB/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 121 , TARGET_STRING (
"DC2_predistortion/OBO Calculation1/TO-DB/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 122 , TARGET_STRING (
"DC2_predistortion/OBO Calculation2/TO-DB/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 123 , TARGET_STRING (
"DC2_predistortion/OBO Calculation3/TO-DB/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 124 , TARGET_STRING (
"DC2_predistortion/input signal/Raised Cosine Transmit Filter/FIR Interpolation"
) , TARGET_STRING ( "FILTER_COEFF" ) , 1 , 2 , 0 } , { 125 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_AM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 126 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_AM/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 127 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_AM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 128 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_AM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 129 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_AM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 130 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_PM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 131 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_PM/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 132 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_PM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 133 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_PM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 134 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Ghorbani Model/AM_PM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 135 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Rapp Model/AM_AM/Constant2" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 136 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model/AM_AM/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 137 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model/AM_AM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 138 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model/AM_AM/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 139 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model/AM_PM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 140 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model/AM_PM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 141 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/Saleh Model/AM_PM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 142 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_AM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 143 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_AM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 144 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_AM/Saturation I" ) ,
TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 145 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_AM/Saturation I" ) ,
TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 146 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_PM/dB Conversion" ) ,
TARGET_STRING ( "R" ) , 1 , 0 , 0 } , { 147 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_PM/Convert dBm to radians"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 148 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_PM/Rescale input for AM//PM lower limit"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 149 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 150 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 151 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/tanh fit/AM_PM/dB Conversion" ) ,
TARGET_STRING ( "R" ) , 1 , 0 , 0 } , { 152 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/tanh fit/AM_PM/Convert dBm to radians"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 153 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/tanh fit/AM_PM/Rescale input for AM//PM lower limit"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 154 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/tanh fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 155 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/tanh fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 156 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_AM/Constant" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 157 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_AM/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 158 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_AM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 159 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_AM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 160 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_AM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 161 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_PM/Constant" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 162 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_PM/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 163 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_PM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 164 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_PM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 165 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Ghorbani Model/AM_PM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 166 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Rapp Model/AM_AM/Constant2" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 167 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model/AM_AM/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 168 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model/AM_AM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 169 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model/AM_AM/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 170 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model/AM_PM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 171 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model/AM_PM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 172 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/Saleh Model/AM_PM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 173 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_AM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 174 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_AM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 175 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_AM/Saturation I" ) ,
TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 176 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_AM/Saturation I" ) ,
TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 177 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_PM/dB Conversion" )
, TARGET_STRING ( "R" ) , 1 , 0 , 0 } , { 178 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_PM/Convert dBm to radians"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 179 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_PM/Rescale input for AM//PM lower limit"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 180 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 181 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 182 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/tanh fit/AM_PM/dB Conversion" ) ,
TARGET_STRING ( "R" ) , 1 , 0 , 0 } , { 183 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/tanh fit/AM_PM/Convert dBm to radians"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 184 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/tanh fit/AM_PM/Rescale input for AM//PM lower limit"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 185 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/tanh fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 186 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/tanh fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 187 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_AM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 188 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_AM/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 189 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_AM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 190 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_AM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 191 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_AM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 192 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_PM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 193 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_PM/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 194 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_PM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 195 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_PM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 196 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Ghorbani Model/AM_PM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 197 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Rapp Model/AM_AM/Constant2" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 198 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model/AM_AM/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 199 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model/AM_AM/Gain2" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 200 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model/AM_AM/Gain3" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 201 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model/AM_PM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 202 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model/AM_PM/Gain" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 203 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/Saleh Model/AM_PM/Gain1" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 204 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/AM_AM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 205 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/AM_AM/Gain" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 206 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/AM_AM/Saturation I" ) ,
TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 207 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/AM_AM/Saturation I" ) ,
TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 208 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/AM_PM/dB Conversion" ) ,
TARGET_STRING ( "R" ) , 1 , 0 , 0 } , { 209 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/AM_PM/Convert dBm to radians" )
, TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 210 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=20/cubic fit/AM_PM/Rescale input for AM//PM lower limit"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 211 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=20/cubic fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 212 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=20/cubic fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 213 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/tanh fit/AM_PM/dB Conversion" ) ,
TARGET_STRING ( "R" ) , 1 , 0 , 0 } , { 214 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/tanh fit/AM_PM/Convert dBm to radians" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 215 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=20/tanh fit/AM_PM/Rescale input for AM//PM lower limit"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 216 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=20/tanh fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 217 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=20/tanh fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 218 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_AM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 219 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_AM/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 220 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_AM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 221 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_AM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 222 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_AM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 223 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_PM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 224 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_PM/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 225 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_PM/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 226 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_PM/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 227 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Ghorbani Model/AM_PM/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 228 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Rapp Model/AM_AM/Constant2" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 229 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model/AM_AM/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 230 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model/AM_AM/Gain2" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 231 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model/AM_AM/Gain3" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 232 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model/AM_PM/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 233 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model/AM_PM/Gain" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 234 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/Saleh Model/AM_PM/Gain1" ) , TARGET_STRING
( "Gain" ) , 1 , 0 , 0 } , { 235 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/AM_AM/Constant" ) , TARGET_STRING
( "Value" ) , 1 , 0 , 0 } , { 236 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/AM_AM/Gain" ) , TARGET_STRING (
"Gain" ) , 1 , 0 , 0 } , { 237 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/AM_AM/Saturation I" ) ,
TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 238 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/AM_AM/Saturation I" ) ,
TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 239 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/AM_PM/dB Conversion" ) ,
TARGET_STRING ( "R" ) , 1 , 0 , 0 } , { 240 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/AM_PM/Convert dBm to radians" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 241 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=3/cubic fit/AM_PM/Rescale input for AM//PM lower limit"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 242 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=3/cubic fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 243 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=3/cubic fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 244 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/tanh fit/AM_PM/dB Conversion" ) ,
TARGET_STRING ( "R" ) , 1 , 0 , 0 } , { 245 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/tanh fit/AM_PM/Convert dBm to radians" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 246 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=3/tanh fit/AM_PM/Rescale input for AM//PM lower limit"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 247 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=3/tanh fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "UpperLimit" ) , 1 , 0 , 0 } , { 248 , TARGET_STRING (
 "DC2_predistortion/Memoryless S=3/tanh fit/AM_PM/Clip input power to AM-PM upper limit"
) , TARGET_STRING ( "LowerLimit" ) , 1 , 0 , 0 } , { 249 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_PM/dB Conversion/Constant"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 250 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_PM/dB Conversion/Constant1"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 251 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/cubic fit/AM_PM/dB Conversion/Gain"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 252 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/tanh fit/AM_PM/dB Conversion/Constant"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 253 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity/tanh fit/AM_PM/dB Conversion/Constant1"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 254 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity/tanh fit/AM_PM/dB Conversion/Gain"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 255 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_PM/dB Conversion/Constant"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 256 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_PM/dB Conversion/Constant1"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 257 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/cubic fit/AM_PM/dB Conversion/Gain"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 258 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/tanh fit/AM_PM/dB Conversion/Constant"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 259 , TARGET_STRING (
 "DC2_predistortion/Memoryless Nonlinearity1/tanh fit/AM_PM/dB Conversion/Constant1"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 260 , TARGET_STRING (
"DC2_predistortion/Memoryless Nonlinearity1/tanh fit/AM_PM/dB Conversion/Gain"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 261 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/AM_PM/dB Conversion/Constant" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 262 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/AM_PM/dB Conversion/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 263 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/cubic fit/AM_PM/dB Conversion/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 264 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/tanh fit/AM_PM/dB Conversion/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 265 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/tanh fit/AM_PM/dB Conversion/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 266 , TARGET_STRING (
"DC2_predistortion/Memoryless S=20/tanh fit/AM_PM/dB Conversion/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 267 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/AM_PM/dB Conversion/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 268 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/AM_PM/dB Conversion/Constant1" )
, TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 269 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/cubic fit/AM_PM/dB Conversion/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 270 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/tanh fit/AM_PM/dB Conversion/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 271 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/tanh fit/AM_PM/dB Conversion/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 272 , TARGET_STRING (
"DC2_predistortion/Memoryless S=3/tanh fit/AM_PM/dB Conversion/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 273 , TARGET_STRING (
"Gamma" ) , 1 , 0 , 0 } , { 274 , TARGET_STRING ( "K" ) , 1 , 0 , 0 } , { 275
, TARGET_STRING ( "numberofCoefficients" ) , 1 , 0 , 0 } , { 276 ,
TARGET_STRING ( "predistortionCoefficients" ) , 1 , 1 , 0 } , { 277 ,
TARGET_STRING ( "smoothing" ) , 1 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } }
;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . aoricz1svq . re , & rtB .
kymkdfxsdf [ 0 ] . re , & rtB . izmnfo20bh . re , & rtB . isvafp3kpr . re , &
rtB . kiqaumkd25 . re , & rtB . kiqaumkd25 . re , & rtB . kiqaumkd25 . re , &
rtB . kiqaumkd25 . re , & rtB . kiqaumkd25 . re , & rtB . kiqaumkd25 . re , &
rtB . fwlyf33y4r , & rtB . p3vgaf2auy . re , & rtB . p3vgaf2auy . re , & rtB
. p3vgaf2auy . re , & rtB . p3vgaf2auy . re , & rtB . p3vgaf2auy . re , & rtB
. p3vgaf2auy . re , & rtB . g3h0ozjzik , & rtB . h1jjlm1sm0 . re , & rtB .
h1jjlm1sm0 . re , & rtB . h1jjlm1sm0 . re , & rtB . h1jjlm1sm0 . re , & rtB .
h1jjlm1sm0 . re , & rtB . h1jjlm1sm0 . re , & rtB . pydzara4tv , & rtB .
hctnnyx5m3 . re , & rtB . hctnnyx5m3 . re , & rtB . hctnnyx5m3 . re , & rtB .
hctnnyx5m3 . re , & rtB . hctnnyx5m3 . re , & rtB . hctnnyx5m3 . re , & rtB .
liv1jyvf4j , & rtB . fkot4ufw2s . re , & rtB . kiqaumkd25 . re , & rtB .
kiqaumkd25 . re , & rtB . kiqaumkd25 . re , & rtB . kiqaumkd25 . re , & rtB .
kiqaumkd25 . re , & rtB . p3vgaf2auy . re , & rtB . p3vgaf2auy . re , & rtB .
p3vgaf2auy . re , & rtB . p3vgaf2auy . re , & rtB . p3vgaf2auy . re , & rtB .
h1jjlm1sm0 . re , & rtB . h1jjlm1sm0 . re , & rtB . h1jjlm1sm0 . re , & rtB .
h1jjlm1sm0 . re , & rtB . h1jjlm1sm0 . re , & rtB . hctnnyx5m3 . re , & rtB .
hctnnyx5m3 . re , & rtB . hctnnyx5m3 . re , & rtB . hctnnyx5m3 . re , & rtB .
hctnnyx5m3 . re , & rtB . feffd0v2lg , & rtB . jfgwhn4umm , & rtB .
d5bujks5vf , & rtB . ji2qyseycq , & rtP . MemorylessNonlinearity_vsat , & rtP
. MemorylessNonlinearity1_vsat , & rtP . MemorylessS20_p , & rtP .
MemorylessS20_vsat , & rtP . MemorylessS3_p , & rtP . MemorylessS3_vsat , &
rtP . LAMBDA_Value , & rtP . Saturation_UpperSat , & rtP .
Saturation_LowerSat , & rtP . Gain_Gain , & rtP . Merge_InitialOutput , & rtP
. Gain_Gain_i2t5tgo53m , & rtP . Merge_InitialOutput_g5nqz3hux4 , & rtP .
Gain_Gain_bqwr1ngiox , & rtP . Merge_InitialOutput_ptx5e4hsry , & rtP .
Gain_Gain_en43eij3nc , & rtP . Merge_InitialOutput_jvxvc1fdjr , & rtP .
RandomNumber_Mean , & rtP . RandomNumber_StdDev , & rtP . RandomNumber_Seed ,
& rtP . RandomNumber1_Mean , & rtP . RandomNumber1_StdDev , & rtP .
RandomNumber1_Seed , & rtP . i3mmrklbhsy . InputGain_Gain , & rtP .
i3mmrklbhsy . OutputGain_Gain , & rtP . a2ydei5a12c . InputGain_Gain , & rtP
. a2ydei5a12c . OutputGain_Gain , & rtP . jlq4jj2wgyy . InputGain_Gain , &
rtP . jlq4jj2wgyy . OutputGain_Gain , & rtP . gjgjhmx54tp . InputGain1_Gain ,
& rtP . gjgjhmx54tp . OutputGain1_Gain , & rtP . h2dghdnqpmo .
InputGain2_Gain , & rtP . h2dghdnqpmo . OutputGain2_Gain , & rtP . m0wf3m1kcq
. InputGain_Gain , & rtP . m0wf3m1kcq . OutputGain_Gain , & rtP . la2ioretvo
. InputGain_Gain , & rtP . la2ioretvo . OutputGain_Gain , & rtP . mw5ylf2af1
. InputGain_Gain , & rtP . mw5ylf2af1 . OutputGain_Gain , & rtP . h11e1j2gz5
. InputGain1_Gain , & rtP . h11e1j2gz5 . OutputGain1_Gain , & rtP .
b31ukzlbiz . InputGain2_Gain , & rtP . b31ukzlbiz . OutputGain2_Gain , & rtP
. cnoquaiecb . InputGain_Gain , & rtP . cnoquaiecb . OutputGain_Gain , & rtP
. g5asqdbxd2 . InputGain_Gain , & rtP . g5asqdbxd2 . OutputGain_Gain , & rtP
. bxzsvnh1aw . InputGain_Gain , & rtP . bxzsvnh1aw . OutputGain_Gain , & rtP
. oxx5igb303 . InputGain1_Gain , & rtP . oxx5igb303 . OutputGain1_Gain , &
rtP . ohwibl0oik . InputGain2_Gain , & rtP . ohwibl0oik . OutputGain2_Gain ,
& rtP . ky1gbhg5rq . InputGain_Gain , & rtP . ky1gbhg5rq . OutputGain_Gain ,
& rtP . m5sexzzsxy . InputGain_Gain , & rtP . m5sexzzsxy . OutputGain_Gain ,
& rtP . nupi545oen . InputGain_Gain , & rtP . nupi545oen . OutputGain_Gain ,
& rtP . itlpj4fodu . InputGain1_Gain , & rtP . itlpj4fodu . OutputGain1_Gain
, & rtP . lgb24eydta . InputGain2_Gain , & rtP . lgb24eydta .
OutputGain2_Gain , & rtP . Constant_Value , & rtP . Constant_Value_a523d0oiup
, & rtP . Constant_Value_n0nww2vh5c , & rtP . Constant_Value_cbj5azvbu2 , &
rtP . FIRInterpolation_FILTER_COEFF [ 0 ] , & rtP . i3mmrklbhsy .
Constant_Value , & rtP . i3mmrklbhsy . Constant1_Value , & rtP . i3mmrklbhsy
. Gain_Gain , & rtP . i3mmrklbhsy . Gain1_Gain , & rtP . i3mmrklbhsy .
Gain2_Gain , & rtP . i3mmrklbhsy . Constant_Value_ppghtlfurx , & rtP .
i3mmrklbhsy . Constant1_Value_d44dmqnago , & rtP . i3mmrklbhsy .
Gain_Gain_ocaarxko02 , & rtP . i3mmrklbhsy . Gain1_Gain_iobf1zjibi , & rtP .
i3mmrklbhsy . Gain2_Gain_dprcbktiwb , & rtP . a2ydei5a12c . Constant2_Value ,
& rtP . jlq4jj2wgyy . Constant1_Value , & rtP . jlq4jj2wgyy . Gain2_Gain , &
rtP . jlq4jj2wgyy . Gain3_Gain , & rtP . jlq4jj2wgyy . Constant_Value , & rtP
. jlq4jj2wgyy . Gain_Gain , & rtP . jlq4jj2wgyy . Gain1_Gain , & rtP .
gjgjhmx54tp . Constant_Value , & rtP . gjgjhmx54tp . Gain_Gain , & rtP .
gjgjhmx54tp . SaturationI_UpperSat , & rtP . gjgjhmx54tp .
SaturationI_LowerSat , & rtP . gjgjhmx54tp . dBConversion_R , & rtP .
gjgjhmx54tp . ConvertdBmtoradians_Gain , & rtP . gjgjhmx54tp .
RescaleinputforAMPMlowerlimit_Gain , & rtP . gjgjhmx54tp .
ClipinputpowertoAMPMupperlimit_UpperSat , & rtP . gjgjhmx54tp .
ClipinputpowertoAMPMupperlimit_LowerSat , & rtP . h2dghdnqpmo .
dBConversion_R , & rtP . h2dghdnqpmo . ConvertdBmtoradians_Gain , & rtP .
h2dghdnqpmo . RescaleinputforAMPMlowerlimit_Gain , & rtP . h2dghdnqpmo .
ClipinputpowertoAMPMupperlimit_UpperSat , & rtP . h2dghdnqpmo .
ClipinputpowertoAMPMupperlimit_LowerSat , & rtP . m0wf3m1kcq . Constant_Value
, & rtP . m0wf3m1kcq . Constant1_Value , & rtP . m0wf3m1kcq . Gain_Gain , &
rtP . m0wf3m1kcq . Gain1_Gain , & rtP . m0wf3m1kcq . Gain2_Gain , & rtP .
m0wf3m1kcq . Constant_Value_ppghtlfurx , & rtP . m0wf3m1kcq .
Constant1_Value_d44dmqnago , & rtP . m0wf3m1kcq . Gain_Gain_ocaarxko02 , &
rtP . m0wf3m1kcq . Gain1_Gain_iobf1zjibi , & rtP . m0wf3m1kcq .
Gain2_Gain_dprcbktiwb , & rtP . la2ioretvo . Constant2_Value , & rtP .
mw5ylf2af1 . Constant1_Value , & rtP . mw5ylf2af1 . Gain2_Gain , & rtP .
mw5ylf2af1 . Gain3_Gain , & rtP . mw5ylf2af1 . Constant_Value , & rtP .
mw5ylf2af1 . Gain_Gain , & rtP . mw5ylf2af1 . Gain1_Gain , & rtP . h11e1j2gz5
. Constant_Value , & rtP . h11e1j2gz5 . Gain_Gain , & rtP . h11e1j2gz5 .
SaturationI_UpperSat , & rtP . h11e1j2gz5 . SaturationI_LowerSat , & rtP .
h11e1j2gz5 . dBConversion_R , & rtP . h11e1j2gz5 . ConvertdBmtoradians_Gain ,
& rtP . h11e1j2gz5 . RescaleinputforAMPMlowerlimit_Gain , & rtP . h11e1j2gz5
. ClipinputpowertoAMPMupperlimit_UpperSat , & rtP . h11e1j2gz5 .
ClipinputpowertoAMPMupperlimit_LowerSat , & rtP . b31ukzlbiz . dBConversion_R
, & rtP . b31ukzlbiz . ConvertdBmtoradians_Gain , & rtP . b31ukzlbiz .
RescaleinputforAMPMlowerlimit_Gain , & rtP . b31ukzlbiz .
ClipinputpowertoAMPMupperlimit_UpperSat , & rtP . b31ukzlbiz .
ClipinputpowertoAMPMupperlimit_LowerSat , & rtP . cnoquaiecb . Constant_Value
, & rtP . cnoquaiecb . Constant1_Value , & rtP . cnoquaiecb . Gain_Gain , &
rtP . cnoquaiecb . Gain1_Gain , & rtP . cnoquaiecb . Gain2_Gain , & rtP .
cnoquaiecb . Constant_Value_ppghtlfurx , & rtP . cnoquaiecb .
Constant1_Value_d44dmqnago , & rtP . cnoquaiecb . Gain_Gain_ocaarxko02 , &
rtP . cnoquaiecb . Gain1_Gain_iobf1zjibi , & rtP . cnoquaiecb .
Gain2_Gain_dprcbktiwb , & rtP . g5asqdbxd2 . Constant2_Value , & rtP .
bxzsvnh1aw . Constant1_Value , & rtP . bxzsvnh1aw . Gain2_Gain , & rtP .
bxzsvnh1aw . Gain3_Gain , & rtP . bxzsvnh1aw . Constant_Value , & rtP .
bxzsvnh1aw . Gain_Gain , & rtP . bxzsvnh1aw . Gain1_Gain , & rtP . oxx5igb303
. Constant_Value , & rtP . oxx5igb303 . Gain_Gain , & rtP . oxx5igb303 .
SaturationI_UpperSat , & rtP . oxx5igb303 . SaturationI_LowerSat , & rtP .
oxx5igb303 . dBConversion_R , & rtP . oxx5igb303 . ConvertdBmtoradians_Gain ,
& rtP . oxx5igb303 . RescaleinputforAMPMlowerlimit_Gain , & rtP . oxx5igb303
. ClipinputpowertoAMPMupperlimit_UpperSat , & rtP . oxx5igb303 .
ClipinputpowertoAMPMupperlimit_LowerSat , & rtP . ohwibl0oik . dBConversion_R
, & rtP . ohwibl0oik . ConvertdBmtoradians_Gain , & rtP . ohwibl0oik .
RescaleinputforAMPMlowerlimit_Gain , & rtP . ohwibl0oik .
ClipinputpowertoAMPMupperlimit_UpperSat , & rtP . ohwibl0oik .
ClipinputpowertoAMPMupperlimit_LowerSat , & rtP . ky1gbhg5rq . Constant_Value
, & rtP . ky1gbhg5rq . Constant1_Value , & rtP . ky1gbhg5rq . Gain_Gain , &
rtP . ky1gbhg5rq . Gain1_Gain , & rtP . ky1gbhg5rq . Gain2_Gain , & rtP .
ky1gbhg5rq . Constant_Value_ppghtlfurx , & rtP . ky1gbhg5rq .
Constant1_Value_d44dmqnago , & rtP . ky1gbhg5rq . Gain_Gain_ocaarxko02 , &
rtP . ky1gbhg5rq . Gain1_Gain_iobf1zjibi , & rtP . ky1gbhg5rq .
Gain2_Gain_dprcbktiwb , & rtP . m5sexzzsxy . Constant2_Value , & rtP .
nupi545oen . Constant1_Value , & rtP . nupi545oen . Gain2_Gain , & rtP .
nupi545oen . Gain3_Gain , & rtP . nupi545oen . Constant_Value , & rtP .
nupi545oen . Gain_Gain , & rtP . nupi545oen . Gain1_Gain , & rtP . itlpj4fodu
. Constant_Value , & rtP . itlpj4fodu . Gain_Gain , & rtP . itlpj4fodu .
SaturationI_UpperSat , & rtP . itlpj4fodu . SaturationI_LowerSat , & rtP .
itlpj4fodu . dBConversion_R , & rtP . itlpj4fodu . ConvertdBmtoradians_Gain ,
& rtP . itlpj4fodu . RescaleinputforAMPMlowerlimit_Gain , & rtP . itlpj4fodu
. ClipinputpowertoAMPMupperlimit_UpperSat , & rtP . itlpj4fodu .
ClipinputpowertoAMPMupperlimit_LowerSat , & rtP . lgb24eydta . dBConversion_R
, & rtP . lgb24eydta . ConvertdBmtoradians_Gain , & rtP . lgb24eydta .
RescaleinputforAMPMlowerlimit_Gain , & rtP . lgb24eydta .
ClipinputpowertoAMPMupperlimit_UpperSat , & rtP . lgb24eydta .
ClipinputpowertoAMPMupperlimit_LowerSat , & rtP . gjgjhmx54tp .
Constant_Value_cvizqzux0h , & rtP . gjgjhmx54tp . Constant1_Value , & rtP .
gjgjhmx54tp . Gain_Gain_ayvcaxgx4h , & rtP . h2dghdnqpmo . Constant_Value , &
rtP . h2dghdnqpmo . Constant1_Value , & rtP . h2dghdnqpmo . Gain_Gain , & rtP
. h11e1j2gz5 . Constant_Value_cvizqzux0h , & rtP . h11e1j2gz5 .
Constant1_Value , & rtP . h11e1j2gz5 . Gain_Gain_ayvcaxgx4h , & rtP .
b31ukzlbiz . Constant_Value , & rtP . b31ukzlbiz . Constant1_Value , & rtP .
b31ukzlbiz . Gain_Gain , & rtP . oxx5igb303 . Constant_Value_cvizqzux0h , &
rtP . oxx5igb303 . Constant1_Value , & rtP . oxx5igb303 .
Gain_Gain_ayvcaxgx4h , & rtP . ohwibl0oik . Constant_Value , & rtP .
ohwibl0oik . Constant1_Value , & rtP . ohwibl0oik . Gain_Gain , & rtP .
itlpj4fodu . Constant_Value_cvizqzux0h , & rtP . itlpj4fodu . Constant1_Value
, & rtP . itlpj4fodu . Gain_Gain_ayvcaxgx4h , & rtP . lgb24eydta .
Constant_Value , & rtP . lgb24eydta . Constant1_Value , & rtP . lgb24eydta .
Gain_Gain , & rtP . Gamma , & rtP . K , & rtP . numberofCoefficients , & rtP
. predistortionCoefficients [ 0 ] , & rtP . smoothing , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "struct" ,
"creal_T" , 0 , 0 , sizeof ( creal_T ) , ( uint8_T ) SS_DOUBLE , 1 , 0 , 0 }
, { "double" , "real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE ,
0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 1 , 1 , 21 , 1 , 81 , 8 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.000125 , 0.0 , 0.001 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ]
, ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 2 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
57 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 216 ,
rtModelParameters , 5 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 4214834857U , 3103436890U , 27036291U , 4290645429U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * DC2_predistortion_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void DC2_predistortion_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DC2_predistortion_host_InitializeDataMapInfo (
DC2_predistortion_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
