/* This file was automatically generated by CasADi 3.6.7.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) shark_mhe_expl_vde_forw_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[12] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s1[75] = {8, 8, 0, 8, 16, 24, 32, 40, 48, 56, 64, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s2[57] = {8, 6, 0, 8, 16, 24, 32, 40, 48, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s3[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s4[6] = {2, 1, 0, 2, 0, 1};

/* shark_mhe_expl_vde_forw:(i0[8],i1[8x8],i2[8x6],i3[6],i4[2])->(o0[8],o1[8x8],o2[8x6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][3] : 0;
  a1=arg[0]? arg[0][2] : 0;
  a2=cos(a1);
  a3=(a0*a2);
  a4=arg[0]? arg[0][4] : 0;
  a5=sin(a1);
  a6=(a4*a5);
  a3=(a3-a6);
  a6=arg[3]? arg[3][0] : 0;
  a3=(a3+a6);
  if (res[0]!=0) res[0][0]=a3;
  a3=sin(a1);
  a6=(a0*a3);
  a7=cos(a1);
  a8=(a4*a7);
  a6=(a6+a8);
  a8=arg[3]? arg[3][1] : 0;
  a6=(a6+a8);
  if (res[0]!=0) res[0][1]=a6;
  a6=arg[0]? arg[0][5] : 0;
  a8=arg[3]? arg[3][2] : 0;
  a8=(a6+a8);
  if (res[0]!=0) res[0][2]=a8;
  a8=arg[4]? arg[4][0] : 0;
  a9=arg[4]? arg[4][1] : 0;
  a10=(a8+a9);
  a11=55.;
  a12=(a11*a6);
  a13=(a12*a4);
  a10=(a10+a13);
  a13=8.2500000000000000e+01;
  a14=(a13*a6);
  a15=(a14*a4);
  a10=(a10+a15);
  a15=arg[0]? arg[0][7] : 0;
  a16=(a15*a0);
  a10=(a10+a16);
  a16=arg[0]? arg[0][6] : 0;
  a17=(a11+a16);
  a10=(a10/a17);
  a18=arg[3]? arg[3][3] : 0;
  a18=(a10+a18);
  if (res[0]!=0) res[0][3]=a18;
  a18=-1.6250000000000000e+02;
  a19=(a18*a4);
  a20=(a11*a6);
  a21=(a20*a0);
  a22=(a16*a6);
  a23=(a22*a0);
  a21=(a21+a23);
  a19=(a19-a21);
  a21=1.3750000000000000e+02;
  a19=(a19/a21);
  a21=arg[3]? arg[3][4] : 0;
  a19=(a19+a21);
  if (res[0]!=0) res[0][4]=a19;
  a19=(a16*a0);
  a21=(a19*a4);
  a23=-3.9500000000000002e-01;
  a23=(a23*a8);
  a8=3.9500000000000002e-01;
  a8=(a8*a9);
  a23=(a23+a8);
  a8=(a13*a0);
  a9=(a8*a4);
  a23=(a23+a9);
  a21=(a21-a23);
  a23=-4.2649999999999999e+01;
  a9=(a23*a6);
  a21=(a21+a9);
  a9=4.0770000000000003e+01;
  a21=(a21/a9);
  a9=arg[3]? arg[3][5] : 0;
  a21=(a21+a9);
  if (res[0]!=0) res[0][5]=a21;
  a21=0.;
  if (res[0]!=0) res[0][6]=a21;
  if (res[0]!=0) res[0][7]=a21;
  a9=arg[1]? arg[1][3] : 0;
  a24=(a2*a9);
  a25=sin(a1);
  a26=arg[1]? arg[1][2] : 0;
  a27=(a25*a26);
  a27=(a0*a27);
  a24=(a24-a27);
  a27=arg[1]? arg[1][4] : 0;
  a28=(a5*a27);
  a29=cos(a1);
  a30=(a29*a26);
  a30=(a4*a30);
  a28=(a28+a30);
  a24=(a24-a28);
  if (res[1]!=0) res[1][0]=a24;
  a24=(a3*a9);
  a28=cos(a1);
  a30=(a28*a26);
  a30=(a0*a30);
  a24=(a24+a30);
  a30=(a7*a27);
  a31=sin(a1);
  a26=(a31*a26);
  a26=(a4*a26);
  a30=(a30-a26);
  a24=(a24+a30);
  if (res[1]!=0) res[1][1]=a24;
  a24=arg[1]? arg[1][5] : 0;
  if (res[1]!=0) res[1][2]=a24;
  a30=(a11*a24);
  a30=(a4*a30);
  a26=(a12*a27);
  a30=(a30+a26);
  a26=(a13*a24);
  a26=(a4*a26);
  a32=(a14*a27);
  a26=(a26+a32);
  a30=(a30+a26);
  a26=arg[1]? arg[1][7] : 0;
  a26=(a0*a26);
  a32=(a15*a9);
  a26=(a26+a32);
  a30=(a30+a26);
  a30=(a30/a17);
  a26=(a10/a17);
  a32=arg[1]? arg[1][6] : 0;
  a33=(a26*a32);
  a30=(a30-a33);
  if (res[1]!=0) res[1][3]=a30;
  a30=7.2727272727272727e-03;
  a33=(a18*a27);
  a34=(a11*a24);
  a34=(a0*a34);
  a35=(a20*a9);
  a34=(a34+a35);
  a35=(a6*a32);
  a36=(a16*a24);
  a35=(a35+a36);
  a35=(a0*a35);
  a36=(a22*a9);
  a35=(a35+a36);
  a34=(a34+a35);
  a33=(a33-a34);
  a33=(a30*a33);
  if (res[1]!=0) res[1][4]=a33;
  a33=2.4527839097375520e-02;
  a32=(a0*a32);
  a34=(a16*a9);
  a32=(a32+a34);
  a32=(a4*a32);
  a34=(a19*a27);
  a32=(a32+a34);
  a9=(a13*a9);
  a9=(a4*a9);
  a27=(a8*a27);
  a9=(a9+a27);
  a32=(a32-a9);
  a24=(a23*a24);
  a32=(a32+a24);
  a32=(a33*a32);
  if (res[1]!=0) res[1][5]=a32;
  if (res[1]!=0) res[1][6]=a21;
  if (res[1]!=0) res[1][7]=a21;
  a32=arg[1]? arg[1][11] : 0;
  a24=(a2*a32);
  a9=arg[1]? arg[1][10] : 0;
  a27=(a25*a9);
  a27=(a0*a27);
  a24=(a24-a27);
  a27=arg[1]? arg[1][12] : 0;
  a34=(a5*a27);
  a35=(a29*a9);
  a35=(a4*a35);
  a34=(a34+a35);
  a24=(a24-a34);
  if (res[1]!=0) res[1][8]=a24;
  a24=(a3*a32);
  a34=(a28*a9);
  a34=(a0*a34);
  a24=(a24+a34);
  a34=(a7*a27);
  a9=(a31*a9);
  a9=(a4*a9);
  a34=(a34-a9);
  a24=(a24+a34);
  if (res[1]!=0) res[1][9]=a24;
  a24=arg[1]? arg[1][13] : 0;
  if (res[1]!=0) res[1][10]=a24;
  a34=(a11*a24);
  a34=(a4*a34);
  a9=(a12*a27);
  a34=(a34+a9);
  a9=(a13*a24);
  a9=(a4*a9);
  a35=(a14*a27);
  a9=(a9+a35);
  a34=(a34+a9);
  a9=arg[1]? arg[1][15] : 0;
  a9=(a0*a9);
  a35=(a15*a32);
  a9=(a9+a35);
  a34=(a34+a9);
  a34=(a34/a17);
  a9=arg[1]? arg[1][14] : 0;
  a35=(a26*a9);
  a34=(a34-a35);
  if (res[1]!=0) res[1][11]=a34;
  a34=(a18*a27);
  a35=(a11*a24);
  a35=(a0*a35);
  a36=(a20*a32);
  a35=(a35+a36);
  a36=(a6*a9);
  a37=(a16*a24);
  a36=(a36+a37);
  a36=(a0*a36);
  a37=(a22*a32);
  a36=(a36+a37);
  a35=(a35+a36);
  a34=(a34-a35);
  a34=(a30*a34);
  if (res[1]!=0) res[1][12]=a34;
  a9=(a0*a9);
  a34=(a16*a32);
  a9=(a9+a34);
  a9=(a4*a9);
  a34=(a19*a27);
  a9=(a9+a34);
  a32=(a13*a32);
  a32=(a4*a32);
  a27=(a8*a27);
  a32=(a32+a27);
  a9=(a9-a32);
  a24=(a23*a24);
  a9=(a9+a24);
  a9=(a33*a9);
  if (res[1]!=0) res[1][13]=a9;
  if (res[1]!=0) res[1][14]=a21;
  if (res[1]!=0) res[1][15]=a21;
  a9=arg[1]? arg[1][19] : 0;
  a24=(a2*a9);
  a32=arg[1]? arg[1][18] : 0;
  a27=(a25*a32);
  a27=(a0*a27);
  a24=(a24-a27);
  a27=arg[1]? arg[1][20] : 0;
  a34=(a5*a27);
  a35=(a29*a32);
  a35=(a4*a35);
  a34=(a34+a35);
  a24=(a24-a34);
  if (res[1]!=0) res[1][16]=a24;
  a24=(a3*a9);
  a34=(a28*a32);
  a34=(a0*a34);
  a24=(a24+a34);
  a34=(a7*a27);
  a32=(a31*a32);
  a32=(a4*a32);
  a34=(a34-a32);
  a24=(a24+a34);
  if (res[1]!=0) res[1][17]=a24;
  a24=arg[1]? arg[1][21] : 0;
  if (res[1]!=0) res[1][18]=a24;
  a34=(a11*a24);
  a34=(a4*a34);
  a32=(a12*a27);
  a34=(a34+a32);
  a32=(a13*a24);
  a32=(a4*a32);
  a35=(a14*a27);
  a32=(a32+a35);
  a34=(a34+a32);
  a32=arg[1]? arg[1][23] : 0;
  a32=(a0*a32);
  a35=(a15*a9);
  a32=(a32+a35);
  a34=(a34+a32);
  a34=(a34/a17);
  a32=arg[1]? arg[1][22] : 0;
  a35=(a26*a32);
  a34=(a34-a35);
  if (res[1]!=0) res[1][19]=a34;
  a34=(a18*a27);
  a35=(a11*a24);
  a35=(a0*a35);
  a36=(a20*a9);
  a35=(a35+a36);
  a36=(a6*a32);
  a37=(a16*a24);
  a36=(a36+a37);
  a36=(a0*a36);
  a37=(a22*a9);
  a36=(a36+a37);
  a35=(a35+a36);
  a34=(a34-a35);
  a34=(a30*a34);
  if (res[1]!=0) res[1][20]=a34;
  a32=(a0*a32);
  a34=(a16*a9);
  a32=(a32+a34);
  a32=(a4*a32);
  a34=(a19*a27);
  a32=(a32+a34);
  a9=(a13*a9);
  a9=(a4*a9);
  a27=(a8*a27);
  a9=(a9+a27);
  a32=(a32-a9);
  a24=(a23*a24);
  a32=(a32+a24);
  a32=(a33*a32);
  if (res[1]!=0) res[1][21]=a32;
  if (res[1]!=0) res[1][22]=a21;
  if (res[1]!=0) res[1][23]=a21;
  a32=arg[1]? arg[1][27] : 0;
  a24=(a2*a32);
  a9=arg[1]? arg[1][26] : 0;
  a27=(a25*a9);
  a27=(a0*a27);
  a24=(a24-a27);
  a27=arg[1]? arg[1][28] : 0;
  a34=(a5*a27);
  a35=(a29*a9);
  a35=(a4*a35);
  a34=(a34+a35);
  a24=(a24-a34);
  if (res[1]!=0) res[1][24]=a24;
  a24=(a3*a32);
  a34=(a28*a9);
  a34=(a0*a34);
  a24=(a24+a34);
  a34=(a7*a27);
  a9=(a31*a9);
  a9=(a4*a9);
  a34=(a34-a9);
  a24=(a24+a34);
  if (res[1]!=0) res[1][25]=a24;
  a24=arg[1]? arg[1][29] : 0;
  if (res[1]!=0) res[1][26]=a24;
  a34=(a11*a24);
  a34=(a4*a34);
  a9=(a12*a27);
  a34=(a34+a9);
  a9=(a13*a24);
  a9=(a4*a9);
  a35=(a14*a27);
  a9=(a9+a35);
  a34=(a34+a9);
  a9=arg[1]? arg[1][31] : 0;
  a9=(a0*a9);
  a35=(a15*a32);
  a9=(a9+a35);
  a34=(a34+a9);
  a34=(a34/a17);
  a9=arg[1]? arg[1][30] : 0;
  a35=(a26*a9);
  a34=(a34-a35);
  if (res[1]!=0) res[1][27]=a34;
  a34=(a18*a27);
  a35=(a11*a24);
  a35=(a0*a35);
  a36=(a20*a32);
  a35=(a35+a36);
  a36=(a6*a9);
  a37=(a16*a24);
  a36=(a36+a37);
  a36=(a0*a36);
  a37=(a22*a32);
  a36=(a36+a37);
  a35=(a35+a36);
  a34=(a34-a35);
  a34=(a30*a34);
  if (res[1]!=0) res[1][28]=a34;
  a9=(a0*a9);
  a34=(a16*a32);
  a9=(a9+a34);
  a9=(a4*a9);
  a34=(a19*a27);
  a9=(a9+a34);
  a32=(a13*a32);
  a32=(a4*a32);
  a27=(a8*a27);
  a32=(a32+a27);
  a9=(a9-a32);
  a24=(a23*a24);
  a9=(a9+a24);
  a9=(a33*a9);
  if (res[1]!=0) res[1][29]=a9;
  if (res[1]!=0) res[1][30]=a21;
  if (res[1]!=0) res[1][31]=a21;
  a9=arg[1]? arg[1][35] : 0;
  a24=(a2*a9);
  a32=arg[1]? arg[1][34] : 0;
  a27=(a25*a32);
  a27=(a0*a27);
  a24=(a24-a27);
  a27=arg[1]? arg[1][36] : 0;
  a34=(a5*a27);
  a35=(a29*a32);
  a35=(a4*a35);
  a34=(a34+a35);
  a24=(a24-a34);
  if (res[1]!=0) res[1][32]=a24;
  a24=(a3*a9);
  a34=(a28*a32);
  a34=(a0*a34);
  a24=(a24+a34);
  a34=(a7*a27);
  a32=(a31*a32);
  a32=(a4*a32);
  a34=(a34-a32);
  a24=(a24+a34);
  if (res[1]!=0) res[1][33]=a24;
  a24=arg[1]? arg[1][37] : 0;
  if (res[1]!=0) res[1][34]=a24;
  a34=(a11*a24);
  a34=(a4*a34);
  a32=(a12*a27);
  a34=(a34+a32);
  a32=(a13*a24);
  a32=(a4*a32);
  a35=(a14*a27);
  a32=(a32+a35);
  a34=(a34+a32);
  a32=arg[1]? arg[1][39] : 0;
  a32=(a0*a32);
  a35=(a15*a9);
  a32=(a32+a35);
  a34=(a34+a32);
  a34=(a34/a17);
  a32=arg[1]? arg[1][38] : 0;
  a35=(a26*a32);
  a34=(a34-a35);
  if (res[1]!=0) res[1][35]=a34;
  a34=(a18*a27);
  a35=(a11*a24);
  a35=(a0*a35);
  a36=(a20*a9);
  a35=(a35+a36);
  a36=(a6*a32);
  a37=(a16*a24);
  a36=(a36+a37);
  a36=(a0*a36);
  a37=(a22*a9);
  a36=(a36+a37);
  a35=(a35+a36);
  a34=(a34-a35);
  a34=(a30*a34);
  if (res[1]!=0) res[1][36]=a34;
  a32=(a0*a32);
  a34=(a16*a9);
  a32=(a32+a34);
  a32=(a4*a32);
  a34=(a19*a27);
  a32=(a32+a34);
  a9=(a13*a9);
  a9=(a4*a9);
  a27=(a8*a27);
  a9=(a9+a27);
  a32=(a32-a9);
  a24=(a23*a24);
  a32=(a32+a24);
  a32=(a33*a32);
  if (res[1]!=0) res[1][37]=a32;
  if (res[1]!=0) res[1][38]=a21;
  if (res[1]!=0) res[1][39]=a21;
  a32=arg[1]? arg[1][43] : 0;
  a24=(a2*a32);
  a9=arg[1]? arg[1][42] : 0;
  a27=(a25*a9);
  a27=(a0*a27);
  a24=(a24-a27);
  a27=arg[1]? arg[1][44] : 0;
  a34=(a5*a27);
  a35=(a29*a9);
  a35=(a4*a35);
  a34=(a34+a35);
  a24=(a24-a34);
  if (res[1]!=0) res[1][40]=a24;
  a24=(a3*a32);
  a34=(a28*a9);
  a34=(a0*a34);
  a24=(a24+a34);
  a34=(a7*a27);
  a9=(a31*a9);
  a9=(a4*a9);
  a34=(a34-a9);
  a24=(a24+a34);
  if (res[1]!=0) res[1][41]=a24;
  a24=arg[1]? arg[1][45] : 0;
  if (res[1]!=0) res[1][42]=a24;
  a34=(a11*a24);
  a34=(a4*a34);
  a9=(a12*a27);
  a34=(a34+a9);
  a9=(a13*a24);
  a9=(a4*a9);
  a35=(a14*a27);
  a9=(a9+a35);
  a34=(a34+a9);
  a9=arg[1]? arg[1][47] : 0;
  a9=(a0*a9);
  a35=(a15*a32);
  a9=(a9+a35);
  a34=(a34+a9);
  a34=(a34/a17);
  a9=arg[1]? arg[1][46] : 0;
  a35=(a26*a9);
  a34=(a34-a35);
  if (res[1]!=0) res[1][43]=a34;
  a34=(a18*a27);
  a35=(a11*a24);
  a35=(a0*a35);
  a36=(a20*a32);
  a35=(a35+a36);
  a36=(a6*a9);
  a37=(a16*a24);
  a36=(a36+a37);
  a36=(a0*a36);
  a37=(a22*a32);
  a36=(a36+a37);
  a35=(a35+a36);
  a34=(a34-a35);
  a34=(a30*a34);
  if (res[1]!=0) res[1][44]=a34;
  a9=(a0*a9);
  a34=(a16*a32);
  a9=(a9+a34);
  a9=(a4*a9);
  a34=(a19*a27);
  a9=(a9+a34);
  a32=(a13*a32);
  a32=(a4*a32);
  a27=(a8*a27);
  a32=(a32+a27);
  a9=(a9-a32);
  a24=(a23*a24);
  a9=(a9+a24);
  a9=(a33*a9);
  if (res[1]!=0) res[1][45]=a9;
  if (res[1]!=0) res[1][46]=a21;
  if (res[1]!=0) res[1][47]=a21;
  a9=arg[1]? arg[1][51] : 0;
  a24=(a2*a9);
  a32=arg[1]? arg[1][50] : 0;
  a27=(a25*a32);
  a27=(a0*a27);
  a24=(a24-a27);
  a27=arg[1]? arg[1][52] : 0;
  a34=(a5*a27);
  a35=(a29*a32);
  a35=(a4*a35);
  a34=(a34+a35);
  a24=(a24-a34);
  if (res[1]!=0) res[1][48]=a24;
  a24=(a3*a9);
  a34=(a28*a32);
  a34=(a0*a34);
  a24=(a24+a34);
  a34=(a7*a27);
  a32=(a31*a32);
  a32=(a4*a32);
  a34=(a34-a32);
  a24=(a24+a34);
  if (res[1]!=0) res[1][49]=a24;
  a24=arg[1]? arg[1][53] : 0;
  if (res[1]!=0) res[1][50]=a24;
  a34=(a11*a24);
  a34=(a4*a34);
  a32=(a12*a27);
  a34=(a34+a32);
  a32=(a13*a24);
  a32=(a4*a32);
  a35=(a14*a27);
  a32=(a32+a35);
  a34=(a34+a32);
  a32=arg[1]? arg[1][55] : 0;
  a32=(a0*a32);
  a35=(a15*a9);
  a32=(a32+a35);
  a34=(a34+a32);
  a34=(a34/a17);
  a32=arg[1]? arg[1][54] : 0;
  a35=(a26*a32);
  a34=(a34-a35);
  if (res[1]!=0) res[1][51]=a34;
  a34=(a18*a27);
  a35=(a11*a24);
  a35=(a0*a35);
  a36=(a20*a9);
  a35=(a35+a36);
  a36=(a6*a32);
  a37=(a16*a24);
  a36=(a36+a37);
  a36=(a0*a36);
  a37=(a22*a9);
  a36=(a36+a37);
  a35=(a35+a36);
  a34=(a34-a35);
  a34=(a30*a34);
  if (res[1]!=0) res[1][52]=a34;
  a32=(a0*a32);
  a34=(a16*a9);
  a32=(a32+a34);
  a32=(a4*a32);
  a34=(a19*a27);
  a32=(a32+a34);
  a9=(a13*a9);
  a9=(a4*a9);
  a27=(a8*a27);
  a9=(a9+a27);
  a32=(a32-a9);
  a24=(a23*a24);
  a32=(a32+a24);
  a32=(a33*a32);
  if (res[1]!=0) res[1][53]=a32;
  if (res[1]!=0) res[1][54]=a21;
  if (res[1]!=0) res[1][55]=a21;
  a32=arg[1]? arg[1][59] : 0;
  a24=(a2*a32);
  a9=arg[1]? arg[1][58] : 0;
  a25=(a25*a9);
  a25=(a0*a25);
  a24=(a24-a25);
  a25=arg[1]? arg[1][60] : 0;
  a27=(a5*a25);
  a29=(a29*a9);
  a29=(a4*a29);
  a27=(a27+a29);
  a24=(a24-a27);
  if (res[1]!=0) res[1][56]=a24;
  a24=(a3*a32);
  a28=(a28*a9);
  a28=(a0*a28);
  a24=(a24+a28);
  a28=(a7*a25);
  a31=(a31*a9);
  a31=(a4*a31);
  a28=(a28-a31);
  a24=(a24+a28);
  if (res[1]!=0) res[1][57]=a24;
  a24=arg[1]? arg[1][61] : 0;
  if (res[1]!=0) res[1][58]=a24;
  a28=(a11*a24);
  a28=(a4*a28);
  a31=(a12*a25);
  a28=(a28+a31);
  a31=(a13*a24);
  a31=(a4*a31);
  a9=(a14*a25);
  a31=(a31+a9);
  a28=(a28+a31);
  a31=arg[1]? arg[1][63] : 0;
  a31=(a0*a31);
  a9=(a15*a32);
  a31=(a31+a9);
  a28=(a28+a31);
  a28=(a28/a17);
  a31=arg[1]? arg[1][62] : 0;
  a26=(a26*a31);
  a28=(a28-a26);
  if (res[1]!=0) res[1][59]=a28;
  a28=(a18*a25);
  a26=(a11*a24);
  a26=(a0*a26);
  a9=(a20*a32);
  a26=(a26+a9);
  a9=(a6*a31);
  a27=(a16*a24);
  a9=(a9+a27);
  a9=(a0*a9);
  a27=(a22*a32);
  a9=(a9+a27);
  a26=(a26+a9);
  a28=(a28-a26);
  a28=(a30*a28);
  if (res[1]!=0) res[1][60]=a28;
  a31=(a0*a31);
  a28=(a16*a32);
  a31=(a31+a28);
  a31=(a4*a31);
  a28=(a19*a25);
  a31=(a31+a28);
  a32=(a13*a32);
  a32=(a4*a32);
  a25=(a8*a25);
  a32=(a32+a25);
  a31=(a31-a32);
  a24=(a23*a24);
  a31=(a31+a24);
  a31=(a33*a31);
  if (res[1]!=0) res[1][61]=a31;
  if (res[1]!=0) res[1][62]=a21;
  if (res[1]!=0) res[1][63]=a21;
  a31=1.;
  a24=arg[2]? arg[2][3] : 0;
  a32=(a2*a24);
  a25=sin(a1);
  a28=arg[2]? arg[2][2] : 0;
  a26=(a25*a28);
  a26=(a0*a26);
  a32=(a32-a26);
  a26=arg[2]? arg[2][4] : 0;
  a9=(a5*a26);
  a27=cos(a1);
  a29=(a27*a28);
  a29=(a4*a29);
  a9=(a9+a29);
  a32=(a32-a9);
  a32=(a31+a32);
  if (res[2]!=0) res[2][0]=a32;
  a32=(a3*a24);
  a9=cos(a1);
  a29=(a9*a28);
  a29=(a0*a29);
  a32=(a32+a29);
  a29=(a7*a26);
  a1=sin(a1);
  a28=(a1*a28);
  a28=(a4*a28);
  a29=(a29-a28);
  a32=(a32+a29);
  if (res[2]!=0) res[2][1]=a32;
  a32=arg[2]? arg[2][5] : 0;
  if (res[2]!=0) res[2][2]=a32;
  a29=(a11*a32);
  a29=(a4*a29);
  a28=(a12*a26);
  a29=(a29+a28);
  a28=(a13*a32);
  a28=(a4*a28);
  a34=(a14*a26);
  a28=(a28+a34);
  a29=(a29+a28);
  a28=arg[2]? arg[2][7] : 0;
  a28=(a0*a28);
  a34=(a15*a24);
  a28=(a28+a34);
  a29=(a29+a28);
  a29=(a29/a17);
  a10=(a10/a17);
  a28=arg[2]? arg[2][6] : 0;
  a34=(a10*a28);
  a29=(a29-a34);
  if (res[2]!=0) res[2][3]=a29;
  a29=(a18*a26);
  a34=(a11*a32);
  a34=(a0*a34);
  a35=(a20*a24);
  a34=(a34+a35);
  a35=(a6*a28);
  a36=(a16*a32);
  a35=(a35+a36);
  a35=(a0*a35);
  a36=(a22*a24);
  a35=(a35+a36);
  a34=(a34+a35);
  a29=(a29-a34);
  a29=(a30*a29);
  if (res[2]!=0) res[2][4]=a29;
  a28=(a0*a28);
  a29=(a16*a24);
  a28=(a28+a29);
  a28=(a4*a28);
  a29=(a19*a26);
  a28=(a28+a29);
  a24=(a13*a24);
  a24=(a4*a24);
  a26=(a8*a26);
  a24=(a24+a26);
  a28=(a28-a24);
  a32=(a23*a32);
  a28=(a28+a32);
  a28=(a33*a28);
  if (res[2]!=0) res[2][5]=a28;
  if (res[2]!=0) res[2][6]=a21;
  if (res[2]!=0) res[2][7]=a21;
  a28=arg[2]? arg[2][11] : 0;
  a32=(a2*a28);
  a24=arg[2]? arg[2][10] : 0;
  a26=(a25*a24);
  a26=(a0*a26);
  a32=(a32-a26);
  a26=arg[2]? arg[2][12] : 0;
  a29=(a5*a26);
  a34=(a27*a24);
  a34=(a4*a34);
  a29=(a29+a34);
  a32=(a32-a29);
  if (res[2]!=0) res[2][8]=a32;
  a32=(a3*a28);
  a29=(a9*a24);
  a29=(a0*a29);
  a32=(a32+a29);
  a29=(a7*a26);
  a24=(a1*a24);
  a24=(a4*a24);
  a29=(a29-a24);
  a32=(a32+a29);
  a32=(a31+a32);
  if (res[2]!=0) res[2][9]=a32;
  a32=arg[2]? arg[2][13] : 0;
  if (res[2]!=0) res[2][10]=a32;
  a29=(a11*a32);
  a29=(a4*a29);
  a24=(a12*a26);
  a29=(a29+a24);
  a24=(a13*a32);
  a24=(a4*a24);
  a34=(a14*a26);
  a24=(a24+a34);
  a29=(a29+a24);
  a24=arg[2]? arg[2][15] : 0;
  a24=(a0*a24);
  a34=(a15*a28);
  a24=(a24+a34);
  a29=(a29+a24);
  a29=(a29/a17);
  a24=arg[2]? arg[2][14] : 0;
  a34=(a10*a24);
  a29=(a29-a34);
  if (res[2]!=0) res[2][11]=a29;
  a29=(a18*a26);
  a34=(a11*a32);
  a34=(a0*a34);
  a35=(a20*a28);
  a34=(a34+a35);
  a35=(a6*a24);
  a36=(a16*a32);
  a35=(a35+a36);
  a35=(a0*a35);
  a36=(a22*a28);
  a35=(a35+a36);
  a34=(a34+a35);
  a29=(a29-a34);
  a29=(a30*a29);
  if (res[2]!=0) res[2][12]=a29;
  a24=(a0*a24);
  a29=(a16*a28);
  a24=(a24+a29);
  a24=(a4*a24);
  a29=(a19*a26);
  a24=(a24+a29);
  a28=(a13*a28);
  a28=(a4*a28);
  a26=(a8*a26);
  a28=(a28+a26);
  a24=(a24-a28);
  a32=(a23*a32);
  a24=(a24+a32);
  a24=(a33*a24);
  if (res[2]!=0) res[2][13]=a24;
  if (res[2]!=0) res[2][14]=a21;
  if (res[2]!=0) res[2][15]=a21;
  a24=arg[2]? arg[2][19] : 0;
  a32=(a2*a24);
  a28=arg[2]? arg[2][18] : 0;
  a26=(a25*a28);
  a26=(a0*a26);
  a32=(a32-a26);
  a26=arg[2]? arg[2][20] : 0;
  a29=(a5*a26);
  a34=(a27*a28);
  a34=(a4*a34);
  a29=(a29+a34);
  a32=(a32-a29);
  if (res[2]!=0) res[2][16]=a32;
  a32=(a3*a24);
  a29=(a9*a28);
  a29=(a0*a29);
  a32=(a32+a29);
  a29=(a7*a26);
  a28=(a1*a28);
  a28=(a4*a28);
  a29=(a29-a28);
  a32=(a32+a29);
  if (res[2]!=0) res[2][17]=a32;
  a32=arg[2]? arg[2][21] : 0;
  a29=(a31+a32);
  if (res[2]!=0) res[2][18]=a29;
  a29=(a11*a32);
  a29=(a4*a29);
  a28=(a12*a26);
  a29=(a29+a28);
  a28=(a13*a32);
  a28=(a4*a28);
  a34=(a14*a26);
  a28=(a28+a34);
  a29=(a29+a28);
  a28=arg[2]? arg[2][23] : 0;
  a28=(a0*a28);
  a34=(a15*a24);
  a28=(a28+a34);
  a29=(a29+a28);
  a29=(a29/a17);
  a28=arg[2]? arg[2][22] : 0;
  a34=(a10*a28);
  a29=(a29-a34);
  if (res[2]!=0) res[2][19]=a29;
  a29=(a18*a26);
  a34=(a11*a32);
  a34=(a0*a34);
  a35=(a20*a24);
  a34=(a34+a35);
  a35=(a6*a28);
  a36=(a16*a32);
  a35=(a35+a36);
  a35=(a0*a35);
  a36=(a22*a24);
  a35=(a35+a36);
  a34=(a34+a35);
  a29=(a29-a34);
  a29=(a30*a29);
  if (res[2]!=0) res[2][20]=a29;
  a28=(a0*a28);
  a29=(a16*a24);
  a28=(a28+a29);
  a28=(a4*a28);
  a29=(a19*a26);
  a28=(a28+a29);
  a24=(a13*a24);
  a24=(a4*a24);
  a26=(a8*a26);
  a24=(a24+a26);
  a28=(a28-a24);
  a32=(a23*a32);
  a28=(a28+a32);
  a28=(a33*a28);
  if (res[2]!=0) res[2][21]=a28;
  if (res[2]!=0) res[2][22]=a21;
  if (res[2]!=0) res[2][23]=a21;
  a28=arg[2]? arg[2][27] : 0;
  a32=(a2*a28);
  a24=arg[2]? arg[2][26] : 0;
  a26=(a25*a24);
  a26=(a0*a26);
  a32=(a32-a26);
  a26=arg[2]? arg[2][28] : 0;
  a29=(a5*a26);
  a34=(a27*a24);
  a34=(a4*a34);
  a29=(a29+a34);
  a32=(a32-a29);
  if (res[2]!=0) res[2][24]=a32;
  a32=(a3*a28);
  a29=(a9*a24);
  a29=(a0*a29);
  a32=(a32+a29);
  a29=(a7*a26);
  a24=(a1*a24);
  a24=(a4*a24);
  a29=(a29-a24);
  a32=(a32+a29);
  if (res[2]!=0) res[2][25]=a32;
  a32=arg[2]? arg[2][29] : 0;
  if (res[2]!=0) res[2][26]=a32;
  a29=(a11*a32);
  a29=(a4*a29);
  a24=(a12*a26);
  a29=(a29+a24);
  a24=(a13*a32);
  a24=(a4*a24);
  a34=(a14*a26);
  a24=(a24+a34);
  a29=(a29+a24);
  a24=arg[2]? arg[2][31] : 0;
  a24=(a0*a24);
  a34=(a15*a28);
  a24=(a24+a34);
  a29=(a29+a24);
  a29=(a29/a17);
  a24=arg[2]? arg[2][30] : 0;
  a34=(a10*a24);
  a29=(a29-a34);
  a29=(a31+a29);
  if (res[2]!=0) res[2][27]=a29;
  a29=(a18*a26);
  a34=(a11*a32);
  a34=(a0*a34);
  a35=(a20*a28);
  a34=(a34+a35);
  a35=(a6*a24);
  a36=(a16*a32);
  a35=(a35+a36);
  a35=(a0*a35);
  a36=(a22*a28);
  a35=(a35+a36);
  a34=(a34+a35);
  a29=(a29-a34);
  a29=(a30*a29);
  if (res[2]!=0) res[2][28]=a29;
  a24=(a0*a24);
  a29=(a16*a28);
  a24=(a24+a29);
  a24=(a4*a24);
  a29=(a19*a26);
  a24=(a24+a29);
  a28=(a13*a28);
  a28=(a4*a28);
  a26=(a8*a26);
  a28=(a28+a26);
  a24=(a24-a28);
  a32=(a23*a32);
  a24=(a24+a32);
  a24=(a33*a24);
  if (res[2]!=0) res[2][29]=a24;
  if (res[2]!=0) res[2][30]=a21;
  if (res[2]!=0) res[2][31]=a21;
  a24=arg[2]? arg[2][35] : 0;
  a32=(a2*a24);
  a28=arg[2]? arg[2][34] : 0;
  a26=(a25*a28);
  a26=(a0*a26);
  a32=(a32-a26);
  a26=arg[2]? arg[2][36] : 0;
  a29=(a5*a26);
  a34=(a27*a28);
  a34=(a4*a34);
  a29=(a29+a34);
  a32=(a32-a29);
  if (res[2]!=0) res[2][32]=a32;
  a32=(a3*a24);
  a29=(a9*a28);
  a29=(a0*a29);
  a32=(a32+a29);
  a29=(a7*a26);
  a28=(a1*a28);
  a28=(a4*a28);
  a29=(a29-a28);
  a32=(a32+a29);
  if (res[2]!=0) res[2][33]=a32;
  a32=arg[2]? arg[2][37] : 0;
  if (res[2]!=0) res[2][34]=a32;
  a29=(a11*a32);
  a29=(a4*a29);
  a28=(a12*a26);
  a29=(a29+a28);
  a28=(a13*a32);
  a28=(a4*a28);
  a34=(a14*a26);
  a28=(a28+a34);
  a29=(a29+a28);
  a28=arg[2]? arg[2][39] : 0;
  a28=(a0*a28);
  a34=(a15*a24);
  a28=(a28+a34);
  a29=(a29+a28);
  a29=(a29/a17);
  a28=arg[2]? arg[2][38] : 0;
  a34=(a10*a28);
  a29=(a29-a34);
  if (res[2]!=0) res[2][35]=a29;
  a29=(a18*a26);
  a34=(a11*a32);
  a34=(a0*a34);
  a35=(a20*a24);
  a34=(a34+a35);
  a35=(a6*a28);
  a36=(a16*a32);
  a35=(a35+a36);
  a35=(a0*a35);
  a36=(a22*a24);
  a35=(a35+a36);
  a34=(a34+a35);
  a29=(a29-a34);
  a29=(a30*a29);
  a29=(a31+a29);
  if (res[2]!=0) res[2][36]=a29;
  a28=(a0*a28);
  a29=(a16*a24);
  a28=(a28+a29);
  a28=(a4*a28);
  a29=(a19*a26);
  a28=(a28+a29);
  a24=(a13*a24);
  a24=(a4*a24);
  a26=(a8*a26);
  a24=(a24+a26);
  a28=(a28-a24);
  a32=(a23*a32);
  a28=(a28+a32);
  a28=(a33*a28);
  if (res[2]!=0) res[2][37]=a28;
  if (res[2]!=0) res[2][38]=a21;
  if (res[2]!=0) res[2][39]=a21;
  a28=arg[2]? arg[2][43] : 0;
  a2=(a2*a28);
  a32=arg[2]? arg[2][42] : 0;
  a25=(a25*a32);
  a25=(a0*a25);
  a2=(a2-a25);
  a25=arg[2]? arg[2][44] : 0;
  a5=(a5*a25);
  a27=(a27*a32);
  a27=(a4*a27);
  a5=(a5+a27);
  a2=(a2-a5);
  if (res[2]!=0) res[2][40]=a2;
  a3=(a3*a28);
  a9=(a9*a32);
  a9=(a0*a9);
  a3=(a3+a9);
  a7=(a7*a25);
  a1=(a1*a32);
  a1=(a4*a1);
  a7=(a7-a1);
  a3=(a3+a7);
  if (res[2]!=0) res[2][41]=a3;
  a3=arg[2]? arg[2][45] : 0;
  if (res[2]!=0) res[2][42]=a3;
  a7=(a11*a3);
  a7=(a4*a7);
  a12=(a12*a25);
  a7=(a7+a12);
  a12=(a13*a3);
  a12=(a4*a12);
  a14=(a14*a25);
  a12=(a12+a14);
  a7=(a7+a12);
  a12=arg[2]? arg[2][47] : 0;
  a12=(a0*a12);
  a15=(a15*a28);
  a12=(a12+a15);
  a7=(a7+a12);
  a7=(a7/a17);
  a17=arg[2]? arg[2][46] : 0;
  a10=(a10*a17);
  a7=(a7-a10);
  if (res[2]!=0) res[2][43]=a7;
  a18=(a18*a25);
  a11=(a11*a3);
  a11=(a0*a11);
  a20=(a20*a28);
  a11=(a11+a20);
  a6=(a6*a17);
  a20=(a16*a3);
  a6=(a6+a20);
  a6=(a0*a6);
  a22=(a22*a28);
  a6=(a6+a22);
  a11=(a11+a6);
  a18=(a18-a11);
  a30=(a30*a18);
  if (res[2]!=0) res[2][44]=a30;
  a0=(a0*a17);
  a16=(a16*a28);
  a0=(a0+a16);
  a0=(a4*a0);
  a19=(a19*a25);
  a0=(a0+a19);
  a13=(a13*a28);
  a4=(a4*a13);
  a8=(a8*a25);
  a4=(a4+a8);
  a0=(a0-a4);
  a23=(a23*a3);
  a0=(a0+a23);
  a33=(a33*a0);
  a31=(a31+a33);
  if (res[2]!=0) res[2][45]=a31;
  if (res[2]!=0) res[2][46]=a21;
  if (res[2]!=0) res[2][47]=a21;
  return 0;
}

CASADI_SYMBOL_EXPORT int shark_mhe_expl_vde_forw(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int shark_mhe_expl_vde_forw_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int shark_mhe_expl_vde_forw_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void shark_mhe_expl_vde_forw_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int shark_mhe_expl_vde_forw_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void shark_mhe_expl_vde_forw_release(int mem) {
}

CASADI_SYMBOL_EXPORT void shark_mhe_expl_vde_forw_incref(void) {
}

CASADI_SYMBOL_EXPORT void shark_mhe_expl_vde_forw_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int shark_mhe_expl_vde_forw_n_in(void) { return 5;}

CASADI_SYMBOL_EXPORT casadi_int shark_mhe_expl_vde_forw_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_real shark_mhe_expl_vde_forw_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* shark_mhe_expl_vde_forw_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* shark_mhe_expl_vde_forw_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* shark_mhe_expl_vde_forw_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s3;
    case 4: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* shark_mhe_expl_vde_forw_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int shark_mhe_expl_vde_forw_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 5;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT int shark_mhe_expl_vde_forw_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 5*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 3*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 0*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
