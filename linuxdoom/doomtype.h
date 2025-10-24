// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// DESCRIPTION:
//	Simple basic typedefs, isolated here to make it easier
//	 separating modules.
//    
//-----------------------------------------------------------------------------


#ifndef __DOOMTYPE__
#define __DOOMTYPE__

// ldoom: standard integer types

#ifndef DOOMTYPE_U8
#define DOOMTYPE_U8
#include <stdint.h>
typedef uint8_t u8;
#endif

#ifndef DOOMTYPE_U16
#define DOOMTYPE_U16
#include <stdint.h>
typedef uint16_t u16;
#endif

#ifndef DOOMTYPE_U32
#define DOOMTYPE_U32
#include <stdint.h>
typedef uint32_t u32;
#endif

#ifndef DOOMTYPE_U64
#define DOOMTYPE_U64
#include <stdint.h>
typedef uint64_t u64;
#endif

#ifndef DOOMTYPE_I8
#define DOOMTYPE_I8
#include <stdint.h>
typedef int8_t i8;
#endif

#ifndef DOOMTYPE_I16
#define DOOMTYPE_I16
#include <stdint.h>
typedef int16_t i16;
#endif

#ifndef DOOMTYPE_I32
#define DOOMTYPE_I32
#include <stdint.h>
typedef int32_t i32;
#endif

#ifndef DOOMTYPE_I64
#define DOOMTYPE_I64
#include <stdint.h>
typedef int64_t i64;
#endif

#ifndef DOOMTYPE_INTPTR
#define DOOMTYPE_INTPTR
#include <stdint.h>
typedef intptr_t intptr;
#endif

#ifndef DOOMTYPE_UINTPTR
#define DOOMTYPE_UINTPTR
#include <stdint.h>
typedef uintptr_t uintptr;
#endif

typedef u8 byte;

#include <stdbool.h>

#if defined(__cplusplus) || defined(__bool_true_false_are_defined)
typedef int boolean;
#else
typedef enum {false, true} boolean;
#endif


// Predefined with some OS.
#ifdef LINUX
#include <values.h>
#else
#define MAXCHAR		((char)0x7f)
#define MAXSHORT	((short)0x7fff)

// Max pos 32-bit int.
#define MAXINT		((int)0x7fffffff)	
#define MAXLONG		((long)0x7fffffff)
#define MINCHAR		((char)0x80)
#define MINSHORT	((short)0x8000)

// Max negative 32-bit integer.
#define MININT		((int)0x80000000)	
#define MINLONG		((long)0x80000000)
#endif




#endif
//-----------------------------------------------------------------------------
//
// $Log:$
//
//-----------------------------------------------------------------------------
