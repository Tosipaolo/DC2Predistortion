#ifndef RTW_HEADER_DC2_predistortion_h_
#define RTW_HEADER_DC2_predistortion_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef DC2_predistortion_COMMON_INCLUDES_
#define DC2_predistortion_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "DC2_predistortion_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#define MODEL_NAME DC2_predistortion
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (17) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int8_T ddfnl1zb3v ; int8_T kcg44srdmp ; } bxzllg25xj ;
typedef struct { int8_T ktphnd4lwv ; int8_T hagga0ljnk ; } f1h3lvtwzq ;
typedef struct { int8_T p5zzsmsop2 ; } mbmpm0ueqk ; typedef struct { int8_T
fibqjkqnjk ; } o4kjkprlka ; typedef struct { int8_T cejkopwbtv ; } pt2mjolqqw
; typedef struct { creal_T kymkdfxsdf [ 21 ] ; creal_T fkot4ufw2s ; creal_T
izmnfo20bh ; creal_T isvafp3kpr ; creal_T kiqaumkd25 ; creal_T p3vgaf2auy ;
creal_T hctnnyx5m3 ; creal_T h1jjlm1sm0 ; creal_T aoricz1svq ; real_T
fwlyf33y4r ; real_T g3h0ozjzik ; real_T jfgwhn4umm ; real_T liv1jyvf4j ;
real_T d5bujks5vf ; real_T pydzara4tv ; real_T ji2qyseycq ; real_T feffd0v2lg
; } B ; typedef struct { creal_T plgnzuu14l [ 80 ] ; creal_T cmrwiwvhv2 [ 16
] ; creal_T chpwd4mva5 [ 21 ] ; real_T isga1tvhed ; real_T cjfen0irxn ;
real_T lrtzqomyil [ 648 ] ; real_T kd4y1awxlb [ 1296 ] ; real_T lwbuog4m4q [
1296 ] ; real_T ngc1ln2x4x ; real_T kr1gfvkwbz ; real_T o0b2xe44us ; real_T
lhdyhtvix0 ; real_T cf5q1i4rqo ; real_T kzbxs50x2c ; int32_T fau3j3pljx ;
int32_T nkjleonipu ; uint32_T j5nte5je4m ; uint32_T l2kgcq0re2 ; uint32_T
cx41hv41j3 ; uint32_T cqvxq0wzsw ; uint32_T ngu3sock5e ; uint32_T hvueaarh1x
; int8_T mlcl0axizw ; int8_T ckmkptbrit ; int8_T agdsuxy0ad ; int8_T
ng5noqhlxy ; int8_T iahe4vgmns ; int8_T cxchwz3w2x ; int8_T kwitn1ejt4 ;
int8_T liejrqzwm0 ; boolean_T ivl3pyl0kb ; pt2mjolqqw m5sexzzsxy ; o4kjkprlka
ky1gbhg5rq ; mbmpm0ueqk nupi545oen ; f1h3lvtwzq lgb24eydta ; bxzllg25xj
itlpj4fodu ; pt2mjolqqw g5asqdbxd2 ; o4kjkprlka cnoquaiecb ; mbmpm0ueqk
bxzsvnh1aw ; f1h3lvtwzq ohwibl0oik ; bxzllg25xj oxx5igb303 ; pt2mjolqqw
la2ioretvo ; o4kjkprlka m0wf3m1kcq ; mbmpm0ueqk mw5ylf2af1 ; f1h3lvtwzq
b31ukzlbiz ; bxzllg25xj h11e1j2gz5 ; pt2mjolqqw a2ydei5a12c ; o4kjkprlka
i3mmrklbhsy ; mbmpm0ueqk jlq4jj2wgyy ; f1h3lvtwzq h2dghdnqpmo ; bxzllg25xj
gjgjhmx54tp ; } DW ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct nsr5johinx_ { real_T dBConversion_R ; real_T
InputGain1_Gain ; real_T SaturationI_UpperSat ; real_T SaturationI_LowerSat ;
real_T Gain_Gain ; real_T RescaleinputforAMPMlowerlimit_Gain ; real_T
Gain_Gain_ayvcaxgx4h ; real_T ClipinputpowertoAMPMupperlimit_UpperSat ;
real_T ClipinputpowertoAMPMupperlimit_LowerSat ; real_T
ConvertdBmtoradians_Gain ; real_T OutputGain1_Gain ; real_T Constant_Value ;
real_T Constant_Value_cvizqzux0h ; real_T Constant1_Value ; } ; struct
kkemggmfhk_ { real_T dBConversion_R ; real_T InputGain2_Gain ; real_T
RescaleinputforAMPMlowerlimit_Gain ; real_T Gain_Gain ; real_T
ClipinputpowertoAMPMupperlimit_UpperSat ; real_T
ClipinputpowertoAMPMupperlimit_LowerSat ; real_T ConvertdBmtoradians_Gain ;
real_T OutputGain2_Gain ; real_T Constant_Value ; real_T Constant1_Value ; }
; struct noy0gteuwf_ { real_T InputGain_Gain ; real_T Gain2_Gain ; real_T
Gain3_Gain ; real_T Gain_Gain ; real_T Gain1_Gain ; real_T OutputGain_Gain ;
real_T Constant1_Value ; real_T Constant_Value ; } ; struct fcqgn3ua1e_ {
real_T InputGain_Gain ; real_T Gain_Gain ; real_T Gain1_Gain ; real_T
Gain2_Gain ; real_T Gain_Gain_ocaarxko02 ; real_T Gain1_Gain_iobf1zjibi ;
real_T Gain2_Gain_dprcbktiwb ; real_T OutputGain_Gain ; real_T Constant_Value
; real_T Constant1_Value ; real_T Constant_Value_ppghtlfurx ; real_T
Constant1_Value_d44dmqnago ; } ; struct lazhyygqy2_ { real_T InputGain_Gain ;
real_T OutputGain_Gain ; real_T Constant2_Value ; } ; struct P_ { real_T
Gamma ; real_T K ; real_T numberofCoefficients ; real_T
predistortionCoefficients [ 21 ] ; real_T smoothing ; real_T MemorylessS3_p ;
real_T MemorylessS20_p ; real_T MemorylessNonlinearity_vsat ; real_T
MemorylessNonlinearity1_vsat ; real_T MemorylessS3_vsat ; real_T
MemorylessS20_vsat ; real_T RandomNumber_Mean ; real_T RandomNumber_StdDev ;
real_T RandomNumber_Seed ; real_T RandomNumber1_Mean ; real_T
RandomNumber1_StdDev ; real_T RandomNumber1_Seed ; real_T
FIRInterpolation_FILTER_COEFF [ 648 ] ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Gain_Gain ; real_T Merge_InitialOutput ; real_T
Gain_Gain_i2t5tgo53m ; real_T Merge_InitialOutput_g5nqz3hux4 ; real_T
Gain_Gain_en43eij3nc ; real_T Merge_InitialOutput_jvxvc1fdjr ; real_T
Gain_Gain_bqwr1ngiox ; real_T Merge_InitialOutput_ptx5e4hsry ; real_T
Constant_Value ; real_T LAMBDA_Value ; real_T Constant_Value_a523d0oiup ;
real_T Constant_Value_n0nww2vh5c ; real_T Constant_Value_cbj5azvbu2 ;
lazhyygqy2 m5sexzzsxy ; fcqgn3ua1e ky1gbhg5rq ; noy0gteuwf nupi545oen ;
kkemggmfhk lgb24eydta ; nsr5johinx itlpj4fodu ; lazhyygqy2 g5asqdbxd2 ;
fcqgn3ua1e cnoquaiecb ; noy0gteuwf bxzsvnh1aw ; kkemggmfhk ohwibl0oik ;
nsr5johinx oxx5igb303 ; lazhyygqy2 la2ioretvo ; fcqgn3ua1e m0wf3m1kcq ;
noy0gteuwf mw5ylf2af1 ; kkemggmfhk b31ukzlbiz ; nsr5johinx h11e1j2gz5 ;
lazhyygqy2 a2ydei5a12c ; fcqgn3ua1e i3mmrklbhsy ; noy0gteuwf jlq4jj2wgyy ;
kkemggmfhk h2dghdnqpmo ; nsr5johinx gjgjhmx54tp ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_DC2_predistortion_GetDWork ( ) ; extern void
mr_DC2_predistortion_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_DC2_predistortion_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DC2_predistortion_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
