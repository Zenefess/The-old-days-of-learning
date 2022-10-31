/**********************************************************
 * File: typedefs.h                     Created: Jul.2007 *
 *                                Last modified: 05/12/08 *
 *                                                        *
 * Desc: Shorthand type defines & composites, and         *
 *       constant values of common data-type sizes.       *
 *                                                        *
 * Copyright (c) David William Bull. All rights reserved. *
 **********************************************************/

#pragma once

#define _COMMON_TYPES_

#define al1  __declspec(align(2))
#define al2  __declspec(align(2))
#define al4  __declspec(align(4))
#define al8  __declspec(align(8))
#define al16 __declspec(align(16))
#define reg  register
#define vol  volatile

// Standard types...
#if !defined(_WINDEF_)
typedef unsigned char    BYTE;
typedef unsigned short   WORD;
typedef unsigned long    DWORD;
#endif
typedef unsigned __int64 QWORD;
typedef unsigned __int8  ui8;
typedef unsigned __int16 ui16;
typedef unsigned __int32 ui32;
typedef unsigned __int64 ui64;
typedef   signed __int8  si8;
typedef   signed __int16 si16;
typedef   signed __int32 si32;
typedef   signed __int64 si64;
typedef          wchar_t wchar;

// Constant types...
typedef const unsigned char    cBYTE;
typedef const unsigned short   cWORD;
typedef const unsigned long    cDWORD;
typedef const unsigned __int64 cQWORD;
typedef const unsigned __int8  cui8;
typedef const unsigned __int16 cui16;
typedef const unsigned __int32 cui32;
typedef const unsigned __int64 cui64;
typedef const   signed __int8  csi8;
typedef const   signed __int16 csi16;
typedef const   signed __int32 csi32;
typedef const   signed __int64 csi64;
typedef const          wchar_t cwchar;
typedef const          float   cfloat;
typedef const          double  cdouble;
typedef const     long double  cldouble;

// Volatile types...
typedef vol unsigned char    vBYTE;
typedef vol unsigned short   vWORD;
typedef vol unsigned long    vDWORD;
typedef vol unsigned __int64 vQWORD;
typedef vol unsigned __int8  vui8;
typedef vol unsigned __int16 vui16;
typedef vol unsigned __int32 vui32;
typedef vol unsigned __int64 vui64;
typedef vol   signed __int8  vsi8;
typedef vol   signed __int16 vsi16;
typedef vol   signed __int32 vsi32;
typedef vol   signed __int64 vsi64;
typedef vol          wchar_t vwchar;
typedef vol          float   vfloat;
typedef vol          double  vdouble;
typedef vol     long double  vldouble;

// Pointer types...
typedef          void     *ptr;
typedef          void    **aptr;
typedef unsigned char     *bptr;
typedef unsigned short    *wptr;
typedef unsigned long     *dwptr;
typedef unsigned __int64  *qwptr;
typedef unsigned __int8   *ui8ptr;
typedef unsigned __int16  *ui16ptr;
typedef unsigned __int32  *ui32ptr;
typedef unsigned __int64  *ui64ptr;
typedef   signed __int8   *si8ptr;
typedef   signed __int16  *si16ptr;
typedef   signed __int32  *si32ptr;
typedef   signed __int64  *si64ptr;
typedef          char     *chptr;
typedef          char    **stptr;
typedef          wchar_t  *wchptr;
typedef          wchar_t **wstptr;
typedef          float    *flptr;
typedef          double   *doptr;
typedef     long double   *ldptr;
#if defined(_FILE_DEFINED)
typedef          FILE     *Fptr;
#endif

// Pointer-to-constant types...
typedef const          void     *cptr;
typedef const          void    **captr;
typedef const unsigned char     *cbptr;
typedef const unsigned short    *cwptr;
typedef const unsigned long     *cdwptr;
typedef const unsigned __int64  *cqwptr;
typedef const unsigned __int8   *cui8ptr;
typedef const unsigned __int16  *cui16ptr;
typedef const unsigned __int32  *cui32ptr;
typedef const unsigned __int64  *cui64ptr;
typedef const   signed __int8   *csi8ptr;
typedef const   signed __int16  *csi16ptr;
typedef const   signed __int32  *csi32ptr;
typedef const   signed __int64  *csi64ptr;
typedef const          char     *cchptr;
typedef const          char    **cstptr;
typedef const          wchar_t  *cwchptr;
typedef const          wchar_t **cwstptr;
typedef const          float    *cflptr;
typedef const          double   *cdoptr;
typedef const     long double   *cldptr;

// Pointer-to-volatile types...
typedef vol          void     *vptr;
typedef vol          void    **vaptr;
typedef vol unsigned char     *vbptr;
typedef vol unsigned short    *vwptr;
typedef vol unsigned long     *vdwptr;
typedef vol unsigned __int64  *vqwptr;
typedef vol unsigned __int8   *vui8ptr;
typedef vol unsigned __int16  *vui16ptr;
typedef vol unsigned __int32  *vui32ptr;
typedef vol unsigned __int64  *vui64ptr;
typedef vol   signed __int8   *vsi8ptr;
typedef vol   signed __int16  *vsi16ptr;
typedef vol   signed __int32  *vsi32ptr;
typedef vol   signed __int64  *vsi64ptr;
typedef vol          char     *vchptr;
typedef vol          char    **vstptr;
typedef vol          wchar_t  *vwchptr;
typedef vol          wchar_t **vwstptr;
typedef vol          float    *vflptr;
typedef vol          double   *vdoptr;
typedef vol     long double   *vldptr;

// Constant-pointer types...
typedef void  * const ptrc;
typedef void ** const aptrc;

// Volatile-pointer types...
typedef void  * vol ptrv;
typedef void ** vol aptrv;

// 32/64-bit register size automation...
#if !defined(_AMD64_) || !defined(_IA64_)
#define _32BIT_
typedef       unsigned __int32  uint;
typedef         signed __int32  sint;
typedef const unsigned __int32  cuint;
typedef const   signed __int32  csint;
typedef vol   unsigned __int32  vuint;
typedef vol     signed __int32  vsint;
typedef vol     signed __int32 *vsintptr;
#else
#define _64BIT_
typedef       unsigned __int64 uint;
typedef         signed __int64 sint;
typedef const unsigned __int64 cuint;
typedef const   signed __int64 csint;
typedef vol   unsigned __int64 vuint;
typedef vol     signed __int64 vsint;
typedef vol     signed __int64 *vsintptr;
#endif

// Data-type sizes
al4 const int PTR_SIZE = sizeof(void *),
              REG_SIZE = sizeof(void *),
              CH_SIZE  = sizeof(char),
              WCH_SIZE = sizeof(wchar_t),
              INT_SIZE = sizeof(int),
              LNG_SIZE = sizeof(long),
              FL_SIZE  = sizeof(float),
              DBL_SIZE = sizeof(double),
              LDB_SIZE = sizeof(long double);
#if defined(_WINCON_)
al4 const int CHI_SIZE = sizeof(_CHAR_INFO);
#endif

#define vSTRUCTa16 __declspec(align(16)) volatile struct
