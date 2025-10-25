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

#include <stdint.h>
#include <inttypes.h>

typedef uint8_t	    u8;
typedef uint16_t    u16;
typedef uint32_t    u32;
typedef uint64_t    u64;

typedef int8_t	i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef intptr_t    intptr;
typedef uintptr_t   uintptr;
typedef intptr_t    isize;
typedef uintptr_t   usize;

#define MAX_U8 ((u8)(0xff))
#define MIN_U8 ((u8)(0x00))

#define MAX_I8 ((i8)(0x7f))
#define MIN_I8 ((i8)(0x80))

#define MAX_U16 ((u16)(0xffffu))
#define MIN_U16 ((u16)(0x0000u))

#define MAX_I16 ((u16)(0x7fff))
#define MIN_I16 ((u16)(0x8000))

#define MAX_U32 ((u32)(0xffffffffu))
#define MIN_U32 ((u32)(0x00000000u))

#define MAX_I32 ((u32)(0x7fffffff))
#define MIN_I32 ((u32)(0x80000000))

#define MAX_U64 ((u64)(0xffffffffffffffffull))
#define MIN_U64 ((u64)(0x0000000000000000ull))

#define MAX_I64 ((u64)(0x7fffffffffffffffll))
#define MIN_I64 ((u64)(0x8000000000000000ll))

#define MAX_INTPTR (sizeof(intptr) == 4 ? MAX_I32 : MAX_I64)
#define MIN_INTPTR (sizeof(intptr) == 4 ? MIN_I32 : MIN_I64)

#define MAX_UINTPTR (sizeof(uintptr) == 4 ? MAX_U32 : MAX_U64)
#define MIN_UINTPTR (sizeof(uintptr) == 4 ? MIN_U32 : MIN_U64)

#define MIN_ISIZE MIN_INTPTR
#define MAX_ISIZE MAX_INTPTR

#define MIN_USIZE MIN_UINTPTR
#define MAX_USIZE MAX_UINTPTR

#define FMT_U8	PRIu8
#define FMT_U16 PRIu16
#define FMT_U32 PRIu32
#define FMT_U64 PRIu64

#define FMT_U8o	    PRIx8
#define FMT_U16o    PRIx16
#define FMT_U32o    PRIx32
#define FMT_U64o    PRIx64

#define FMT_U8x	    PRIx8
#define FMT_U16x    PRIx16
#define FMT_U32x    PRIx32
#define FMT_U64x    PRIx64

#define FMT_U8X	    PRIX8
#define FMT_U16X    PRIX16
#define FMT_U32X    PRIX32
#define FMT_U64X    PRIX64

#define FMT_I8	PRId8
#define FMT_I16 PRId16
#define FMT_I32 PRId32
#define FMT_I64 PRId64

#define FMT_I8o	    PRIo8
#define FMT_I16o    PRIo16
#define FMT_I32o    PRIo32
#define FMT_I64o    PRIo64

#define FMT_I8x	    PRIx8
#define FMT_I16x    PRIx16
#define FMT_I32x    PRIx32
#define FMT_I64x    PRIx64

#define FMT_I8X	    PRIX8
#define FMT_I16X    PRIX16
#define FMT_I32X    PRIX32
#define FMT_I64X    PRIX64

#define FMT_UINTPTR	PRIuPTR
#define FMT_UINTPTRo	PRIoPTR
#define FMT_UINTPTRx	PRIxPTR
#define FMT_UINTPTRX	PRIXPTR

#define FMT_INTPTR	PRIiPTR
#define FMT_INTPTRo	PRIoPTR
#define FMT_INTPTRx	PRIxPTR
#define FMT_INTPTRX	PRIXPTR

#define FMT_ISIZE   FMT_INTPTR
#define FMT_ISIZEo  FMT_INTPTRo
#define FMT_ISIZEx  FMT_INTPTRx
#define FMT_ISIZEX  FMT_INTPTRX

#define FMT_USIZE   FMT_UINTPTR
#define FMT_USIZEo  FMT_UINTPTRo
#define FMT_USIZEx  FMT_UINTPTRx
#define FMT_USIZEX  FMT_UINTPTRX

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
