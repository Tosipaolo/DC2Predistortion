#ifndef RTW_HEADER_DC2_predistortion_private_h_
#define RTW_HEADER_DC2_predistortion_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "DC2_predistortion.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern real_T rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern real_T
rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern void cvbxviq05o (
SimStruct * rtS_i ) ; extern void fdxrj50qov ( bxzllg25xj * localDW ) ;
extern void la31y5n30p ( SimStruct * rtS_e ) ; extern void gjgjhmx54t (
SimStruct * rtS_m , creal_T d12pdo3l3f , creal_T * okrwbmhfvv , bxzllg25xj *
localDW , nsr5johinx * localP ) ; extern void m11vbmyfcy ( SimStruct * rtS_g
) ; extern void e1b24d0law ( f1h3lvtwzq * localDW ) ; extern void fhgajuipw1
( SimStruct * rtS_e ) ; extern void h2dghdnqpm ( SimStruct * rtS_p , creal_T
agm3srflil , creal_T * mun343lur4 , f1h3lvtwzq * localDW , kkemggmfhk *
localP ) ; extern void ifdky132nx ( SimStruct * rtS_f ) ; extern void
lfwqxgiwjp ( SimStruct * rtS_j ) ; extern void jlq4jj2wgy ( SimStruct * rtS_m
, creal_T nttyuwoost , creal_T * fq2w1cjt5r , noy0gteuwf * localP ) ; extern
void m5hpeeghtx ( SimStruct * rtS_k ) ; extern void j5vz4r204t ( SimStruct *
rtS_c ) ; extern void i3mmrklbhs ( SimStruct * rtS_c , creal_T m1adh3qas0 ,
creal_T * boorkizcyu , fcqgn3ua1e * localP ) ; extern void meo3exjmfs (
SimStruct * rtS_p ) ; extern void ojq5cxb2na ( SimStruct * rtS_b ) ; extern
void a2ydei5a12 ( SimStruct * rtS_c , creal_T aodheop0dz , creal_T *
mi4xbtbx35 , real_T rtp_vsat , real_T rtp_p , lazhyygqy2 * localP ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
