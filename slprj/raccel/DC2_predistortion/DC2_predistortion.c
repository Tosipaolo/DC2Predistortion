#include "rt_logging_mmi.h"
#include "DC2_predistortion_capi.h"
#include <math.h>
#include "DC2_predistortion.h"
#include "DC2_predistortion_private.h"
#include "DC2_predistortion_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.4 (R2021b) 14-May-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; void cvbxviq05o ( SimStruct * rtS_i ) { if ( ssGetTaskTime ( rtS_i
, 1 ) != ssGetTStart ( rtS_i ) ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS_i ) ; } } void la31y5n30p ( SimStruct * rtS_e ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ; } void fdxrj50qov (
bxzllg25xj * localDW ) { localDW -> kcg44srdmp = 0 ; } void gjgjhmx54t (
SimStruct * rtS_m , creal_T d12pdo3l3f , creal_T * okrwbmhfvv , bxzllg25xj *
localDW , nsr5johinx * localP ) { real_T a0pawf0n5t ; real_T dbikuatduj ;
real_T e4idr4k0gf ; real_T erqplvvndh ; real_T o4kfkdhc4x ; if (
ssIsSampleHit ( rtS_m , 1 , 0 ) ) { o4kfkdhc4x = localP -> InputGain1_Gain *
d12pdo3l3f . re ; erqplvvndh = localP -> InputGain1_Gain * d12pdo3l3f . im ;
dbikuatduj = muDoubleScalarHypot ( o4kfkdhc4x , erqplvvndh ) ; if (
dbikuatduj > localP -> SaturationI_UpperSat ) { a0pawf0n5t = localP ->
SaturationI_UpperSat ; } else if ( dbikuatduj < localP ->
SaturationI_LowerSat ) { a0pawf0n5t = localP -> SaturationI_LowerSat ; } else
{ a0pawf0n5t = dbikuatduj ; } if ( ( a0pawf0n5t < 0.0 ) && ( localP ->
Constant_Value > muDoubleScalarFloor ( localP -> Constant_Value ) ) ) {
e4idr4k0gf = - muDoubleScalarPower ( - a0pawf0n5t , localP -> Constant_Value
) ; } else { e4idr4k0gf = muDoubleScalarPower ( a0pawf0n5t , localP ->
Constant_Value ) ; } a0pawf0n5t -= localP -> Gain_Gain * e4idr4k0gf ;
dbikuatduj = localP -> RescaleinputforAMPMlowerlimit_Gain * dbikuatduj +
localP -> Constant_Value_cvizqzux0h ; dbikuatduj = 1.0 / localP ->
dBConversion_R * ( dbikuatduj * dbikuatduj ) ; if ( ssIsMajorTimeStep ( rtS_m
) ) { if ( localDW -> kcg44srdmp != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; localDW -> kcg44srdmp
= 0 ; } } else if ( dbikuatduj < 0.0 ) { dbikuatduj = 0.0 ; localDW ->
kcg44srdmp = 1 ; } dbikuatduj = localP -> Gain_Gain_ayvcaxgx4h *
muDoubleScalarLog10 ( dbikuatduj ) + localP -> Constant1_Value ; if (
dbikuatduj > localP -> ClipinputpowertoAMPMupperlimit_UpperSat ) { dbikuatduj
= localP -> ClipinputpowertoAMPMupperlimit_UpperSat ; } else if ( dbikuatduj
< localP -> ClipinputpowertoAMPMupperlimit_LowerSat ) { dbikuatduj = localP
-> ClipinputpowertoAMPMupperlimit_LowerSat ; } dbikuatduj = localP ->
ConvertdBmtoradians_Gain * dbikuatduj + muDoubleScalarAtan2 ( erqplvvndh ,
o4kfkdhc4x ) ; okrwbmhfvv -> re = a0pawf0n5t * muDoubleScalarCos ( dbikuatduj
) * localP -> OutputGain1_Gain ; okrwbmhfvv -> im = a0pawf0n5t *
muDoubleScalarSin ( dbikuatduj ) * localP -> OutputGain1_Gain ; } } void
m11vbmyfcy ( SimStruct * rtS_g ) { if ( ssGetTaskTime ( rtS_g , 1 ) !=
ssGetTStart ( rtS_g ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_g
) ; } } void fhgajuipw1 ( SimStruct * rtS_e ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ; } void e1b24d0law (
f1h3lvtwzq * localDW ) { localDW -> hagga0ljnk = 0 ; } void h2dghdnqpm (
SimStruct * rtS_p , creal_T agm3srflil , creal_T * mun343lur4 , f1h3lvtwzq *
localDW , kkemggmfhk * localP ) { real_T d2qmjkndbt ; real_T kh2fzn45zu ;
real_T lqpzi35hji ; real_T nwcuf2gtcy ; if ( ssIsSampleHit ( rtS_p , 1 , 0 )
) { kh2fzn45zu = localP -> InputGain2_Gain * agm3srflil . re ; nwcuf2gtcy =
localP -> InputGain2_Gain * agm3srflil . im ; lqpzi35hji =
muDoubleScalarHypot ( kh2fzn45zu , nwcuf2gtcy ) ; d2qmjkndbt = localP ->
RescaleinputforAMPMlowerlimit_Gain * lqpzi35hji + localP -> Constant_Value ;
d2qmjkndbt = 1.0 / localP -> dBConversion_R * ( d2qmjkndbt * d2qmjkndbt ) ;
if ( ssIsMajorTimeStep ( rtS_p ) ) { if ( localDW -> hagga0ljnk != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; localDW -> hagga0ljnk
= 0 ; } } else if ( d2qmjkndbt < 0.0 ) { d2qmjkndbt = 0.0 ; localDW ->
hagga0ljnk = 1 ; } d2qmjkndbt = localP -> Gain_Gain * muDoubleScalarLog10 (
d2qmjkndbt ) + localP -> Constant1_Value ; if ( d2qmjkndbt > localP ->
ClipinputpowertoAMPMupperlimit_UpperSat ) { d2qmjkndbt = localP ->
ClipinputpowertoAMPMupperlimit_UpperSat ; } else if ( d2qmjkndbt < localP ->
ClipinputpowertoAMPMupperlimit_LowerSat ) { d2qmjkndbt = localP ->
ClipinputpowertoAMPMupperlimit_LowerSat ; } d2qmjkndbt = localP ->
ConvertdBmtoradians_Gain * d2qmjkndbt + muDoubleScalarAtan2 ( nwcuf2gtcy ,
kh2fzn45zu ) ; mun343lur4 -> re = muDoubleScalarTanh ( lqpzi35hji ) *
muDoubleScalarCos ( d2qmjkndbt ) * localP -> OutputGain2_Gain ; mun343lur4 ->
im = muDoubleScalarTanh ( lqpzi35hji ) * muDoubleScalarSin ( d2qmjkndbt ) *
localP -> OutputGain2_Gain ; } } void ifdky132nx ( SimStruct * rtS_f ) { if (
ssGetTaskTime ( rtS_f , 1 ) != ssGetTStart ( rtS_f ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_f ) ; } } void lfwqxgiwjp (
SimStruct * rtS_j ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_j ) ;
} void jlq4jj2wgy ( SimStruct * rtS_m , creal_T nttyuwoost , creal_T *
fq2w1cjt5r , noy0gteuwf * localP ) { real_T cgbshdbegs ; real_T dkhnjtuo00 ;
real_T jufjcaavwd ; real_T oigbwrfbyd ; if ( ssIsSampleHit ( rtS_m , 1 , 0 )
) { cgbshdbegs = localP -> InputGain_Gain * nttyuwoost . re ; oigbwrfbyd =
localP -> InputGain_Gain * nttyuwoost . im ; jufjcaavwd = muDoubleScalarHypot
( cgbshdbegs , oigbwrfbyd ) ; dkhnjtuo00 = jufjcaavwd * jufjcaavwd ;
dkhnjtuo00 = localP -> Gain1_Gain * dkhnjtuo00 / ( localP -> Gain_Gain *
dkhnjtuo00 + localP -> Constant_Value ) + muDoubleScalarAtan2 ( oigbwrfbyd ,
cgbshdbegs ) ; fq2w1cjt5r -> re = localP -> Gain3_Gain * jufjcaavwd / (
jufjcaavwd * jufjcaavwd * localP -> Gain2_Gain + localP -> Constant1_Value )
* muDoubleScalarCos ( dkhnjtuo00 ) * localP -> OutputGain_Gain ; fq2w1cjt5r
-> im = localP -> Gain3_Gain * jufjcaavwd / ( jufjcaavwd * jufjcaavwd *
localP -> Gain2_Gain + localP -> Constant1_Value ) * muDoubleScalarSin (
dkhnjtuo00 ) * localP -> OutputGain_Gain ; } } void m5hpeeghtx ( SimStruct *
rtS_k ) { if ( ssGetTaskTime ( rtS_k , 1 ) != ssGetTStart ( rtS_k ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_k ) ; } } void j5vz4r204t (
SimStruct * rtS_c ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_c ) ;
} void i3mmrklbhs ( SimStruct * rtS_c , creal_T m1adh3qas0 , creal_T *
boorkizcyu , fcqgn3ua1e * localP ) { real_T clilk00t3p ; real_T dipglknqf2 ;
real_T f0blkibpfp ; real_T n10ep4gpwm ; real_T oszdn3oixc ; if (
ssIsSampleHit ( rtS_c , 1 , 0 ) ) { clilk00t3p = localP -> InputGain_Gain *
m1adh3qas0 . re ; n10ep4gpwm = localP -> InputGain_Gain * m1adh3qas0 . im ;
oszdn3oixc = muDoubleScalarHypot ( clilk00t3p , n10ep4gpwm ) ; dipglknqf2 =
muDoubleScalarPower ( oszdn3oixc , localP -> Constant1_Value ) ; f0blkibpfp =
muDoubleScalarPower ( oszdn3oixc , localP -> Constant_Value_ppghtlfurx ) ;
f0blkibpfp = ( localP -> Gain1_Gain_iobf1zjibi * f0blkibpfp / ( localP ->
Gain2_Gain_dprcbktiwb * f0blkibpfp + localP -> Constant1_Value_d44dmqnago ) +
localP -> Gain_Gain_ocaarxko02 * oszdn3oixc ) + muDoubleScalarAtan2 (
n10ep4gpwm , clilk00t3p ) ; boorkizcyu -> re = ( localP -> Gain1_Gain *
dipglknqf2 / ( localP -> Gain2_Gain * dipglknqf2 + localP -> Constant_Value )
+ localP -> Gain_Gain * oszdn3oixc ) * muDoubleScalarCos ( f0blkibpfp ) *
localP -> OutputGain_Gain ; boorkizcyu -> im = ( localP -> Gain1_Gain *
dipglknqf2 / ( localP -> Gain2_Gain * dipglknqf2 + localP -> Constant_Value )
+ localP -> Gain_Gain * oszdn3oixc ) * muDoubleScalarSin ( f0blkibpfp ) *
localP -> OutputGain_Gain ; } } void meo3exjmfs ( SimStruct * rtS_p ) { if (
ssGetTaskTime ( rtS_p , 1 ) != ssGetTStart ( rtS_p ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; } } void ojq5cxb2na (
SimStruct * rtS_b ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_b ) ;
} void a2ydei5a12 ( SimStruct * rtS_c , creal_T aodheop0dz , creal_T *
mi4xbtbx35 , real_T rtp_vsat , real_T rtp_p , lazhyygqy2 * localP ) { real_T
aep2d5p1l3 ; real_T myun0kakv2 ; real_T njo4u2ea4r ; real_T tmp ; if (
ssIsSampleHit ( rtS_c , 1 , 0 ) ) { aep2d5p1l3 = localP -> InputGain_Gain *
aodheop0dz . re ; myun0kakv2 = localP -> InputGain_Gain * aodheop0dz . im ;
njo4u2ea4r = muDoubleScalarHypot ( aep2d5p1l3 , myun0kakv2 ) ; aep2d5p1l3 =
muDoubleScalarAtan2 ( myun0kakv2 , aep2d5p1l3 ) ; myun0kakv2 = njo4u2ea4r /
rtp_vsat ; tmp = 2.0 * rtp_p ; if ( ( myun0kakv2 < 0.0 ) && ( tmp >
muDoubleScalarFloor ( tmp ) ) ) { myun0kakv2 = - muDoubleScalarPower ( -
myun0kakv2 , tmp ) ; } else { myun0kakv2 = muDoubleScalarPower ( myun0kakv2 ,
tmp ) ; } myun0kakv2 += localP -> Constant2_Value ; tmp = 1.0 / ( 2.0 * rtp_p
) ; if ( ( myun0kakv2 < 0.0 ) && ( tmp > muDoubleScalarFloor ( tmp ) ) ) {
myun0kakv2 = - muDoubleScalarPower ( - myun0kakv2 , tmp ) ; } else {
myun0kakv2 = muDoubleScalarPower ( myun0kakv2 , tmp ) ; } mi4xbtbx35 -> re =
njo4u2ea4r / myun0kakv2 * muDoubleScalarCos ( aep2d5p1l3 ) * localP ->
OutputGain_Gain ; mi4xbtbx35 -> im = njo4u2ea4r / myun0kakv2 *
muDoubleScalarSin ( aep2d5p1l3 ) * localP -> OutputGain_Gain ; } } real_T
rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { uint32_T hi ; uint32_T lo ; lo
= * u % 127773U * 16807U ; hi = * u / 127773U * 2836U ; if ( lo < hi ) { * u
= 2147483647U - ( hi - lo ) ; } else { * u = lo - hi ; } return ( real_T ) *
u * 4.6566128752457969E-10 ; } real_T rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T *
u ) { real_T si ; real_T sr ; real_T y ; do { sr = 2.0 *
rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = 2.0 *
rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr + si * si ; } while (
si > 1.0 ) ; y = muDoubleScalarSqrt ( - 2.0 * muDoubleScalarLog ( si ) / si )
* sr ; return y ; } void MdlInitialize ( void ) { real_T tmp ; int32_T i ;
int32_T t ; uint32_T tseed ; tmp = muDoubleScalarFloor ( rtP .
RandomNumber_Seed ) ; if ( muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf
( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem ( tmp ,
4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i <<
16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else if ( tseed > 2147483646U ) { tseed = 2147483646U ; } rtDW . j5nte5je4m
= tseed ; rtDW . isga1tvhed = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW .
j5nte5je4m ) * rtP . RandomNumber_StdDev + rtP . RandomNumber_Mean ; tmp =
muDoubleScalarFloor ( rtP . RandomNumber1_Seed ) ; if ( muDoubleScalarIsNaN (
tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp =
muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T
) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) (
tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed -
( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) {
tseed = 1144108930U ; } else if ( tseed > 2147483646U ) { tseed = 2147483646U
; } rtDW . l2kgcq0re2 = tseed ; rtDW . cjfen0irxn =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . l2kgcq0re2 ) * rtP .
RandomNumber1_StdDev + rtP . RandomNumber1_Mean ; memset ( & rtDW .
plgnzuu14l [ 0 ] , 0 , 80U * sizeof ( creal_T ) ) ; rtDW . fau3j3pljx = 0 ;
rtDW . ivl3pyl0kb = false ; memset ( & rtDW . cmrwiwvhv2 [ 0 ] , 0 , sizeof (
creal_T ) << 4U ) ; rtDW . nkjleonipu = 0 ; rtDW . cx41hv41j3 = 0U ; rtDW .
ngc1ln2x4x = 0.0 ; rtDW . cqvxq0wzsw = 0U ; rtDW . kr1gfvkwbz = 0.0 ; rtDW .
ngu3sock5e = 0U ; rtDW . o0b2xe44us = 0.0 ; rtDW . hvueaarh1x = 0U ; rtDW .
lhdyhtvix0 = 0.0 ; rtB . kiqaumkd25 . re = rtP . Merge_InitialOutput ; rtB .
kiqaumkd25 . im = 0.0 ; rtB . p3vgaf2auy . re = rtP .
Merge_InitialOutput_g5nqz3hux4 ; rtB . p3vgaf2auy . im = 0.0 ; rtB .
hctnnyx5m3 . re = rtP . Merge_InitialOutput_jvxvc1fdjr ; rtB . hctnnyx5m3 .
im = 0.0 ; rtB . h1jjlm1sm0 . re = rtP . Merge_InitialOutput_ptx5e4hsry ; rtB
. h1jjlm1sm0 . im = 0.0 ; } void MdlStart ( void ) { int32_T i ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} fdxrj50qov ( & rtDW . gjgjhmx54tp ) ; e1b24d0law ( & rtDW . h2dghdnqpmo ) ;
fdxrj50qov ( & rtDW . h11e1j2gz5 ) ; e1b24d0law ( & rtDW . b31ukzlbiz ) ;
fdxrj50qov ( & rtDW . oxx5igb303 ) ; e1b24d0law ( & rtDW . ohwibl0oik ) ;
fdxrj50qov ( & rtDW . itlpj4fodu ) ; e1b24d0law ( & rtDW . lgb24eydta ) ; rtB
. fwlyf33y4r = 1.0 ; la31y5n30p ( rtS ) ; fhgajuipw1 ( rtS ) ; lfwqxgiwjp (
rtS ) ; j5vz4r204t ( rtS ) ; ojq5cxb2na ( rtS ) ; rtDW . mlcl0axizw = - 1 ;
rtB . g3h0ozjzik = 1.0 ; la31y5n30p ( rtS ) ; fhgajuipw1 ( rtS ) ; lfwqxgiwjp
( rtS ) ; j5vz4r204t ( rtS ) ; ojq5cxb2na ( rtS ) ; rtDW . ckmkptbrit = - 1 ;
rtDW . agdsuxy0ad = 0 ; rtB . liv1jyvf4j = 1.0 ; la31y5n30p ( rtS ) ;
fhgajuipw1 ( rtS ) ; lfwqxgiwjp ( rtS ) ; j5vz4r204t ( rtS ) ; ojq5cxb2na (
rtS ) ; rtDW . ng5noqhlxy = - 1 ; rtDW . iahe4vgmns = 0 ; rtB . pydzara4tv =
1.0 ; la31y5n30p ( rtS ) ; fhgajuipw1 ( rtS ) ; lfwqxgiwjp ( rtS ) ;
j5vz4r204t ( rtS ) ; ojq5cxb2na ( rtS ) ; rtDW . cxchwz3w2x = - 1 ; rtDW .
kwitn1ejt4 = 0 ; rtDW . liejrqzwm0 = 0 ; for ( i = 0 ; i < 21 ; i ++ ) { rtDW
. chpwd4mva5 [ i ] . re = rtP . predistortionCoefficients [ i ] ; rtDW .
chpwd4mva5 [ i ] . im = 0.0 ; } rtDW . cf5q1i4rqo = rtP .
numberofCoefficients ; rtDW . kzbxs50x2c = rtP . K ; MdlInitialize ( ) ; }
void MdlOutputs ( int_T tid ) { real_T a_n1_im ; real_T a_n1_re ; real_T ar ;
real_T ba0ir2nkga ; real_T br ; real_T delta ; real_T fqxthp1vcy ; real_T
xAbs ; int32_T coefIdx ; int32_T i ; int32_T j ; int32_T m ; int8_T rtAction
; int8_T rtPrevAction ; boolean_T exitg1 ; if ( ssIsSampleHit ( rtS , 0 , 0 )
) { srClearBC ( rtDW . gjgjhmx54tp . ddfnl1zb3v ) ; } if ( ssIsSampleHit (
rtS , 0 , 0 ) ) { srClearBC ( rtDW . h2dghdnqpmo . ktphnd4lwv ) ; } if (
ssIsSampleHit ( rtS , 0 , 0 ) ) { srClearBC ( rtDW . jlq4jj2wgyy . p5zzsmsop2
) ; } if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { srClearBC ( rtDW . i3mmrklbhsy .
fibqjkqnjk ) ; } if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { srClearBC ( rtDW .
a2ydei5a12c . cejkopwbtv ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { memcpy
( & rtB . kymkdfxsdf [ 0 ] , & rtDW . chpwd4mva5 [ 0 ] , 21U * sizeof (
creal_T ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . fkot4ufw2s . re
= rtDW . isga1tvhed ; rtB . fkot4ufw2s . im = rtDW . cjfen0irxn ; if ( rtDW .
ivl3pyl0kb ) { i = 8 ; } else { i = 0 ; } for ( m = 0 ; m < 8 ; m ++ ) {
coefIdx = m * 81 ; a_n1_re = rtB . fkot4ufw2s . re * rtP .
FIRInterpolation_FILTER_COEFF [ coefIdx ] ; a_n1_im = rtB . fkot4ufw2s . im *
rtP . FIRInterpolation_FILTER_COEFF [ coefIdx ] ; coefIdx ++ ; for ( j = rtDW
. fau3j3pljx ; j < 80 ; j ++ ) { a_n1_re += rtDW . plgnzuu14l [ j ] . re *
rtP . FIRInterpolation_FILTER_COEFF [ coefIdx ] ; a_n1_im += rtDW .
plgnzuu14l [ j ] . im * rtP . FIRInterpolation_FILTER_COEFF [ coefIdx ] ;
coefIdx ++ ; } for ( j = 0 ; j < rtDW . fau3j3pljx ; j ++ ) { a_n1_re += rtDW
. plgnzuu14l [ j ] . re * rtP . FIRInterpolation_FILTER_COEFF [ coefIdx ] ;
a_n1_im += rtDW . plgnzuu14l [ j ] . im * rtP . FIRInterpolation_FILTER_COEFF
[ coefIdx ] ; coefIdx ++ ; } rtDW . cmrwiwvhv2 [ i ] . re = a_n1_re ; rtDW .
cmrwiwvhv2 [ i ] . im = a_n1_im ; i ++ ; } rtDW . ivl3pyl0kb = ! rtDW .
ivl3pyl0kb ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { ba0ir2nkga = rtDW .
cmrwiwvhv2 [ rtDW . nkjleonipu ] . re ; fqxthp1vcy = rtDW . cmrwiwvhv2 [ rtDW
. nkjleonipu ] . im ; rtDW . nkjleonipu ++ ; if ( rtDW . nkjleonipu >= 16 ) {
rtDW . nkjleonipu = 0 ; } rtB . izmnfo20bh . re = ba0ir2nkga * rtP .
LAMBDA_Value ; rtB . izmnfo20bh . im = fqxthp1vcy * rtP . LAMBDA_Value ;
fqxthp1vcy = muDoubleScalarAtan2 ( rtB . izmnfo20bh . im , rtB . izmnfo20bh .
re ) ; ba0ir2nkga = muDoubleScalarHypot ( rtB . izmnfo20bh . re , rtB .
izmnfo20bh . im ) ; if ( ba0ir2nkga > rtP . Saturation_UpperSat ) {
ba0ir2nkga = rtP . Saturation_UpperSat ; } else if ( ba0ir2nkga < rtP .
Saturation_LowerSat ) { ba0ir2nkga = rtP . Saturation_LowerSat ; } rtB .
isvafp3kpr . re = ba0ir2nkga * muDoubleScalarCos ( fqxthp1vcy ) ; ba0ir2nkga
= muDoubleScalarHypot ( rtB . izmnfo20bh . re , rtB . izmnfo20bh . im ) ; if
( ba0ir2nkga > rtP . Saturation_UpperSat ) { ba0ir2nkga = rtP .
Saturation_UpperSat ; } else if ( ba0ir2nkga < rtP . Saturation_LowerSat ) {
ba0ir2nkga = rtP . Saturation_LowerSat ; } rtB . isvafp3kpr . im = ba0ir2nkga
* muDoubleScalarSin ( fqxthp1vcy ) ; fqxthp1vcy = rtDW . cf5q1i4rqo ; xAbs =
muDoubleScalarHypot ( rtB . isvafp3kpr . re , rtB . isvafp3kpr . im ) ;
ba0ir2nkga = rtDW . cf5q1i4rqo + 9999.0 ; delta = 0.5 * rtDW . cf5q1i4rqo ;
a_n1_re = 1.0 / rtDW . cf5q1i4rqo ; i = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( i <= ( int32_T ) ( rtDW . cf5q1i4rqo + 1.0 ) - 1 ) ) { if ( (
xAbs > ( ( ( real_T ) i + 1.0 ) - 1.0 ) * a_n1_re ) && ( xAbs <= ( ( real_T )
i + 1.0 ) * a_n1_re ) ) { if ( xAbs - ( ( ( real_T ) i + 1.0 ) - 1.0 ) *
a_n1_re < muDoubleScalarAbs ( xAbs - ( ( real_T ) i + 1.0 ) * a_n1_re ) ) {
ba0ir2nkga = ( real_T ) i + 1.0 ; } else { ba0ir2nkga = ( ( real_T ) i + 1.0
) + 1.0 ; } exitg1 = true ; } else { i ++ ; } } if ( rtDW . cf5q1i4rqo + 1.0
== ba0ir2nkga ) { a_n1_re = rtB . kymkdfxsdf [ ( int32_T ) ba0ir2nkga - 1 ] .
re ; a_n1_im = rtB . kymkdfxsdf [ ( int32_T ) ba0ir2nkga - 1 ] . im ; } else
{ a_n1_re = rtB . kymkdfxsdf [ ( int32_T ) ( ba0ir2nkga + 1.0 ) - 1 ] . re ;
a_n1_im = rtB . kymkdfxsdf [ ( int32_T ) ( ba0ir2nkga + 1.0 ) - 1 ] . im ; }
ar = ( xAbs - ( ba0ir2nkga + 1.0 ) * delta ) * ( a_n1_re - rtB . kymkdfxsdf [
( int32_T ) ba0ir2nkga - 1 ] . re ) ; xAbs = ( xAbs - ( ba0ir2nkga + 1.0 ) *
delta ) * ( a_n1_im - rtB . kymkdfxsdf [ ( int32_T ) ba0ir2nkga - 1 ] . im )
; br = 2.0 * delta ; if ( xAbs == 0.0 ) { delta = ar / br ; br = 0.0 ; } else
if ( ar == 0.0 ) { delta = 0.0 ; br = xAbs / br ; } else { delta = ar / br ;
br = xAbs / br ; } ar = rtB . kymkdfxsdf [ ( int32_T ) ba0ir2nkga - 1 ] . re
+ a_n1_re ; xAbs = rtB . kymkdfxsdf [ ( int32_T ) ba0ir2nkga - 1 ] . im +
a_n1_im ; if ( xAbs == 0.0 ) { a_n1_re = ar / 2.0 ; a_n1_im = 0.0 ; } else if
( ar == 0.0 ) { a_n1_re = 0.0 ; a_n1_im = xAbs / 2.0 ; } else { a_n1_re = ar
/ 2.0 ; a_n1_im = xAbs / 2.0 ; } delta += a_n1_re ; br += a_n1_im ; rtB .
aoricz1svq . re = delta * rtB . isvafp3kpr . re - br * rtB . isvafp3kpr . im
; rtB . aoricz1svq . im = delta * rtB . isvafp3kpr . im + br * rtB .
isvafp3kpr . re ; rtPrevAction = rtDW . mlcl0axizw ; rtAction = - 1 ;
ba0ir2nkga = trunc ( rtP . Gain_Gain * rtB . fwlyf33y4r ) ; if (
muDoubleScalarIsNaN ( ba0ir2nkga ) || muDoubleScalarIsInf ( ba0ir2nkga ) ) {
ba0ir2nkga = 0.0 ; } else { ba0ir2nkga = muDoubleScalarRem ( ba0ir2nkga ,
4.294967296E+9 ) ; } switch ( ba0ir2nkga < 0.0 ? - ( int32_T ) ( uint32_T ) -
ba0ir2nkga : ( int32_T ) ( uint32_T ) ba0ir2nkga ) { case 1 : rtAction = 0 ;
break ; case 2 : rtAction = 1 ; break ; case 3 : rtAction = 2 ; break ; case
4 : rtAction = 3 ; break ; case 5 : rtAction = 4 ; break ; } rtDW .
mlcl0axizw = rtAction ; if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : la31y5n30p ( rtS ) ; break ; case 1 : fhgajuipw1 (
rtS ) ; break ; case 2 : lfwqxgiwjp ( rtS ) ; break ; case 3 : j5vz4r204t (
rtS ) ; break ; case 4 : ojq5cxb2na ( rtS ) ; break ; } } switch ( rtAction )
{ case 0 : if ( rtAction != rtPrevAction ) { cvbxviq05o ( rtS ) ; }
gjgjhmx54t ( rtS , rtB . aoricz1svq , & rtB . kiqaumkd25 , & rtDW .
gjgjhmx54tp , & rtP . gjgjhmx54tp ) ; srUpdateBC ( rtDW . gjgjhmx54tp .
ddfnl1zb3v ) ; break ; case 1 : if ( rtAction != rtPrevAction ) { m11vbmyfcy
( rtS ) ; } h2dghdnqpm ( rtS , rtB . aoricz1svq , & rtB . kiqaumkd25 , & rtDW
. h2dghdnqpmo , & rtP . h2dghdnqpmo ) ; srUpdateBC ( rtDW . h2dghdnqpmo .
ktphnd4lwv ) ; break ; case 2 : if ( rtAction != rtPrevAction ) { ifdky132nx
( rtS ) ; } jlq4jj2wgy ( rtS , rtB . aoricz1svq , & rtB . kiqaumkd25 , & rtP
. jlq4jj2wgyy ) ; srUpdateBC ( rtDW . jlq4jj2wgyy . p5zzsmsop2 ) ; break ;
case 3 : if ( rtAction != rtPrevAction ) { m5hpeeghtx ( rtS ) ; } i3mmrklbhs
( rtS , rtB . aoricz1svq , & rtB . kiqaumkd25 , & rtP . i3mmrklbhsy ) ;
srUpdateBC ( rtDW . i3mmrklbhsy . fibqjkqnjk ) ; break ; case 4 : if (
rtAction != rtPrevAction ) { meo3exjmfs ( rtS ) ; } a2ydei5a12 ( rtS , rtB .
aoricz1svq , & rtB . kiqaumkd25 , rtP . MemorylessNonlinearity_vsat , rtP .
smoothing , & rtP . a2ydei5a12c ) ; srUpdateBC ( rtDW . a2ydei5a12c .
cejkopwbtv ) ; break ; } memcpy ( & rtDW . chpwd4mva5 [ 0 ] , & rtB .
kymkdfxsdf [ 0 ] , 21U * sizeof ( creal_T ) ) ; ba0ir2nkga = fqxthp1vcy +
100.0 ; a_n1_re = 1.0 / fqxthp1vcy ; i = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( i <= ( int32_T ) ( fqxthp1vcy + 1.0 ) - 1 ) ) { if ( (
muDoubleScalarHypot ( rtB . isvafp3kpr . re , rtB . isvafp3kpr . im ) > ( ( (
real_T ) i + 1.0 ) - 1.0 ) * a_n1_re ) && ( muDoubleScalarHypot ( rtB .
isvafp3kpr . re , rtB . isvafp3kpr . im ) <= ( ( real_T ) i + 1.0 ) * a_n1_re
) ) { if ( muDoubleScalarHypot ( rtB . isvafp3kpr . re , rtB . isvafp3kpr .
im ) - ( ( ( real_T ) i + 1.0 ) - 1.0 ) * a_n1_re < muDoubleScalarAbs (
muDoubleScalarHypot ( rtB . isvafp3kpr . re , rtB . isvafp3kpr . im ) - ( (
real_T ) i + 1.0 ) * a_n1_re ) ) { ba0ir2nkga = ( real_T ) i + 1.0 ; } else {
ba0ir2nkga = ( ( real_T ) i + 1.0 ) + 1.0 ; } exitg1 = true ; } else { i ++ ;
} } if ( - rtB . aoricz1svq . im == 0.0 ) { if ( - rtB . kiqaumkd25 . im ==
0.0 ) { fqxthp1vcy = rtB . kiqaumkd25 . re / rtB . aoricz1svq . re ; a_n1_re
= 0.0 ; } else if ( rtB . kiqaumkd25 . re == 0.0 ) { fqxthp1vcy = 0.0 ;
a_n1_re = - rtB . kiqaumkd25 . im / rtB . aoricz1svq . re ; } else {
fqxthp1vcy = rtB . kiqaumkd25 . re / rtB . aoricz1svq . re ; a_n1_re = - rtB
. kiqaumkd25 . im / rtB . aoricz1svq . re ; } } else if ( rtB . aoricz1svq .
re == 0.0 ) { if ( rtB . kiqaumkd25 . re == 0.0 ) { fqxthp1vcy = - rtB .
kiqaumkd25 . im / - rtB . aoricz1svq . im ; a_n1_re = 0.0 ; } else if ( - rtB
. kiqaumkd25 . im == 0.0 ) { fqxthp1vcy = 0.0 ; a_n1_re = - ( rtB .
kiqaumkd25 . re / - rtB . aoricz1svq . im ) ; } else { fqxthp1vcy = - rtB .
kiqaumkd25 . im / - rtB . aoricz1svq . im ; a_n1_re = - ( rtB . kiqaumkd25 .
re / - rtB . aoricz1svq . im ) ; } } else { a_n1_re = muDoubleScalarAbs ( rtB
. aoricz1svq . re ) ; fqxthp1vcy = muDoubleScalarAbs ( - rtB . aoricz1svq .
im ) ; if ( a_n1_re > fqxthp1vcy ) { a_n1_re = - rtB . aoricz1svq . im / rtB
. aoricz1svq . re ; a_n1_im = a_n1_re * - rtB . aoricz1svq . im + rtB .
aoricz1svq . re ; fqxthp1vcy = ( a_n1_re * - rtB . kiqaumkd25 . im + rtB .
kiqaumkd25 . re ) / a_n1_im ; a_n1_re = ( - rtB . kiqaumkd25 . im - a_n1_re *
rtB . kiqaumkd25 . re ) / a_n1_im ; } else if ( fqxthp1vcy == a_n1_re ) {
a_n1_im = rtB . aoricz1svq . re > 0.0 ? 0.5 : - 0.5 ; ar = - rtB . aoricz1svq
. im > 0.0 ? 0.5 : - 0.5 ; fqxthp1vcy = ( rtB . kiqaumkd25 . re * a_n1_im + -
rtB . kiqaumkd25 . im * ar ) / a_n1_re ; a_n1_re = ( - rtB . kiqaumkd25 . im
* a_n1_im - rtB . kiqaumkd25 . re * ar ) / a_n1_re ; } else { a_n1_re = rtB .
aoricz1svq . re / - rtB . aoricz1svq . im ; a_n1_im = a_n1_re * rtB .
aoricz1svq . re + - rtB . aoricz1svq . im ; fqxthp1vcy = ( a_n1_re * rtB .
kiqaumkd25 . re + - rtB . kiqaumkd25 . im ) / a_n1_im ; a_n1_re = ( a_n1_re *
- rtB . kiqaumkd25 . im - rtB . kiqaumkd25 . re ) / a_n1_im ; } } a_n1_im = (
rtB . kiqaumkd25 . re - rtDW . kzbxs50x2c * rtB . isvafp3kpr . re ) * rtP .
Gamma ; ar = ( rtB . kiqaumkd25 . im - rtDW . kzbxs50x2c * rtB . isvafp3kpr .
im ) * rtP . Gamma ; xAbs = a_n1_im * fqxthp1vcy - ar * a_n1_re ; a_n1_re =
a_n1_im * a_n1_re + ar * fqxthp1vcy ; rtDW . chpwd4mva5 [ ( int32_T )
ba0ir2nkga - 1 ] . re = rtB . kymkdfxsdf [ ( int32_T ) ba0ir2nkga - 1 ] . re
- ( xAbs * rtB . isvafp3kpr . re - a_n1_re * - rtB . isvafp3kpr . im ) ; rtDW
. chpwd4mva5 [ ( int32_T ) ba0ir2nkga - 1 ] . im = rtB . kymkdfxsdf [ (
int32_T ) ba0ir2nkga - 1 ] . im - ( xAbs * - rtB . isvafp3kpr . im + a_n1_re
* rtB . isvafp3kpr . re ) ; rtPrevAction = rtDW . ckmkptbrit ; rtAction = - 1
; ba0ir2nkga = trunc ( rtP . Gain_Gain_i2t5tgo53m * rtB . g3h0ozjzik ) ; if (
muDoubleScalarIsNaN ( ba0ir2nkga ) || muDoubleScalarIsInf ( ba0ir2nkga ) ) {
ba0ir2nkga = 0.0 ; } else { ba0ir2nkga = muDoubleScalarRem ( ba0ir2nkga ,
4.294967296E+9 ) ; } switch ( ba0ir2nkga < 0.0 ? - ( int32_T ) ( uint32_T ) -
ba0ir2nkga : ( int32_T ) ( uint32_T ) ba0ir2nkga ) { case 1 : rtAction = 0 ;
break ; case 2 : rtAction = 1 ; break ; case 3 : rtAction = 2 ; break ; case
4 : rtAction = 3 ; break ; case 5 : rtAction = 4 ; break ; } rtDW .
ckmkptbrit = rtAction ; if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : la31y5n30p ( rtS ) ; break ; case 1 : fhgajuipw1 (
rtS ) ; break ; case 2 : lfwqxgiwjp ( rtS ) ; break ; case 3 : j5vz4r204t (
rtS ) ; break ; case 4 : ojq5cxb2na ( rtS ) ; break ; } } switch ( rtAction )
{ case 0 : if ( rtAction != rtPrevAction ) { cvbxviq05o ( rtS ) ; }
gjgjhmx54t ( rtS , rtB . isvafp3kpr , & rtB . p3vgaf2auy , & rtDW .
h11e1j2gz5 , & rtP . h11e1j2gz5 ) ; srUpdateBC ( rtDW . h11e1j2gz5 .
ddfnl1zb3v ) ; break ; case 1 : if ( rtAction != rtPrevAction ) { m11vbmyfcy
( rtS ) ; } h2dghdnqpm ( rtS , rtB . isvafp3kpr , & rtB . p3vgaf2auy , & rtDW
. b31ukzlbiz , & rtP . b31ukzlbiz ) ; srUpdateBC ( rtDW . b31ukzlbiz .
ktphnd4lwv ) ; break ; case 2 : if ( rtAction != rtPrevAction ) { ifdky132nx
( rtS ) ; } jlq4jj2wgy ( rtS , rtB . isvafp3kpr , & rtB . p3vgaf2auy , & rtP
. mw5ylf2af1 ) ; srUpdateBC ( rtDW . mw5ylf2af1 . p5zzsmsop2 ) ; break ; case
3 : if ( rtAction != rtPrevAction ) { m5hpeeghtx ( rtS ) ; } i3mmrklbhs ( rtS
, rtB . isvafp3kpr , & rtB . p3vgaf2auy , & rtP . m0wf3m1kcq ) ; srUpdateBC (
rtDW . m0wf3m1kcq . fibqjkqnjk ) ; break ; case 4 : if ( rtAction !=
rtPrevAction ) { meo3exjmfs ( rtS ) ; } a2ydei5a12 ( rtS , rtB . isvafp3kpr ,
& rtB . p3vgaf2auy , rtP . MemorylessNonlinearity1_vsat , rtP . smoothing , &
rtP . la2ioretvo ) ; srUpdateBC ( rtDW . la2ioretvo . cejkopwbtv ) ; break ;
} fqxthp1vcy = rtB . p3vgaf2auy . re * rtB . p3vgaf2auy . re + rtB .
p3vgaf2auy . im * rtB . p3vgaf2auy . im ; rtDW . cx41hv41j3 ++ ; if ( rtDW .
cx41hv41j3 > 1U ) { rtDW . ngc1ln2x4x += fqxthp1vcy ; fqxthp1vcy = rtDW .
ngc1ln2x4x / ( real_T ) rtDW . cx41hv41j3 ; } else { if ( rtDW . cx41hv41j3
== 0U ) { rtDW . cx41hv41j3 = 1U ; } rtDW . ngc1ln2x4x = fqxthp1vcy ; }
fqxthp1vcy = 1.0 / fqxthp1vcy * rtP . Constant_Value_a523d0oiup ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . agdsuxy0ad != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . agdsuxy0ad = 0 ;
} } else if ( fqxthp1vcy < 0.0 ) { fqxthp1vcy = 0.0 ; rtDW . agdsuxy0ad = 1 ;
} rtB . jfgwhn4umm = muDoubleScalarLog10 ( fqxthp1vcy ) ; rtPrevAction = rtDW
. ng5noqhlxy ; rtAction = - 1 ; ba0ir2nkga = trunc ( rtP .
Gain_Gain_en43eij3nc * rtB . liv1jyvf4j ) ; if ( muDoubleScalarIsNaN (
ba0ir2nkga ) || muDoubleScalarIsInf ( ba0ir2nkga ) ) { ba0ir2nkga = 0.0 ; }
else { ba0ir2nkga = muDoubleScalarRem ( ba0ir2nkga , 4.294967296E+9 ) ; }
switch ( ba0ir2nkga < 0.0 ? - ( int32_T ) ( uint32_T ) - ba0ir2nkga : (
int32_T ) ( uint32_T ) ba0ir2nkga ) { case 1 : rtAction = 0 ; break ; case 2
: rtAction = 1 ; break ; case 3 : rtAction = 2 ; break ; case 4 : rtAction =
3 ; break ; case 5 : rtAction = 4 ; break ; } rtDW . ng5noqhlxy = rtAction ;
if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
la31y5n30p ( rtS ) ; break ; case 1 : fhgajuipw1 ( rtS ) ; break ; case 2 :
lfwqxgiwjp ( rtS ) ; break ; case 3 : j5vz4r204t ( rtS ) ; break ; case 4 :
ojq5cxb2na ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { cvbxviq05o ( rtS ) ; } gjgjhmx54t ( rtS , rtB .
isvafp3kpr , & rtB . hctnnyx5m3 , & rtDW . itlpj4fodu , & rtP . itlpj4fodu )
; srUpdateBC ( rtDW . itlpj4fodu . ddfnl1zb3v ) ; break ; case 1 : if (
rtAction != rtPrevAction ) { m11vbmyfcy ( rtS ) ; } h2dghdnqpm ( rtS , rtB .
isvafp3kpr , & rtB . hctnnyx5m3 , & rtDW . lgb24eydta , & rtP . lgb24eydta )
; srUpdateBC ( rtDW . lgb24eydta . ktphnd4lwv ) ; break ; case 2 : if (
rtAction != rtPrevAction ) { ifdky132nx ( rtS ) ; } jlq4jj2wgy ( rtS , rtB .
isvafp3kpr , & rtB . hctnnyx5m3 , & rtP . nupi545oen ) ; srUpdateBC ( rtDW .
nupi545oen . p5zzsmsop2 ) ; break ; case 3 : if ( rtAction != rtPrevAction )
{ m5hpeeghtx ( rtS ) ; } i3mmrklbhs ( rtS , rtB . isvafp3kpr , & rtB .
hctnnyx5m3 , & rtP . ky1gbhg5rq ) ; srUpdateBC ( rtDW . ky1gbhg5rq .
fibqjkqnjk ) ; break ; case 4 : if ( rtAction != rtPrevAction ) { meo3exjmfs
( rtS ) ; } a2ydei5a12 ( rtS , rtB . isvafp3kpr , & rtB . hctnnyx5m3 , rtP .
MemorylessS3_vsat , rtP . MemorylessS3_p , & rtP . m5sexzzsxy ) ; srUpdateBC
( rtDW . m5sexzzsxy . cejkopwbtv ) ; break ; } fqxthp1vcy = rtB . hctnnyx5m3
. re * rtB . hctnnyx5m3 . re + rtB . hctnnyx5m3 . im * rtB . hctnnyx5m3 . im
; rtDW . cqvxq0wzsw ++ ; if ( rtDW . cqvxq0wzsw > 1U ) { rtDW . kr1gfvkwbz +=
fqxthp1vcy ; fqxthp1vcy = rtDW . kr1gfvkwbz / ( real_T ) rtDW . cqvxq0wzsw ;
} else { if ( rtDW . cqvxq0wzsw == 0U ) { rtDW . cqvxq0wzsw = 1U ; } rtDW .
kr1gfvkwbz = fqxthp1vcy ; } fqxthp1vcy = 1.0 / fqxthp1vcy * rtP .
Constant_Value_n0nww2vh5c ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW .
iahe4vgmns != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW
. iahe4vgmns = 0 ; } } else if ( fqxthp1vcy < 0.0 ) { fqxthp1vcy = 0.0 ; rtDW
. iahe4vgmns = 1 ; } rtB . d5bujks5vf = muDoubleScalarLog10 ( fqxthp1vcy ) ;
rtPrevAction = rtDW . cxchwz3w2x ; rtAction = - 1 ; ba0ir2nkga = trunc ( rtP
. Gain_Gain_bqwr1ngiox * rtB . pydzara4tv ) ; if ( muDoubleScalarIsNaN (
ba0ir2nkga ) || muDoubleScalarIsInf ( ba0ir2nkga ) ) { ba0ir2nkga = 0.0 ; }
else { ba0ir2nkga = muDoubleScalarRem ( ba0ir2nkga , 4.294967296E+9 ) ; }
switch ( ba0ir2nkga < 0.0 ? - ( int32_T ) ( uint32_T ) - ba0ir2nkga : (
int32_T ) ( uint32_T ) ba0ir2nkga ) { case 1 : rtAction = 0 ; break ; case 2
: rtAction = 1 ; break ; case 3 : rtAction = 2 ; break ; case 4 : rtAction =
3 ; break ; case 5 : rtAction = 4 ; break ; } rtDW . cxchwz3w2x = rtAction ;
if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
la31y5n30p ( rtS ) ; break ; case 1 : fhgajuipw1 ( rtS ) ; break ; case 2 :
lfwqxgiwjp ( rtS ) ; break ; case 3 : j5vz4r204t ( rtS ) ; break ; case 4 :
ojq5cxb2na ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { cvbxviq05o ( rtS ) ; } gjgjhmx54t ( rtS , rtB .
isvafp3kpr , & rtB . h1jjlm1sm0 , & rtDW . oxx5igb303 , & rtP . oxx5igb303 )
; srUpdateBC ( rtDW . oxx5igb303 . ddfnl1zb3v ) ; break ; case 1 : if (
rtAction != rtPrevAction ) { m11vbmyfcy ( rtS ) ; } h2dghdnqpm ( rtS , rtB .
isvafp3kpr , & rtB . h1jjlm1sm0 , & rtDW . ohwibl0oik , & rtP . ohwibl0oik )
; srUpdateBC ( rtDW . ohwibl0oik . ktphnd4lwv ) ; break ; case 2 : if (
rtAction != rtPrevAction ) { ifdky132nx ( rtS ) ; } jlq4jj2wgy ( rtS , rtB .
isvafp3kpr , & rtB . h1jjlm1sm0 , & rtP . bxzsvnh1aw ) ; srUpdateBC ( rtDW .
bxzsvnh1aw . p5zzsmsop2 ) ; break ; case 3 : if ( rtAction != rtPrevAction )
{ m5hpeeghtx ( rtS ) ; } i3mmrklbhs ( rtS , rtB . isvafp3kpr , & rtB .
h1jjlm1sm0 , & rtP . cnoquaiecb ) ; srUpdateBC ( rtDW . cnoquaiecb .
fibqjkqnjk ) ; break ; case 4 : if ( rtAction != rtPrevAction ) { meo3exjmfs
( rtS ) ; } a2ydei5a12 ( rtS , rtB . isvafp3kpr , & rtB . h1jjlm1sm0 , rtP .
MemorylessS20_vsat , rtP . MemorylessS20_p , & rtP . g5asqdbxd2 ) ;
srUpdateBC ( rtDW . g5asqdbxd2 . cejkopwbtv ) ; break ; } fqxthp1vcy = rtB .
h1jjlm1sm0 . re * rtB . h1jjlm1sm0 . re + rtB . h1jjlm1sm0 . im * rtB .
h1jjlm1sm0 . im ; rtDW . ngu3sock5e ++ ; if ( rtDW . ngu3sock5e > 1U ) { rtDW
. o0b2xe44us += fqxthp1vcy ; fqxthp1vcy = rtDW . o0b2xe44us / ( real_T ) rtDW
. ngu3sock5e ; } else { if ( rtDW . ngu3sock5e == 0U ) { rtDW . ngu3sock5e =
1U ; } rtDW . o0b2xe44us = fqxthp1vcy ; } fqxthp1vcy = 1.0 / fqxthp1vcy * rtP
. Constant_Value_cbj5azvbu2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW .
kwitn1ejt4 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW
. kwitn1ejt4 = 0 ; } } else if ( fqxthp1vcy < 0.0 ) { fqxthp1vcy = 0.0 ; rtDW
. kwitn1ejt4 = 1 ; } rtB . ji2qyseycq = muDoubleScalarLog10 ( fqxthp1vcy ) ;
fqxthp1vcy = rtB . kiqaumkd25 . re * rtB . kiqaumkd25 . re + rtB . kiqaumkd25
. im * rtB . kiqaumkd25 . im ; rtDW . hvueaarh1x ++ ; if ( rtDW . hvueaarh1x
> 1U ) { rtDW . lhdyhtvix0 += fqxthp1vcy ; fqxthp1vcy = rtDW . lhdyhtvix0 / (
real_T ) rtDW . hvueaarh1x ; } else { if ( rtDW . hvueaarh1x == 0U ) { rtDW .
hvueaarh1x = 1U ; } rtDW . lhdyhtvix0 = fqxthp1vcy ; } fqxthp1vcy = 1.0 /
fqxthp1vcy * rtP . Constant_Value ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
rtDW . liejrqzwm0 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; rtDW . liejrqzwm0 = 0 ; } } else if ( fqxthp1vcy < 0.0 ) { fqxthp1vcy = 0.0
; rtDW . liejrqzwm0 = 1 ; } rtB . feffd0v2lg = muDoubleScalarLog10 (
fqxthp1vcy ) ; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . isga1tvhed =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . j5nte5je4m ) * rtP .
RandomNumber_StdDev + rtP . RandomNumber_Mean ; rtDW . cjfen0irxn =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . l2kgcq0re2 ) * rtP .
RandomNumber1_StdDev + rtP . RandomNumber1_Mean ; rtDW . fau3j3pljx -- ; if (
rtDW . fau3j3pljx < 0 ) { rtDW . fau3j3pljx = 79 ; } rtDW . plgnzuu14l [ rtDW
. fau3j3pljx ] = rtB . fkot4ufw2s ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlTerminate
( void ) { } static void mr_DC2_predistortion_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_DC2_predistortion_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_DC2_predistortion_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_DC2_predistortion_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_DC2_predistortion_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_DC2_predistortion_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_DC2_predistortion_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_DC2_predistortion_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_DC2_predistortion_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_DC2_predistortion_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DC2_predistortion_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void
mr_DC2_predistortion_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_DC2_predistortion_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_DC2_predistortion_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_DC2_predistortion_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_DC2_predistortion_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_DC2_predistortion_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
rtB ) , sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 59 ] =
{ "rtDW.plgnzuu14l" , "rtDW.cmrwiwvhv2" , "rtDW.chpwd4mva5" ,
"rtDW.isga1tvhed" , "rtDW.cjfen0irxn" , "rtDW.lrtzqomyil" , "rtDW.kd4y1awxlb"
, "rtDW.lwbuog4m4q" , "rtDW.ngc1ln2x4x" , "rtDW.kr1gfvkwbz" ,
"rtDW.o0b2xe44us" , "rtDW.lhdyhtvix0" , "rtDW.cf5q1i4rqo" , "rtDW.kzbxs50x2c"
, "rtDW.fau3j3pljx" , "rtDW.nkjleonipu" , "rtDW.j5nte5je4m" ,
"rtDW.l2kgcq0re2" , "rtDW.cx41hv41j3" , "rtDW.cqvxq0wzsw" , "rtDW.ngu3sock5e"
, "rtDW.hvueaarh1x" , "rtDW.mlcl0axizw" , "rtDW.ckmkptbrit" ,
"rtDW.agdsuxy0ad" , "rtDW.ng5noqhlxy" , "rtDW.iahe4vgmns" , "rtDW.cxchwz3w2x"
, "rtDW.kwitn1ejt4" , "rtDW.liejrqzwm0" , "rtDW.ivl3pyl0kb" ,
"rtDW.m5sexzzsxy.cejkopwbtv" , "rtDW.ky1gbhg5rq.fibqjkqnjk" ,
"rtDW.nupi545oen.p5zzsmsop2" , "rtDW.lgb24eydta.ktphnd4lwv" ,
"rtDW.lgb24eydta.hagga0ljnk" , "rtDW.itlpj4fodu.ddfnl1zb3v" ,
"rtDW.itlpj4fodu.kcg44srdmp" , "rtDW.g5asqdbxd2.cejkopwbtv" ,
"rtDW.cnoquaiecb.fibqjkqnjk" , "rtDW.bxzsvnh1aw.p5zzsmsop2" ,
"rtDW.ohwibl0oik.ktphnd4lwv" , "rtDW.ohwibl0oik.hagga0ljnk" ,
"rtDW.oxx5igb303.ddfnl1zb3v" , "rtDW.oxx5igb303.kcg44srdmp" ,
"rtDW.la2ioretvo.cejkopwbtv" , "rtDW.m0wf3m1kcq.fibqjkqnjk" ,
"rtDW.mw5ylf2af1.p5zzsmsop2" , "rtDW.b31ukzlbiz.ktphnd4lwv" ,
"rtDW.b31ukzlbiz.hagga0ljnk" , "rtDW.h11e1j2gz5.ddfnl1zb3v" ,
"rtDW.h11e1j2gz5.kcg44srdmp" , "rtDW.a2ydei5a12c.cejkopwbtv" ,
"rtDW.i3mmrklbhsy.fibqjkqnjk" , "rtDW.jlq4jj2wgyy.p5zzsmsop2" ,
"rtDW.h2dghdnqpmo.ktphnd4lwv" , "rtDW.h2dghdnqpmo.hagga0ljnk" ,
"rtDW.gjgjhmx54tp.ddfnl1zb3v" , "rtDW.gjgjhmx54tp.kcg44srdmp" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 59 , rtdwDataFieldNames ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * )
& ( rtDW . plgnzuu14l ) , sizeof ( rtDW . plgnzuu14l ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * )
& ( rtDW . cmrwiwvhv2 ) , sizeof ( rtDW . cmrwiwvhv2 ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * )
& ( rtDW . chpwd4mva5 ) , sizeof ( rtDW . chpwd4mva5 ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * )
& ( rtDW . isga1tvhed ) , sizeof ( rtDW . isga1tvhed ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * )
& ( rtDW . cjfen0irxn ) , sizeof ( rtDW . cjfen0irxn ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * )
& ( rtDW . lrtzqomyil ) , sizeof ( rtDW . lrtzqomyil ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * )
& ( rtDW . kd4y1awxlb ) , sizeof ( rtDW . kd4y1awxlb ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * )
& ( rtDW . lwbuog4m4q ) , sizeof ( rtDW . lwbuog4m4q ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * )
& ( rtDW . ngc1ln2x4x ) , sizeof ( rtDW . ngc1ln2x4x ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * )
& ( rtDW . kr1gfvkwbz ) , sizeof ( rtDW . kr1gfvkwbz ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void *
) & ( rtDW . o0b2xe44us ) , sizeof ( rtDW . o0b2xe44us ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void *
) & ( rtDW . lhdyhtvix0 ) , sizeof ( rtDW . lhdyhtvix0 ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void *
) & ( rtDW . cf5q1i4rqo ) , sizeof ( rtDW . cf5q1i4rqo ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void *
) & ( rtDW . kzbxs50x2c ) , sizeof ( rtDW . kzbxs50x2c ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void *
) & ( rtDW . fau3j3pljx ) , sizeof ( rtDW . fau3j3pljx ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void *
) & ( rtDW . nkjleonipu ) , sizeof ( rtDW . nkjleonipu ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void *
) & ( rtDW . j5nte5je4m ) , sizeof ( rtDW . j5nte5je4m ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void *
) & ( rtDW . l2kgcq0re2 ) , sizeof ( rtDW . l2kgcq0re2 ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void *
) & ( rtDW . cx41hv41j3 ) , sizeof ( rtDW . cx41hv41j3 ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void *
) & ( rtDW . cqvxq0wzsw ) , sizeof ( rtDW . cqvxq0wzsw ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void *
) & ( rtDW . ngu3sock5e ) , sizeof ( rtDW . ngu3sock5e ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void *
) & ( rtDW . hvueaarh1x ) , sizeof ( rtDW . hvueaarh1x ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void *
) & ( rtDW . mlcl0axizw ) , sizeof ( rtDW . mlcl0axizw ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void *
) & ( rtDW . ckmkptbrit ) , sizeof ( rtDW . ckmkptbrit ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void *
) & ( rtDW . agdsuxy0ad ) , sizeof ( rtDW . agdsuxy0ad ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void *
) & ( rtDW . ng5noqhlxy ) , sizeof ( rtDW . ng5noqhlxy ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void *
) & ( rtDW . iahe4vgmns ) , sizeof ( rtDW . iahe4vgmns ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void *
) & ( rtDW . cxchwz3w2x ) , sizeof ( rtDW . cxchwz3w2x ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void *
) & ( rtDW . kwitn1ejt4 ) , sizeof ( rtDW . kwitn1ejt4 ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void *
) & ( rtDW . liejrqzwm0 ) , sizeof ( rtDW . liejrqzwm0 ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void *
) & ( rtDW . ivl3pyl0kb ) , sizeof ( rtDW . ivl3pyl0kb ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void *
) & ( rtDW . m5sexzzsxy . cejkopwbtv ) , sizeof ( rtDW . m5sexzzsxy .
cejkopwbtv ) ) ; mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 32
, ( const void * ) & ( rtDW . ky1gbhg5rq . fibqjkqnjk ) , sizeof ( rtDW .
ky1gbhg5rq . fibqjkqnjk ) ) ; mr_DC2_predistortion_cacheDataAsMxArray (
rtdwData , 0 , 33 , ( const void * ) & ( rtDW . nupi545oen . p5zzsmsop2 ) ,
sizeof ( rtDW . nupi545oen . p5zzsmsop2 ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void *
) & ( rtDW . lgb24eydta . ktphnd4lwv ) , sizeof ( rtDW . lgb24eydta .
ktphnd4lwv ) ) ; mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 35
, ( const void * ) & ( rtDW . lgb24eydta . hagga0ljnk ) , sizeof ( rtDW .
lgb24eydta . hagga0ljnk ) ) ; mr_DC2_predistortion_cacheDataAsMxArray (
rtdwData , 0 , 36 , ( const void * ) & ( rtDW . itlpj4fodu . ddfnl1zb3v ) ,
sizeof ( rtDW . itlpj4fodu . ddfnl1zb3v ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void *
) & ( rtDW . itlpj4fodu . kcg44srdmp ) , sizeof ( rtDW . itlpj4fodu .
kcg44srdmp ) ) ; mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 38
, ( const void * ) & ( rtDW . g5asqdbxd2 . cejkopwbtv ) , sizeof ( rtDW .
g5asqdbxd2 . cejkopwbtv ) ) ; mr_DC2_predistortion_cacheDataAsMxArray (
rtdwData , 0 , 39 , ( const void * ) & ( rtDW . cnoquaiecb . fibqjkqnjk ) ,
sizeof ( rtDW . cnoquaiecb . fibqjkqnjk ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void *
) & ( rtDW . bxzsvnh1aw . p5zzsmsop2 ) , sizeof ( rtDW . bxzsvnh1aw .
p5zzsmsop2 ) ) ; mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 41
, ( const void * ) & ( rtDW . ohwibl0oik . ktphnd4lwv ) , sizeof ( rtDW .
ohwibl0oik . ktphnd4lwv ) ) ; mr_DC2_predistortion_cacheDataAsMxArray (
rtdwData , 0 , 42 , ( const void * ) & ( rtDW . ohwibl0oik . hagga0ljnk ) ,
sizeof ( rtDW . ohwibl0oik . hagga0ljnk ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void *
) & ( rtDW . oxx5igb303 . ddfnl1zb3v ) , sizeof ( rtDW . oxx5igb303 .
ddfnl1zb3v ) ) ; mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 44
, ( const void * ) & ( rtDW . oxx5igb303 . kcg44srdmp ) , sizeof ( rtDW .
oxx5igb303 . kcg44srdmp ) ) ; mr_DC2_predistortion_cacheDataAsMxArray (
rtdwData , 0 , 45 , ( const void * ) & ( rtDW . la2ioretvo . cejkopwbtv ) ,
sizeof ( rtDW . la2ioretvo . cejkopwbtv ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void *
) & ( rtDW . m0wf3m1kcq . fibqjkqnjk ) , sizeof ( rtDW . m0wf3m1kcq .
fibqjkqnjk ) ) ; mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 47
, ( const void * ) & ( rtDW . mw5ylf2af1 . p5zzsmsop2 ) , sizeof ( rtDW .
mw5ylf2af1 . p5zzsmsop2 ) ) ; mr_DC2_predistortion_cacheDataAsMxArray (
rtdwData , 0 , 48 , ( const void * ) & ( rtDW . b31ukzlbiz . ktphnd4lwv ) ,
sizeof ( rtDW . b31ukzlbiz . ktphnd4lwv ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void *
) & ( rtDW . b31ukzlbiz . hagga0ljnk ) , sizeof ( rtDW . b31ukzlbiz .
hagga0ljnk ) ) ; mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 50
, ( const void * ) & ( rtDW . h11e1j2gz5 . ddfnl1zb3v ) , sizeof ( rtDW .
h11e1j2gz5 . ddfnl1zb3v ) ) ; mr_DC2_predistortion_cacheDataAsMxArray (
rtdwData , 0 , 51 , ( const void * ) & ( rtDW . h11e1j2gz5 . kcg44srdmp ) ,
sizeof ( rtDW . h11e1j2gz5 . kcg44srdmp ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void *
) & ( rtDW . a2ydei5a12c . cejkopwbtv ) , sizeof ( rtDW . a2ydei5a12c .
cejkopwbtv ) ) ; mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 53
, ( const void * ) & ( rtDW . i3mmrklbhsy . fibqjkqnjk ) , sizeof ( rtDW .
i3mmrklbhsy . fibqjkqnjk ) ) ; mr_DC2_predistortion_cacheDataAsMxArray (
rtdwData , 0 , 54 , ( const void * ) & ( rtDW . jlq4jj2wgyy . p5zzsmsop2 ) ,
sizeof ( rtDW . jlq4jj2wgyy . p5zzsmsop2 ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void *
) & ( rtDW . h2dghdnqpmo . ktphnd4lwv ) , sizeof ( rtDW . h2dghdnqpmo .
ktphnd4lwv ) ) ; mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 56
, ( const void * ) & ( rtDW . h2dghdnqpmo . hagga0ljnk ) , sizeof ( rtDW .
h2dghdnqpmo . hagga0ljnk ) ) ; mr_DC2_predistortion_cacheDataAsMxArray (
rtdwData , 0 , 57 , ( const void * ) & ( rtDW . gjgjhmx54tp . ddfnl1zb3v ) ,
sizeof ( rtDW . gjgjhmx54tp . ddfnl1zb3v ) ) ;
mr_DC2_predistortion_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void *
) & ( rtDW . gjgjhmx54tp . kcg44srdmp ) , sizeof ( rtDW . gjgjhmx54tp .
kcg44srdmp ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return
ssDW ; } void mr_DC2_predistortion_SetDWork ( const mxArray * ssDW ) { ( void
) ssDW ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtB ) ,
ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
plgnzuu14l ) , rtdwData , 0 , 0 , sizeof ( rtDW . plgnzuu14l ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cmrwiwvhv2 ) , rtdwData , 0 , 1 , sizeof ( rtDW . cmrwiwvhv2 ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
chpwd4mva5 ) , rtdwData , 0 , 2 , sizeof ( rtDW . chpwd4mva5 ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
isga1tvhed ) , rtdwData , 0 , 3 , sizeof ( rtDW . isga1tvhed ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cjfen0irxn ) , rtdwData , 0 , 4 , sizeof ( rtDW . cjfen0irxn ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lrtzqomyil ) , rtdwData , 0 , 5 , sizeof ( rtDW . lrtzqomyil ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kd4y1awxlb ) , rtdwData , 0 , 6 , sizeof ( rtDW . kd4y1awxlb ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lwbuog4m4q ) , rtdwData , 0 , 7 , sizeof ( rtDW . lwbuog4m4q ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ngc1ln2x4x ) , rtdwData , 0 , 8 , sizeof ( rtDW . ngc1ln2x4x ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kr1gfvkwbz ) , rtdwData , 0 , 9 , sizeof ( rtDW . kr1gfvkwbz ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o0b2xe44us ) , rtdwData , 0 , 10 , sizeof ( rtDW . o0b2xe44us ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lhdyhtvix0 ) , rtdwData , 0 , 11 , sizeof ( rtDW . lhdyhtvix0 ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cf5q1i4rqo ) , rtdwData , 0 , 12 , sizeof ( rtDW . cf5q1i4rqo ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kzbxs50x2c ) , rtdwData , 0 , 13 , sizeof ( rtDW . kzbxs50x2c ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fau3j3pljx ) , rtdwData , 0 , 14 , sizeof ( rtDW . fau3j3pljx ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nkjleonipu ) , rtdwData , 0 , 15 , sizeof ( rtDW . nkjleonipu ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j5nte5je4m ) , rtdwData , 0 , 16 , sizeof ( rtDW . j5nte5je4m ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
l2kgcq0re2 ) , rtdwData , 0 , 17 , sizeof ( rtDW . l2kgcq0re2 ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cx41hv41j3 ) , rtdwData , 0 , 18 , sizeof ( rtDW . cx41hv41j3 ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cqvxq0wzsw ) , rtdwData , 0 , 19 , sizeof ( rtDW . cqvxq0wzsw ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ngu3sock5e ) , rtdwData , 0 , 20 , sizeof ( rtDW . ngu3sock5e ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hvueaarh1x ) , rtdwData , 0 , 21 , sizeof ( rtDW . hvueaarh1x ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mlcl0axizw ) , rtdwData , 0 , 22 , sizeof ( rtDW . mlcl0axizw ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ckmkptbrit ) , rtdwData , 0 , 23 , sizeof ( rtDW . ckmkptbrit ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
agdsuxy0ad ) , rtdwData , 0 , 24 , sizeof ( rtDW . agdsuxy0ad ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ng5noqhlxy ) , rtdwData , 0 , 25 , sizeof ( rtDW . ng5noqhlxy ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iahe4vgmns ) , rtdwData , 0 , 26 , sizeof ( rtDW . iahe4vgmns ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cxchwz3w2x ) , rtdwData , 0 , 27 , sizeof ( rtDW . cxchwz3w2x ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kwitn1ejt4 ) , rtdwData , 0 , 28 , sizeof ( rtDW . kwitn1ejt4 ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
liejrqzwm0 ) , rtdwData , 0 , 29 , sizeof ( rtDW . liejrqzwm0 ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ivl3pyl0kb ) , rtdwData , 0 , 30 , sizeof ( rtDW . ivl3pyl0kb ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m5sexzzsxy . cejkopwbtv ) , rtdwData , 0 , 31 , sizeof ( rtDW . m5sexzzsxy .
cejkopwbtv ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & (
rtDW . ky1gbhg5rq . fibqjkqnjk ) , rtdwData , 0 , 32 , sizeof ( rtDW .
ky1gbhg5rq . fibqjkqnjk ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( (
void * ) & ( rtDW . nupi545oen . p5zzsmsop2 ) , rtdwData , 0 , 33 , sizeof (
rtDW . nupi545oen . p5zzsmsop2 ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lgb24eydta . ktphnd4lwv ) , rtdwData , 0 , 34 , sizeof ( rtDW . lgb24eydta .
ktphnd4lwv ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & (
rtDW . lgb24eydta . hagga0ljnk ) , rtdwData , 0 , 35 , sizeof ( rtDW .
lgb24eydta . hagga0ljnk ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( (
void * ) & ( rtDW . itlpj4fodu . ddfnl1zb3v ) , rtdwData , 0 , 36 , sizeof (
rtDW . itlpj4fodu . ddfnl1zb3v ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
itlpj4fodu . kcg44srdmp ) , rtdwData , 0 , 37 , sizeof ( rtDW . itlpj4fodu .
kcg44srdmp ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & (
rtDW . g5asqdbxd2 . cejkopwbtv ) , rtdwData , 0 , 38 , sizeof ( rtDW .
g5asqdbxd2 . cejkopwbtv ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( (
void * ) & ( rtDW . cnoquaiecb . fibqjkqnjk ) , rtdwData , 0 , 39 , sizeof (
rtDW . cnoquaiecb . fibqjkqnjk ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bxzsvnh1aw . p5zzsmsop2 ) , rtdwData , 0 , 40 , sizeof ( rtDW . bxzsvnh1aw .
p5zzsmsop2 ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & (
rtDW . ohwibl0oik . ktphnd4lwv ) , rtdwData , 0 , 41 , sizeof ( rtDW .
ohwibl0oik . ktphnd4lwv ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( (
void * ) & ( rtDW . ohwibl0oik . hagga0ljnk ) , rtdwData , 0 , 42 , sizeof (
rtDW . ohwibl0oik . hagga0ljnk ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oxx5igb303 . ddfnl1zb3v ) , rtdwData , 0 , 43 , sizeof ( rtDW . oxx5igb303 .
ddfnl1zb3v ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & (
rtDW . oxx5igb303 . kcg44srdmp ) , rtdwData , 0 , 44 , sizeof ( rtDW .
oxx5igb303 . kcg44srdmp ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( (
void * ) & ( rtDW . la2ioretvo . cejkopwbtv ) , rtdwData , 0 , 45 , sizeof (
rtDW . la2ioretvo . cejkopwbtv ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m0wf3m1kcq . fibqjkqnjk ) , rtdwData , 0 , 46 , sizeof ( rtDW . m0wf3m1kcq .
fibqjkqnjk ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & (
rtDW . mw5ylf2af1 . p5zzsmsop2 ) , rtdwData , 0 , 47 , sizeof ( rtDW .
mw5ylf2af1 . p5zzsmsop2 ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( (
void * ) & ( rtDW . b31ukzlbiz . ktphnd4lwv ) , rtdwData , 0 , 48 , sizeof (
rtDW . b31ukzlbiz . ktphnd4lwv ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b31ukzlbiz . hagga0ljnk ) , rtdwData , 0 , 49 , sizeof ( rtDW . b31ukzlbiz .
hagga0ljnk ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & (
rtDW . h11e1j2gz5 . ddfnl1zb3v ) , rtdwData , 0 , 50 , sizeof ( rtDW .
h11e1j2gz5 . ddfnl1zb3v ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( (
void * ) & ( rtDW . h11e1j2gz5 . kcg44srdmp ) , rtdwData , 0 , 51 , sizeof (
rtDW . h11e1j2gz5 . kcg44srdmp ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a2ydei5a12c . cejkopwbtv ) , rtdwData , 0 , 52 , sizeof ( rtDW . a2ydei5a12c
. cejkopwbtv ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) &
( rtDW . i3mmrklbhsy . fibqjkqnjk ) , rtdwData , 0 , 53 , sizeof ( rtDW .
i3mmrklbhsy . fibqjkqnjk ) ) ; mr_DC2_predistortion_restoreDataFromMxArray (
( void * ) & ( rtDW . jlq4jj2wgyy . p5zzsmsop2 ) , rtdwData , 0 , 54 , sizeof
( rtDW . jlq4jj2wgyy . p5zzsmsop2 ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h2dghdnqpmo . ktphnd4lwv ) , rtdwData , 0 , 55 , sizeof ( rtDW . h2dghdnqpmo
. ktphnd4lwv ) ) ; mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) &
( rtDW . h2dghdnqpmo . hagga0ljnk ) , rtdwData , 0 , 56 , sizeof ( rtDW .
h2dghdnqpmo . hagga0ljnk ) ) ; mr_DC2_predistortion_restoreDataFromMxArray (
( void * ) & ( rtDW . gjgjhmx54tp . ddfnl1zb3v ) , rtdwData , 0 , 57 , sizeof
( rtDW . gjgjhmx54tp . ddfnl1zb3v ) ) ;
mr_DC2_predistortion_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gjgjhmx54tp . kcg44srdmp ) , rtdwData , 0 , 58 , sizeof ( rtDW . gjgjhmx54tp
. kcg44srdmp ) ) ; } } mxArray *
mr_DC2_predistortion_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 1 ] = { "S-Function_sdspupfir2" , } ; static const char *
blockPath [ 1 ] = {
"DC2_predistortion/input signal/Raised Cosine Transmit Filter/FIR Interpolation"
, } ; static const int reason [ 1 ] = { 4 , } ; for ( subs [ 0 ] = 0 ; subs [
0 ] < 1 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 179 ) ;
ssSetNumBlockIO ( rtS , 17 ) ; ssSetNumBlockParams ( rtS , 888 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.000125 ) ; ssSetSampleTime ( rtS , 2 , 0.001 )
; ssSetOffsetTime ( rtS , 0 , 1.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 4214834857U ) ; ssSetChecksumVal ( rtS , 1 ,
3103436890U ) ; ssSetChecksumVal ( rtS , 2 , 27036291U ) ; ssSetChecksumVal (
rtS , 3 , 4290645429U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork
) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
DC2_predistortion_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "DC2_predistortion" ) ;
ssSetPath ( rtS , "DC2_predistortion" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 60.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 80 , 1
} ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 80 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_INT32 } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 1 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "TapDelayBuff" , "TapDelayIndex"
} ; static const char_T * rt_LoggedStateBlockNames [ ] = {
 "DC2_predistortion/input signal/Raised Cosine\nTransmit Filter/FIR\nInterpolation"
,
 "DC2_predistortion/input signal/Raised Cosine\nTransmit Filter/FIR\nInterpolation"
} ; static const char_T * rt_LoggedStateNames [ ] = { "TapDelayBuff" ,
"TapDelayIndex" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0
} ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 ,
SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList
[ ] = { 0 , 14 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 2 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 2 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) rtDW . plgnzuu14l ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . fau3j3pljx ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetStepSize ( rtS , 0.000125 ) ; ssSetMinStepSize (
rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError (
rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.000125 ) ; ssSetSolverMaxOrder ( rtS ,
- 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL
) ) ; ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
4214834857U ) ; ssSetChecksumVal ( rtS , 1 , 3103436890U ) ; ssSetChecksumVal
( rtS , 2 , 27036291U ) ; ssSetChecksumVal ( rtS , 3 , 4290645429U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 23 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = ( sysRanDType * ) & rtDW . i3mmrklbhsy .
fibqjkqnjk ; systemRan [ 3 ] = ( sysRanDType * ) & rtDW . a2ydei5a12c .
cejkopwbtv ; systemRan [ 4 ] = ( sysRanDType * ) & rtDW . jlq4jj2wgyy .
p5zzsmsop2 ; systemRan [ 5 ] = ( sysRanDType * ) & rtDW . gjgjhmx54tp .
ddfnl1zb3v ; systemRan [ 6 ] = ( sysRanDType * ) & rtDW . h2dghdnqpmo .
ktphnd4lwv ; systemRan [ 7 ] = ( sysRanDType * ) & rtDW . m0wf3m1kcq .
fibqjkqnjk ; systemRan [ 8 ] = ( sysRanDType * ) & rtDW . la2ioretvo .
cejkopwbtv ; systemRan [ 9 ] = ( sysRanDType * ) & rtDW . mw5ylf2af1 .
p5zzsmsop2 ; systemRan [ 10 ] = ( sysRanDType * ) & rtDW . h11e1j2gz5 .
ddfnl1zb3v ; systemRan [ 11 ] = ( sysRanDType * ) & rtDW . b31ukzlbiz .
ktphnd4lwv ; systemRan [ 12 ] = ( sysRanDType * ) & rtDW . cnoquaiecb .
fibqjkqnjk ; systemRan [ 13 ] = ( sysRanDType * ) & rtDW . g5asqdbxd2 .
cejkopwbtv ; systemRan [ 14 ] = ( sysRanDType * ) & rtDW . bxzsvnh1aw .
p5zzsmsop2 ; systemRan [ 15 ] = ( sysRanDType * ) & rtDW . oxx5igb303 .
ddfnl1zb3v ; systemRan [ 16 ] = ( sysRanDType * ) & rtDW . ohwibl0oik .
ktphnd4lwv ; systemRan [ 17 ] = ( sysRanDType * ) & rtDW . ky1gbhg5rq .
fibqjkqnjk ; systemRan [ 18 ] = ( sysRanDType * ) & rtDW . m5sexzzsxy .
cejkopwbtv ; systemRan [ 19 ] = ( sysRanDType * ) & rtDW . nupi545oen .
p5zzsmsop2 ; systemRan [ 20 ] = ( sysRanDType * ) & rtDW . itlpj4fodu .
ddfnl1zb3v ; systemRan [ 21 ] = ( sysRanDType * ) & rtDW . lgb24eydta .
ktphnd4lwv ; systemRan [ 22 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_DC2_predistortion_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_DC2_predistortion_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_DC2_predistortion_SetDWork ) ; rtP .
lgb24eydta . ClipinputpowertoAMPMupperlimit_UpperSat = rtInf ; rtP .
itlpj4fodu . ClipinputpowertoAMPMupperlimit_UpperSat = rtInf ; rtP .
ohwibl0oik . ClipinputpowertoAMPMupperlimit_UpperSat = rtInf ; rtP .
oxx5igb303 . ClipinputpowertoAMPMupperlimit_UpperSat = rtInf ; rtP .
b31ukzlbiz . ClipinputpowertoAMPMupperlimit_UpperSat = rtInf ; rtP .
h11e1j2gz5 . ClipinputpowertoAMPMupperlimit_UpperSat = rtInf ; rtP .
h2dghdnqpmo . ClipinputpowertoAMPMupperlimit_UpperSat = rtInf ; rtP .
gjgjhmx54tp . ClipinputpowertoAMPMupperlimit_UpperSat = rtInf ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
