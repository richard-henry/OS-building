/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         bxparse
#define yylex           bxlex
#define yyerror         bxerror
#define yydebug         bxdebug
#define yynerrs         bxnerrs
#define yylval          bxlval
#define yychar          bxchar

/* First part of user prologue.  */
#line 5 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

#if BX_DEBUGGER

#line 86 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_BX_Y_TAB_H_INCLUDED
# define YY_BX_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int bxdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BX_TOKEN_8BH_REG = 258,        /* BX_TOKEN_8BH_REG  */
    BX_TOKEN_8BL_REG = 259,        /* BX_TOKEN_8BL_REG  */
    BX_TOKEN_16B_REG = 260,        /* BX_TOKEN_16B_REG  */
    BX_TOKEN_32B_REG = 261,        /* BX_TOKEN_32B_REG  */
    BX_TOKEN_64B_REG = 262,        /* BX_TOKEN_64B_REG  */
    BX_TOKEN_CS = 263,             /* BX_TOKEN_CS  */
    BX_TOKEN_ES = 264,             /* BX_TOKEN_ES  */
    BX_TOKEN_SS = 265,             /* BX_TOKEN_SS  */
    BX_TOKEN_DS = 266,             /* BX_TOKEN_DS  */
    BX_TOKEN_FS = 267,             /* BX_TOKEN_FS  */
    BX_TOKEN_GS = 268,             /* BX_TOKEN_GS  */
    BX_TOKEN_FLAGS = 269,          /* BX_TOKEN_FLAGS  */
    BX_TOKEN_ON = 270,             /* BX_TOKEN_ON  */
    BX_TOKEN_OFF = 271,            /* BX_TOKEN_OFF  */
    BX_TOKEN_CONTINUE = 272,       /* BX_TOKEN_CONTINUE  */
    BX_TOKEN_STEPN = 273,          /* BX_TOKEN_STEPN  */
    BX_TOKEN_STEP_OVER = 274,      /* BX_TOKEN_STEP_OVER  */
    BX_TOKEN_SET = 275,            /* BX_TOKEN_SET  */
    BX_TOKEN_DEBUGGER = 276,       /* BX_TOKEN_DEBUGGER  */
    BX_TOKEN_LIST_BREAK = 277,     /* BX_TOKEN_LIST_BREAK  */
    BX_TOKEN_VBREAKPOINT = 278,    /* BX_TOKEN_VBREAKPOINT  */
    BX_TOKEN_LBREAKPOINT = 279,    /* BX_TOKEN_LBREAKPOINT  */
    BX_TOKEN_PBREAKPOINT = 280,    /* BX_TOKEN_PBREAKPOINT  */
    BX_TOKEN_DEL_BREAKPOINT = 281, /* BX_TOKEN_DEL_BREAKPOINT  */
    BX_TOKEN_ENABLE_BREAKPOINT = 282, /* BX_TOKEN_ENABLE_BREAKPOINT  */
    BX_TOKEN_DISABLE_BREAKPOINT = 283, /* BX_TOKEN_DISABLE_BREAKPOINT  */
    BX_TOKEN_INFO = 284,           /* BX_TOKEN_INFO  */
    BX_TOKEN_QUIT = 285,           /* BX_TOKEN_QUIT  */
    BX_TOKEN_R = 286,              /* BX_TOKEN_R  */
    BX_TOKEN_REGS = 287,           /* BX_TOKEN_REGS  */
    BX_TOKEN_CPU = 288,            /* BX_TOKEN_CPU  */
    BX_TOKEN_FPU = 289,            /* BX_TOKEN_FPU  */
    BX_TOKEN_MMX = 290,            /* BX_TOKEN_MMX  */
    BX_TOKEN_SSE = 291,            /* BX_TOKEN_SSE  */
    BX_TOKEN_AVX = 292,            /* BX_TOKEN_AVX  */
    BX_TOKEN_IDT = 293,            /* BX_TOKEN_IDT  */
    BX_TOKEN_IVT = 294,            /* BX_TOKEN_IVT  */
    BX_TOKEN_GDT = 295,            /* BX_TOKEN_GDT  */
    BX_TOKEN_LDT = 296,            /* BX_TOKEN_LDT  */
    BX_TOKEN_TSS = 297,            /* BX_TOKEN_TSS  */
    BX_TOKEN_TAB = 298,            /* BX_TOKEN_TAB  */
    BX_TOKEN_ALL = 299,            /* BX_TOKEN_ALL  */
    BX_TOKEN_LINUX = 300,          /* BX_TOKEN_LINUX  */
    BX_TOKEN_DEBUG_REGS = 301,     /* BX_TOKEN_DEBUG_REGS  */
    BX_TOKEN_CONTROL_REGS = 302,   /* BX_TOKEN_CONTROL_REGS  */
    BX_TOKEN_SEGMENT_REGS = 303,   /* BX_TOKEN_SEGMENT_REGS  */
    BX_TOKEN_EXAMINE = 304,        /* BX_TOKEN_EXAMINE  */
    BX_TOKEN_XFORMAT = 305,        /* BX_TOKEN_XFORMAT  */
    BX_TOKEN_DISFORMAT = 306,      /* BX_TOKEN_DISFORMAT  */
    BX_TOKEN_RESTORE = 307,        /* BX_TOKEN_RESTORE  */
    BX_TOKEN_WRITEMEM = 308,       /* BX_TOKEN_WRITEMEM  */
    BX_TOKEN_SETPMEM = 309,        /* BX_TOKEN_SETPMEM  */
    BX_TOKEN_SYMBOLNAME = 310,     /* BX_TOKEN_SYMBOLNAME  */
    BX_TOKEN_QUERY = 311,          /* BX_TOKEN_QUERY  */
    BX_TOKEN_PENDING = 312,        /* BX_TOKEN_PENDING  */
    BX_TOKEN_TAKE = 313,           /* BX_TOKEN_TAKE  */
    BX_TOKEN_DMA = 314,            /* BX_TOKEN_DMA  */
    BX_TOKEN_IRQ = 315,            /* BX_TOKEN_IRQ  */
    BX_TOKEN_TLB = 316,            /* BX_TOKEN_TLB  */
    BX_TOKEN_HEX = 317,            /* BX_TOKEN_HEX  */
    BX_TOKEN_DISASM = 318,         /* BX_TOKEN_DISASM  */
    BX_TOKEN_INSTRUMENT = 319,     /* BX_TOKEN_INSTRUMENT  */
    BX_TOKEN_STRING = 320,         /* BX_TOKEN_STRING  */
    BX_TOKEN_STOP = 321,           /* BX_TOKEN_STOP  */
    BX_TOKEN_DOIT = 322,           /* BX_TOKEN_DOIT  */
    BX_TOKEN_CRC = 323,            /* BX_TOKEN_CRC  */
    BX_TOKEN_TRACE = 324,          /* BX_TOKEN_TRACE  */
    BX_TOKEN_TRACEREG = 325,       /* BX_TOKEN_TRACEREG  */
    BX_TOKEN_TRACEMEM = 326,       /* BX_TOKEN_TRACEMEM  */
    BX_TOKEN_SWITCH_MODE = 327,    /* BX_TOKEN_SWITCH_MODE  */
    BX_TOKEN_SIZE = 328,           /* BX_TOKEN_SIZE  */
    BX_TOKEN_PTIME = 329,          /* BX_TOKEN_PTIME  */
    BX_TOKEN_TIMEBP_ABSOLUTE = 330, /* BX_TOKEN_TIMEBP_ABSOLUTE  */
    BX_TOKEN_TIMEBP = 331,         /* BX_TOKEN_TIMEBP  */
    BX_TOKEN_MODEBP = 332,         /* BX_TOKEN_MODEBP  */
    BX_TOKEN_VMEXITBP = 333,       /* BX_TOKEN_VMEXITBP  */
    BX_TOKEN_PRINT_STACK = 334,    /* BX_TOKEN_PRINT_STACK  */
    BX_TOKEN_WATCH = 335,          /* BX_TOKEN_WATCH  */
    BX_TOKEN_UNWATCH = 336,        /* BX_TOKEN_UNWATCH  */
    BX_TOKEN_READ = 337,           /* BX_TOKEN_READ  */
    BX_TOKEN_WRITE = 338,          /* BX_TOKEN_WRITE  */
    BX_TOKEN_SHOW = 339,           /* BX_TOKEN_SHOW  */
    BX_TOKEN_LOAD_SYMBOLS = 340,   /* BX_TOKEN_LOAD_SYMBOLS  */
    BX_TOKEN_SYMBOLS = 341,        /* BX_TOKEN_SYMBOLS  */
    BX_TOKEN_LIST_SYMBOLS = 342,   /* BX_TOKEN_LIST_SYMBOLS  */
    BX_TOKEN_GLOBAL = 343,         /* BX_TOKEN_GLOBAL  */
    BX_TOKEN_WHERE = 344,          /* BX_TOKEN_WHERE  */
    BX_TOKEN_PRINT_STRING = 345,   /* BX_TOKEN_PRINT_STRING  */
    BX_TOKEN_NUMERIC = 346,        /* BX_TOKEN_NUMERIC  */
    BX_TOKEN_PAGE = 347,           /* BX_TOKEN_PAGE  */
    BX_TOKEN_HELP = 348,           /* BX_TOKEN_HELP  */
    BX_TOKEN_CALC = 349,           /* BX_TOKEN_CALC  */
    BX_TOKEN_VGA = 350,            /* BX_TOKEN_VGA  */
    BX_TOKEN_DEVICE = 351,         /* BX_TOKEN_DEVICE  */
    BX_TOKEN_COMMAND = 352,        /* BX_TOKEN_COMMAND  */
    BX_TOKEN_GENERIC = 353,        /* BX_TOKEN_GENERIC  */
    BX_TOKEN_RSHIFT = 354,         /* BX_TOKEN_RSHIFT  */
    BX_TOKEN_LSHIFT = 355,         /* BX_TOKEN_LSHIFT  */
    BX_TOKEN_REG_IP = 356,         /* BX_TOKEN_REG_IP  */
    BX_TOKEN_REG_EIP = 357,        /* BX_TOKEN_REG_EIP  */
    BX_TOKEN_REG_RIP = 358,        /* BX_TOKEN_REG_RIP  */
    NOT = 359,                     /* NOT  */
    NEG = 360,                     /* NEG  */
    INDIRECT = 361                 /* INDIRECT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BX_TOKEN_8BH_REG 258
#define BX_TOKEN_8BL_REG 259
#define BX_TOKEN_16B_REG 260
#define BX_TOKEN_32B_REG 261
#define BX_TOKEN_64B_REG 262
#define BX_TOKEN_CS 263
#define BX_TOKEN_ES 264
#define BX_TOKEN_SS 265
#define BX_TOKEN_DS 266
#define BX_TOKEN_FS 267
#define BX_TOKEN_GS 268
#define BX_TOKEN_FLAGS 269
#define BX_TOKEN_ON 270
#define BX_TOKEN_OFF 271
#define BX_TOKEN_CONTINUE 272
#define BX_TOKEN_STEPN 273
#define BX_TOKEN_STEP_OVER 274
#define BX_TOKEN_SET 275
#define BX_TOKEN_DEBUGGER 276
#define BX_TOKEN_LIST_BREAK 277
#define BX_TOKEN_VBREAKPOINT 278
#define BX_TOKEN_LBREAKPOINT 279
#define BX_TOKEN_PBREAKPOINT 280
#define BX_TOKEN_DEL_BREAKPOINT 281
#define BX_TOKEN_ENABLE_BREAKPOINT 282
#define BX_TOKEN_DISABLE_BREAKPOINT 283
#define BX_TOKEN_INFO 284
#define BX_TOKEN_QUIT 285
#define BX_TOKEN_R 286
#define BX_TOKEN_REGS 287
#define BX_TOKEN_CPU 288
#define BX_TOKEN_FPU 289
#define BX_TOKEN_MMX 290
#define BX_TOKEN_SSE 291
#define BX_TOKEN_AVX 292
#define BX_TOKEN_IDT 293
#define BX_TOKEN_IVT 294
#define BX_TOKEN_GDT 295
#define BX_TOKEN_LDT 296
#define BX_TOKEN_TSS 297
#define BX_TOKEN_TAB 298
#define BX_TOKEN_ALL 299
#define BX_TOKEN_LINUX 300
#define BX_TOKEN_DEBUG_REGS 301
#define BX_TOKEN_CONTROL_REGS 302
#define BX_TOKEN_SEGMENT_REGS 303
#define BX_TOKEN_EXAMINE 304
#define BX_TOKEN_XFORMAT 305
#define BX_TOKEN_DISFORMAT 306
#define BX_TOKEN_RESTORE 307
#define BX_TOKEN_WRITEMEM 308
#define BX_TOKEN_SETPMEM 309
#define BX_TOKEN_SYMBOLNAME 310
#define BX_TOKEN_QUERY 311
#define BX_TOKEN_PENDING 312
#define BX_TOKEN_TAKE 313
#define BX_TOKEN_DMA 314
#define BX_TOKEN_IRQ 315
#define BX_TOKEN_TLB 316
#define BX_TOKEN_HEX 317
#define BX_TOKEN_DISASM 318
#define BX_TOKEN_INSTRUMENT 319
#define BX_TOKEN_STRING 320
#define BX_TOKEN_STOP 321
#define BX_TOKEN_DOIT 322
#define BX_TOKEN_CRC 323
#define BX_TOKEN_TRACE 324
#define BX_TOKEN_TRACEREG 325
#define BX_TOKEN_TRACEMEM 326
#define BX_TOKEN_SWITCH_MODE 327
#define BX_TOKEN_SIZE 328
#define BX_TOKEN_PTIME 329
#define BX_TOKEN_TIMEBP_ABSOLUTE 330
#define BX_TOKEN_TIMEBP 331
#define BX_TOKEN_MODEBP 332
#define BX_TOKEN_VMEXITBP 333
#define BX_TOKEN_PRINT_STACK 334
#define BX_TOKEN_WATCH 335
#define BX_TOKEN_UNWATCH 336
#define BX_TOKEN_READ 337
#define BX_TOKEN_WRITE 338
#define BX_TOKEN_SHOW 339
#define BX_TOKEN_LOAD_SYMBOLS 340
#define BX_TOKEN_SYMBOLS 341
#define BX_TOKEN_LIST_SYMBOLS 342
#define BX_TOKEN_GLOBAL 343
#define BX_TOKEN_WHERE 344
#define BX_TOKEN_PRINT_STRING 345
#define BX_TOKEN_NUMERIC 346
#define BX_TOKEN_PAGE 347
#define BX_TOKEN_HELP 348
#define BX_TOKEN_CALC 349
#define BX_TOKEN_VGA 350
#define BX_TOKEN_DEVICE 351
#define BX_TOKEN_COMMAND 352
#define BX_TOKEN_GENERIC 353
#define BX_TOKEN_RSHIFT 354
#define BX_TOKEN_LSHIFT 355
#define BX_TOKEN_REG_IP 356
#define BX_TOKEN_REG_EIP 357
#define BX_TOKEN_REG_RIP 358
#define NOT 359
#define NEG 360
#define INDIRECT 361

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "parser.y"

  char    *sval;
  Bit64u   uval;
  bx_bool  bval;

#line 357 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE bxlval;

int bxparse (void);

#endif /* !YY_BX_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BX_TOKEN_8BH_REG = 3,           /* BX_TOKEN_8BH_REG  */
  YYSYMBOL_BX_TOKEN_8BL_REG = 4,           /* BX_TOKEN_8BL_REG  */
  YYSYMBOL_BX_TOKEN_16B_REG = 5,           /* BX_TOKEN_16B_REG  */
  YYSYMBOL_BX_TOKEN_32B_REG = 6,           /* BX_TOKEN_32B_REG  */
  YYSYMBOL_BX_TOKEN_64B_REG = 7,           /* BX_TOKEN_64B_REG  */
  YYSYMBOL_BX_TOKEN_CS = 8,                /* BX_TOKEN_CS  */
  YYSYMBOL_BX_TOKEN_ES = 9,                /* BX_TOKEN_ES  */
  YYSYMBOL_BX_TOKEN_SS = 10,               /* BX_TOKEN_SS  */
  YYSYMBOL_BX_TOKEN_DS = 11,               /* BX_TOKEN_DS  */
  YYSYMBOL_BX_TOKEN_FS = 12,               /* BX_TOKEN_FS  */
  YYSYMBOL_BX_TOKEN_GS = 13,               /* BX_TOKEN_GS  */
  YYSYMBOL_BX_TOKEN_FLAGS = 14,            /* BX_TOKEN_FLAGS  */
  YYSYMBOL_BX_TOKEN_ON = 15,               /* BX_TOKEN_ON  */
  YYSYMBOL_BX_TOKEN_OFF = 16,              /* BX_TOKEN_OFF  */
  YYSYMBOL_BX_TOKEN_CONTINUE = 17,         /* BX_TOKEN_CONTINUE  */
  YYSYMBOL_BX_TOKEN_STEPN = 18,            /* BX_TOKEN_STEPN  */
  YYSYMBOL_BX_TOKEN_STEP_OVER = 19,        /* BX_TOKEN_STEP_OVER  */
  YYSYMBOL_BX_TOKEN_SET = 20,              /* BX_TOKEN_SET  */
  YYSYMBOL_BX_TOKEN_DEBUGGER = 21,         /* BX_TOKEN_DEBUGGER  */
  YYSYMBOL_BX_TOKEN_LIST_BREAK = 22,       /* BX_TOKEN_LIST_BREAK  */
  YYSYMBOL_BX_TOKEN_VBREAKPOINT = 23,      /* BX_TOKEN_VBREAKPOINT  */
  YYSYMBOL_BX_TOKEN_LBREAKPOINT = 24,      /* BX_TOKEN_LBREAKPOINT  */
  YYSYMBOL_BX_TOKEN_PBREAKPOINT = 25,      /* BX_TOKEN_PBREAKPOINT  */
  YYSYMBOL_BX_TOKEN_DEL_BREAKPOINT = 26,   /* BX_TOKEN_DEL_BREAKPOINT  */
  YYSYMBOL_BX_TOKEN_ENABLE_BREAKPOINT = 27, /* BX_TOKEN_ENABLE_BREAKPOINT  */
  YYSYMBOL_BX_TOKEN_DISABLE_BREAKPOINT = 28, /* BX_TOKEN_DISABLE_BREAKPOINT  */
  YYSYMBOL_BX_TOKEN_INFO = 29,             /* BX_TOKEN_INFO  */
  YYSYMBOL_BX_TOKEN_QUIT = 30,             /* BX_TOKEN_QUIT  */
  YYSYMBOL_BX_TOKEN_R = 31,                /* BX_TOKEN_R  */
  YYSYMBOL_BX_TOKEN_REGS = 32,             /* BX_TOKEN_REGS  */
  YYSYMBOL_BX_TOKEN_CPU = 33,              /* BX_TOKEN_CPU  */
  YYSYMBOL_BX_TOKEN_FPU = 34,              /* BX_TOKEN_FPU  */
  YYSYMBOL_BX_TOKEN_MMX = 35,              /* BX_TOKEN_MMX  */
  YYSYMBOL_BX_TOKEN_SSE = 36,              /* BX_TOKEN_SSE  */
  YYSYMBOL_BX_TOKEN_AVX = 37,              /* BX_TOKEN_AVX  */
  YYSYMBOL_BX_TOKEN_IDT = 38,              /* BX_TOKEN_IDT  */
  YYSYMBOL_BX_TOKEN_IVT = 39,              /* BX_TOKEN_IVT  */
  YYSYMBOL_BX_TOKEN_GDT = 40,              /* BX_TOKEN_GDT  */
  YYSYMBOL_BX_TOKEN_LDT = 41,              /* BX_TOKEN_LDT  */
  YYSYMBOL_BX_TOKEN_TSS = 42,              /* BX_TOKEN_TSS  */
  YYSYMBOL_BX_TOKEN_TAB = 43,              /* BX_TOKEN_TAB  */
  YYSYMBOL_BX_TOKEN_ALL = 44,              /* BX_TOKEN_ALL  */
  YYSYMBOL_BX_TOKEN_LINUX = 45,            /* BX_TOKEN_LINUX  */
  YYSYMBOL_BX_TOKEN_DEBUG_REGS = 46,       /* BX_TOKEN_DEBUG_REGS  */
  YYSYMBOL_BX_TOKEN_CONTROL_REGS = 47,     /* BX_TOKEN_CONTROL_REGS  */
  YYSYMBOL_BX_TOKEN_SEGMENT_REGS = 48,     /* BX_TOKEN_SEGMENT_REGS  */
  YYSYMBOL_BX_TOKEN_EXAMINE = 49,          /* BX_TOKEN_EXAMINE  */
  YYSYMBOL_BX_TOKEN_XFORMAT = 50,          /* BX_TOKEN_XFORMAT  */
  YYSYMBOL_BX_TOKEN_DISFORMAT = 51,        /* BX_TOKEN_DISFORMAT  */
  YYSYMBOL_BX_TOKEN_RESTORE = 52,          /* BX_TOKEN_RESTORE  */
  YYSYMBOL_BX_TOKEN_WRITEMEM = 53,         /* BX_TOKEN_WRITEMEM  */
  YYSYMBOL_BX_TOKEN_SETPMEM = 54,          /* BX_TOKEN_SETPMEM  */
  YYSYMBOL_BX_TOKEN_SYMBOLNAME = 55,       /* BX_TOKEN_SYMBOLNAME  */
  YYSYMBOL_BX_TOKEN_QUERY = 56,            /* BX_TOKEN_QUERY  */
  YYSYMBOL_BX_TOKEN_PENDING = 57,          /* BX_TOKEN_PENDING  */
  YYSYMBOL_BX_TOKEN_TAKE = 58,             /* BX_TOKEN_TAKE  */
  YYSYMBOL_BX_TOKEN_DMA = 59,              /* BX_TOKEN_DMA  */
  YYSYMBOL_BX_TOKEN_IRQ = 60,              /* BX_TOKEN_IRQ  */
  YYSYMBOL_BX_TOKEN_TLB = 61,              /* BX_TOKEN_TLB  */
  YYSYMBOL_BX_TOKEN_HEX = 62,              /* BX_TOKEN_HEX  */
  YYSYMBOL_BX_TOKEN_DISASM = 63,           /* BX_TOKEN_DISASM  */
  YYSYMBOL_BX_TOKEN_INSTRUMENT = 64,       /* BX_TOKEN_INSTRUMENT  */
  YYSYMBOL_BX_TOKEN_STRING = 65,           /* BX_TOKEN_STRING  */
  YYSYMBOL_BX_TOKEN_STOP = 66,             /* BX_TOKEN_STOP  */
  YYSYMBOL_BX_TOKEN_DOIT = 67,             /* BX_TOKEN_DOIT  */
  YYSYMBOL_BX_TOKEN_CRC = 68,              /* BX_TOKEN_CRC  */
  YYSYMBOL_BX_TOKEN_TRACE = 69,            /* BX_TOKEN_TRACE  */
  YYSYMBOL_BX_TOKEN_TRACEREG = 70,         /* BX_TOKEN_TRACEREG  */
  YYSYMBOL_BX_TOKEN_TRACEMEM = 71,         /* BX_TOKEN_TRACEMEM  */
  YYSYMBOL_BX_TOKEN_SWITCH_MODE = 72,      /* BX_TOKEN_SWITCH_MODE  */
  YYSYMBOL_BX_TOKEN_SIZE = 73,             /* BX_TOKEN_SIZE  */
  YYSYMBOL_BX_TOKEN_PTIME = 74,            /* BX_TOKEN_PTIME  */
  YYSYMBOL_BX_TOKEN_TIMEBP_ABSOLUTE = 75,  /* BX_TOKEN_TIMEBP_ABSOLUTE  */
  YYSYMBOL_BX_TOKEN_TIMEBP = 76,           /* BX_TOKEN_TIMEBP  */
  YYSYMBOL_BX_TOKEN_MODEBP = 77,           /* BX_TOKEN_MODEBP  */
  YYSYMBOL_BX_TOKEN_VMEXITBP = 78,         /* BX_TOKEN_VMEXITBP  */
  YYSYMBOL_BX_TOKEN_PRINT_STACK = 79,      /* BX_TOKEN_PRINT_STACK  */
  YYSYMBOL_BX_TOKEN_WATCH = 80,            /* BX_TOKEN_WATCH  */
  YYSYMBOL_BX_TOKEN_UNWATCH = 81,          /* BX_TOKEN_UNWATCH  */
  YYSYMBOL_BX_TOKEN_READ = 82,             /* BX_TOKEN_READ  */
  YYSYMBOL_BX_TOKEN_WRITE = 83,            /* BX_TOKEN_WRITE  */
  YYSYMBOL_BX_TOKEN_SHOW = 84,             /* BX_TOKEN_SHOW  */
  YYSYMBOL_BX_TOKEN_LOAD_SYMBOLS = 85,     /* BX_TOKEN_LOAD_SYMBOLS  */
  YYSYMBOL_BX_TOKEN_SYMBOLS = 86,          /* BX_TOKEN_SYMBOLS  */
  YYSYMBOL_BX_TOKEN_LIST_SYMBOLS = 87,     /* BX_TOKEN_LIST_SYMBOLS  */
  YYSYMBOL_BX_TOKEN_GLOBAL = 88,           /* BX_TOKEN_GLOBAL  */
  YYSYMBOL_BX_TOKEN_WHERE = 89,            /* BX_TOKEN_WHERE  */
  YYSYMBOL_BX_TOKEN_PRINT_STRING = 90,     /* BX_TOKEN_PRINT_STRING  */
  YYSYMBOL_BX_TOKEN_NUMERIC = 91,          /* BX_TOKEN_NUMERIC  */
  YYSYMBOL_BX_TOKEN_PAGE = 92,             /* BX_TOKEN_PAGE  */
  YYSYMBOL_BX_TOKEN_HELP = 93,             /* BX_TOKEN_HELP  */
  YYSYMBOL_BX_TOKEN_CALC = 94,             /* BX_TOKEN_CALC  */
  YYSYMBOL_BX_TOKEN_VGA = 95,              /* BX_TOKEN_VGA  */
  YYSYMBOL_BX_TOKEN_DEVICE = 96,           /* BX_TOKEN_DEVICE  */
  YYSYMBOL_BX_TOKEN_COMMAND = 97,          /* BX_TOKEN_COMMAND  */
  YYSYMBOL_BX_TOKEN_GENERIC = 98,          /* BX_TOKEN_GENERIC  */
  YYSYMBOL_BX_TOKEN_RSHIFT = 99,           /* BX_TOKEN_RSHIFT  */
  YYSYMBOL_BX_TOKEN_LSHIFT = 100,          /* BX_TOKEN_LSHIFT  */
  YYSYMBOL_BX_TOKEN_REG_IP = 101,          /* BX_TOKEN_REG_IP  */
  YYSYMBOL_BX_TOKEN_REG_EIP = 102,         /* BX_TOKEN_REG_EIP  */
  YYSYMBOL_BX_TOKEN_REG_RIP = 103,         /* BX_TOKEN_REG_RIP  */
  YYSYMBOL_104_ = 104,                     /* '+'  */
  YYSYMBOL_105_ = 105,                     /* '-'  */
  YYSYMBOL_106_ = 106,                     /* '|'  */
  YYSYMBOL_107_ = 107,                     /* '^'  */
  YYSYMBOL_108_ = 108,                     /* '*'  */
  YYSYMBOL_109_ = 109,                     /* '/'  */
  YYSYMBOL_110_ = 110,                     /* '&'  */
  YYSYMBOL_NOT = 111,                      /* NOT  */
  YYSYMBOL_NEG = 112,                      /* NEG  */
  YYSYMBOL_INDIRECT = 113,                 /* INDIRECT  */
  YYSYMBOL_114_n_ = 114,                   /* '\n'  */
  YYSYMBOL_115_ = 115,                     /* '='  */
  YYSYMBOL_116_ = 116,                     /* ':'  */
  YYSYMBOL_117_ = 117,                     /* '!'  */
  YYSYMBOL_118_ = 118,                     /* '('  */
  YYSYMBOL_119_ = 119,                     /* ')'  */
  YYSYMBOL_120_ = 120,                     /* '@'  */
  YYSYMBOL_YYACCEPT = 121,                 /* $accept  */
  YYSYMBOL_commands = 122,                 /* commands  */
  YYSYMBOL_command = 123,                  /* command  */
  YYSYMBOL_BX_TOKEN_TOGGLE_ON_OFF = 124,   /* BX_TOKEN_TOGGLE_ON_OFF  */
  YYSYMBOL_BX_TOKEN_REGISTERS = 125,       /* BX_TOKEN_REGISTERS  */
  YYSYMBOL_BX_TOKEN_SEGREG = 126,          /* BX_TOKEN_SEGREG  */
  YYSYMBOL_timebp_command = 127,           /* timebp_command  */
  YYSYMBOL_modebp_command = 128,           /* modebp_command  */
  YYSYMBOL_vmexitbp_command = 129,         /* vmexitbp_command  */
  YYSYMBOL_show_command = 130,             /* show_command  */
  YYSYMBOL_page_command = 131,             /* page_command  */
  YYSYMBOL_tlb_command = 132,              /* tlb_command  */
  YYSYMBOL_ptime_command = 133,            /* ptime_command  */
  YYSYMBOL_trace_command = 134,            /* trace_command  */
  YYSYMBOL_trace_reg_command = 135,        /* trace_reg_command  */
  YYSYMBOL_trace_mem_command = 136,        /* trace_mem_command  */
  YYSYMBOL_print_stack_command = 137,      /* print_stack_command  */
  YYSYMBOL_watch_point_command = 138,      /* watch_point_command  */
  YYSYMBOL_symbol_command = 139,           /* symbol_command  */
  YYSYMBOL_where_command = 140,            /* where_command  */
  YYSYMBOL_print_string_command = 141,     /* print_string_command  */
  YYSYMBOL_continue_command = 142,         /* continue_command  */
  YYSYMBOL_stepN_command = 143,            /* stepN_command  */
  YYSYMBOL_step_over_command = 144,        /* step_over_command  */
  YYSYMBOL_set_command = 145,              /* set_command  */
  YYSYMBOL_breakpoint_command = 146,       /* breakpoint_command  */
  YYSYMBOL_blist_command = 147,            /* blist_command  */
  YYSYMBOL_slist_command = 148,            /* slist_command  */
  YYSYMBOL_info_command = 149,             /* info_command  */
  YYSYMBOL_optional_numeric = 150,         /* optional_numeric  */
  YYSYMBOL_regs_command = 151,             /* regs_command  */
  YYSYMBOL_fpu_regs_command = 152,         /* fpu_regs_command  */
  YYSYMBOL_mmx_regs_command = 153,         /* mmx_regs_command  */
  YYSYMBOL_sse_regs_command = 154,         /* sse_regs_command  */
  YYSYMBOL_avx_regs_command = 155,         /* avx_regs_command  */
  YYSYMBOL_segment_regs_command = 156,     /* segment_regs_command  */
  YYSYMBOL_control_regs_command = 157,     /* control_regs_command  */
  YYSYMBOL_debug_regs_command = 158,       /* debug_regs_command  */
  YYSYMBOL_delete_command = 159,           /* delete_command  */
  YYSYMBOL_bpe_command = 160,              /* bpe_command  */
  YYSYMBOL_bpd_command = 161,              /* bpd_command  */
  YYSYMBOL_quit_command = 162,             /* quit_command  */
  YYSYMBOL_examine_command = 163,          /* examine_command  */
  YYSYMBOL_restore_command = 164,          /* restore_command  */
  YYSYMBOL_writemem_command = 165,         /* writemem_command  */
  YYSYMBOL_setpmem_command = 166,          /* setpmem_command  */
  YYSYMBOL_query_command = 167,            /* query_command  */
  YYSYMBOL_take_command = 168,             /* take_command  */
  YYSYMBOL_disassemble_command = 169,      /* disassemble_command  */
  YYSYMBOL_instrument_command = 170,       /* instrument_command  */
  YYSYMBOL_doit_command = 171,             /* doit_command  */
  YYSYMBOL_crc_command = 172,              /* crc_command  */
  YYSYMBOL_help_command = 173,             /* help_command  */
  YYSYMBOL_calc_command = 174,             /* calc_command  */
  YYSYMBOL_vexpression = 175,              /* vexpression  */
  YYSYMBOL_expression = 176                /* expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  285
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1443

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  271
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  529

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   361


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     114,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   117,     2,     2,     2,     2,   110,     2,
     118,   119,   108,   104,     2,   105,     2,   109,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   116,     2,
       2,   115,     2,     2,   120,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   107,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   106,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   111,
     112,   113
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   138,   138,   139,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   197,   198,   203,   204,   209,   210,   211,
     212,   213,   214,   219,   224,   232,   240,   248,   253,   258,
     263,   271,   279,   287,   295,   303,   311,   319,   324,   332,
     337,   342,   347,   352,   357,   362,   367,   372,   377,   382,
     390,   395,   400,   405,   413,   421,   429,   437,   442,   447,
     452,   460,   468,   473,   478,   482,   486,   490,   494,   498,
     502,   506,   513,   518,   523,   528,   533,   538,   543,   548,
     556,   564,   569,   577,   582,   587,   592,   597,   602,   607,
     612,   617,   622,   627,   632,   637,   642,   647,   655,   656,
     659,   667,   675,   683,   691,   699,   707,   715,   723,   731,
     738,   746,   754,   759,   764,   769,   777,   785,   793,   801,
     809,   814,   819,   827,   832,   837,   842,   847,   852,   857,
     862,   867,   875,   880,   888,   896,   904,   909,   914,   921,
     926,   931,   936,   941,   946,   951,   956,   961,   966,   971,
     976,   982,   988,   994,  1002,  1007,  1012,  1017,  1022,  1027,
    1032,  1037,  1042,  1047,  1052,  1057,  1062,  1067,  1072,  1077,
    1082,  1092,  1103,  1109,  1122,  1127,  1138,  1143,  1158,  1170,
    1180,  1185,  1193,  1211,  1212,  1213,  1214,  1215,  1216,  1217,
    1218,  1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  1227,
    1228,  1229,  1230,  1231,  1232,  1233,  1239,  1240,  1241,  1242,
    1243,  1244,  1245,  1246,  1247,  1248,  1249,  1250,  1251,  1252,
    1253,  1254,  1255,  1256,  1257,  1258,  1259,  1260,  1261,  1262,
    1263,  1264
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BX_TOKEN_8BH_REG",
  "BX_TOKEN_8BL_REG", "BX_TOKEN_16B_REG", "BX_TOKEN_32B_REG",
  "BX_TOKEN_64B_REG", "BX_TOKEN_CS", "BX_TOKEN_ES", "BX_TOKEN_SS",
  "BX_TOKEN_DS", "BX_TOKEN_FS", "BX_TOKEN_GS", "BX_TOKEN_FLAGS",
  "BX_TOKEN_ON", "BX_TOKEN_OFF", "BX_TOKEN_CONTINUE", "BX_TOKEN_STEPN",
  "BX_TOKEN_STEP_OVER", "BX_TOKEN_SET", "BX_TOKEN_DEBUGGER",
  "BX_TOKEN_LIST_BREAK", "BX_TOKEN_VBREAKPOINT", "BX_TOKEN_LBREAKPOINT",
  "BX_TOKEN_PBREAKPOINT", "BX_TOKEN_DEL_BREAKPOINT",
  "BX_TOKEN_ENABLE_BREAKPOINT", "BX_TOKEN_DISABLE_BREAKPOINT",
  "BX_TOKEN_INFO", "BX_TOKEN_QUIT", "BX_TOKEN_R", "BX_TOKEN_REGS",
  "BX_TOKEN_CPU", "BX_TOKEN_FPU", "BX_TOKEN_MMX", "BX_TOKEN_SSE",
  "BX_TOKEN_AVX", "BX_TOKEN_IDT", "BX_TOKEN_IVT", "BX_TOKEN_GDT",
  "BX_TOKEN_LDT", "BX_TOKEN_TSS", "BX_TOKEN_TAB", "BX_TOKEN_ALL",
  "BX_TOKEN_LINUX", "BX_TOKEN_DEBUG_REGS", "BX_TOKEN_CONTROL_REGS",
  "BX_TOKEN_SEGMENT_REGS", "BX_TOKEN_EXAMINE", "BX_TOKEN_XFORMAT",
  "BX_TOKEN_DISFORMAT", "BX_TOKEN_RESTORE", "BX_TOKEN_WRITEMEM",
  "BX_TOKEN_SETPMEM", "BX_TOKEN_SYMBOLNAME", "BX_TOKEN_QUERY",
  "BX_TOKEN_PENDING", "BX_TOKEN_TAKE", "BX_TOKEN_DMA", "BX_TOKEN_IRQ",
  "BX_TOKEN_TLB", "BX_TOKEN_HEX", "BX_TOKEN_DISASM", "BX_TOKEN_INSTRUMENT",
  "BX_TOKEN_STRING", "BX_TOKEN_STOP", "BX_TOKEN_DOIT", "BX_TOKEN_CRC",
  "BX_TOKEN_TRACE", "BX_TOKEN_TRACEREG", "BX_TOKEN_TRACEMEM",
  "BX_TOKEN_SWITCH_MODE", "BX_TOKEN_SIZE", "BX_TOKEN_PTIME",
  "BX_TOKEN_TIMEBP_ABSOLUTE", "BX_TOKEN_TIMEBP", "BX_TOKEN_MODEBP",
  "BX_TOKEN_VMEXITBP", "BX_TOKEN_PRINT_STACK", "BX_TOKEN_WATCH",
  "BX_TOKEN_UNWATCH", "BX_TOKEN_READ", "BX_TOKEN_WRITE", "BX_TOKEN_SHOW",
  "BX_TOKEN_LOAD_SYMBOLS", "BX_TOKEN_SYMBOLS", "BX_TOKEN_LIST_SYMBOLS",
  "BX_TOKEN_GLOBAL", "BX_TOKEN_WHERE", "BX_TOKEN_PRINT_STRING",
  "BX_TOKEN_NUMERIC", "BX_TOKEN_PAGE", "BX_TOKEN_HELP", "BX_TOKEN_CALC",
  "BX_TOKEN_VGA", "BX_TOKEN_DEVICE", "BX_TOKEN_COMMAND",
  "BX_TOKEN_GENERIC", "BX_TOKEN_RSHIFT", "BX_TOKEN_LSHIFT",
  "BX_TOKEN_REG_IP", "BX_TOKEN_REG_EIP", "BX_TOKEN_REG_RIP", "'+'", "'-'",
  "'|'", "'^'", "'*'", "'/'", "'&'", "NOT", "NEG", "INDIRECT", "'\\n'",
  "'='", "':'", "'!'", "'('", "')'", "'@'", "$accept", "commands",
  "command", "BX_TOKEN_TOGGLE_ON_OFF", "BX_TOKEN_REGISTERS",
  "BX_TOKEN_SEGREG", "timebp_command", "modebp_command",
  "vmexitbp_command", "show_command", "page_command", "tlb_command",
  "ptime_command", "trace_command", "trace_reg_command",
  "trace_mem_command", "print_stack_command", "watch_point_command",
  "symbol_command", "where_command", "print_string_command",
  "continue_command", "stepN_command", "step_over_command", "set_command",
  "breakpoint_command", "blist_command", "slist_command", "info_command",
  "optional_numeric", "regs_command", "fpu_regs_command",
  "mmx_regs_command", "sse_regs_command", "avx_regs_command",
  "segment_regs_command", "control_regs_command", "debug_regs_command",
  "delete_command", "bpe_command", "bpd_command", "quit_command",
  "examine_command", "restore_command", "writemem_command",
  "setpmem_command", "query_command", "take_command",
  "disassemble_command", "instrument_command", "doit_command",
  "crc_command", "help_command", "calc_command", "vexpression",
  "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,    43,    45,   124,    94,    42,    47,
      38,   359,   360,   361,    10,    61,    58,    33,    40,    41,
      64
};
#endif

#define YYPACT_NINF (-168)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-269)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1146,  -104,   -27,  -101,  1094,   -86,   880,   644,   691,   -50,
     -48,   -46,   927,   -76,  -168,  -168,   -64,   -40,   -32,   -26,
     -25,   -23,   -22,    49,     1,    21,     6,    37,    13,   246,
     573,   -57,     7,    10,    16,    16,    16,     4,    24,    40,
      18,    20,   -80,     2,   711,   -14,   -53,   -51,    23,    47,
     246,  1227,   246,  -168,  1002,  -168,    25,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,    50,   -68,  -168,  -168,    27,
      28,    31,    41,    43,  -168,  -168,  -168,  -168,  -168,  -168,
      44,    16,    45,    46,    53,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,   898,  -168,   898,   898,
    -168,  1303,  -168,  -168,  -168,  -168,  -168,    48,  -168,  -168,
    -168,  -168,   246,   246,  -168,   246,   246,   246,  -168,     3,
    -168,   246,  -168,   236,    51,    57,    58,    63,    64,    66,
      73,    73,    73,    73,    67,    69,    70,   -49,   -47,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,   762,  -168,   298,
      90,    94,    95,    74,   -67,    76,   361,   829,    16,    77,
      72,  -168,   117,    78,    79,    91,   115,  -168,  -168,    93,
      96,    97,  -168,    99,   114,  -168,  -168,   118,  -168,   122,
     246,   127,   246,   246,  -168,  -168,   424,   128,   129,   131,
    -168,   -66,   144,   133,  -168,  -168,   134,   488,   148,   149,
     150,   158,   159,   160,   162,   164,   165,   167,   168,   174,
     175,   179,   180,   181,   182,   183,   184,   185,   186,   207,
     220,   224,   225,   239,   242,   243,   244,   251,   253,   254,
     255,   259,   261,   265,   266,   267,   268,   269,   270,   285,
     286,   287,  -168,   295,   563,  -168,  -168,  -168,   296,   299,
    -168,   246,   246,   246,   246,   246,   153,   301,   246,   246,
     246,  -168,  -168,   -29,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,  -168,   300,   300,   300,   161,   300,
     246,   246,   246,   246,   246,   246,   246,   246,   246,  -168,
     246,   -77,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
      73,    73,    73,    73,  -168,  -168,  -168,   303,  -168,   -45,
    -168,  -168,   634,  -168,   304,   340,   341,  -168,   319,  -168,
    -168,  -168,  -168,   320,   321,  -168,   348,   246,   246,  -168,
     681,  -168,  -168,  -168,   327,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,   383,  -168,   446,   509,  -168,  -168,  -168,  -168,
     328,  -168,   -65,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,   752,   819,  1013,  1026,  1046,   329,
    -168,  1178,  1218,  1238,  -168,  -168,  -168,    -4,    -4,    -4,
      -4,  -168,  -168,  -168,  1329,  -168,   300,   300,   130,   130,
     130,   130,   300,   300,   300,  1316,  -168,   330,   331,   332,
     333,  -168,   349,  -168,  -168,  -168,   350,   358,  -168,  -168,
    1251,  -168,   359,   262,   300,  -168,  -168,  -168,  1264,  -168,
    1277,  -168,  1290,  -168,   362,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     3,     0,    38,    39,    40,
      45,    43,    44,    37,    34,    35,    36,    41,    42,    46,
      47,    48,     4,     5,     6,     7,     8,    18,    19,     9,
      10,    11,    12,    13,    14,    15,    17,    16,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    49,    50,    96,     0,     0,    97,   101,     0,
       0,     0,     0,     0,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,   120,   226,   225,   227,   228,
     229,   224,   223,   231,   232,   233,     0,   112,     0,     0,
     230,     0,   249,   248,   250,   251,   252,   247,   246,   254,
     255,   256,     0,     0,   114,     0,     0,     0,   253,     0,
     247,     0,   117,     0,     0,     0,     0,     0,     0,     0,
     138,   138,   138,   138,     0,     0,     0,     0,     0,   151,
     141,   142,   143,   144,   147,   146,   145,     0,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,     0,     0,     0,     0,     0,    53,    54,     0,
       0,     0,    73,     0,     0,    65,    66,     0,    77,     0,
       0,     0,     0,     0,    81,    88,     0,     0,     0,     0,
      70,     0,     0,     0,   121,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   221,     0,     0,     1,     2,   140,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,   268,   269,   267,     0,   270,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
       0,   269,   118,   148,   149,   150,   131,   123,   124,   139,
     138,   138,   138,   138,   130,   129,   132,     0,   133,     0,
     135,   153,     0,   154,     0,     0,     0,   159,     0,   160,
     162,    72,   166,     0,     0,   169,     0,     0,     0,   164,
       0,   172,   173,   174,     0,    74,    75,    76,    64,    63,
      78,    80,     0,    79,     0,     0,    89,    68,    69,    67,
       0,    90,     0,   122,    95,    71,   177,   178,   179,   215,
     186,   180,   181,   182,   183,   184,   185,   217,   176,   201,
     202,   203,   204,   207,   206,   205,   213,   193,   208,   209,
     210,   214,   189,   190,   191,   192,   194,   196,   195,   187,
     188,   197,   211,   212,   218,   198,   199,   216,   220,   219,
     200,   222,    99,   100,     0,     0,     0,     0,     0,     0,
     102,     0,     0,     0,   245,   238,   239,   234,   235,   240,
     241,   236,   237,   242,     0,   271,   262,   263,   258,   259,
     264,   265,   260,   261,   266,   257,   119,     0,     0,     0,
       0,   134,     0,   136,   152,   156,     0,     0,   161,   167,
       0,   170,     0,   259,   260,   165,   175,    82,     0,    83,
       0,    84,     0,    91,     0,    92,   105,   104,   106,   107,
     108,   103,   109,   110,   111,   113,   125,   126,   127,   128,
     137,   157,   158,   168,   171,    85,    86,    87,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,   221,   -28,   411,    -3,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -167,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -109,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    54,    55,   209,    56,   158,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   340,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   141,   159
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     163,   124,   227,   140,   341,   342,   343,   210,   211,   203,
     104,   217,   231,   108,   233,   189,   347,   105,   349,   219,
     482,   196,   202,   289,   358,   390,   504,   301,   125,   302,
     303,   207,   208,   220,   218,   232,   226,   476,   179,   330,
     204,   164,   237,   165,   284,   166,   290,   359,   391,   505,
     180,   228,   142,   143,   144,   145,   146,   114,   115,   116,
     117,   118,   119,   234,   106,   348,   190,   350,   221,   483,
     304,   305,   194,   195,   181,   306,   307,   308,   309,   310,
     311,   312,   182,   229,   222,   223,   191,   107,   183,   184,
     454,   185,   186,   297,   193,   304,   305,   192,   205,   187,
     230,   206,   320,   321,   310,   311,   312,   322,   323,   324,
     325,   326,   327,   328,   160,   213,   224,   329,   212,   330,
     142,   143,   144,   145,   146,   114,   115,   116,   117,   118,
     119,   214,   215,   140,   216,   140,   140,   235,   236,   287,
     148,   288,   291,   292,   315,   316,   293,   317,   318,   319,
     149,   150,   151,   331,   152,   354,   294,   153,   295,   296,
     298,   299,   314,   188,   339,   333,   155,   156,   300,   157,
     364,   334,   335,   477,   478,   479,   480,   336,   337,   352,
     338,   344,   160,   345,   346,   355,   356,   366,   357,   363,
     360,   365,   371,   372,   370,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   373,   374,   375,   148,   392,
     376,   377,   382,   378,   384,   385,   320,   321,   149,   150,
     151,   322,   367,   324,   325,   368,   327,   328,   379,   320,
     321,   369,   380,   330,   155,   156,   381,   157,   326,   327,
     328,   383,   387,   388,   449,   389,   330,   393,   394,   142,
     143,   144,   145,   146,   114,   115,   116,   117,   118,   119,
     320,   321,   396,   397,   398,   322,   323,   324,   325,   326,
     327,   328,   399,   400,   401,   286,   402,   330,   403,   404,
     465,   405,   406,   444,   445,   446,   447,   448,   407,   408,
     451,   452,   453,   409,   410,   411,   412,   413,   414,   415,
     416,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   160,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   417,   475,   142,   143,   144,   145,   146,   114,   115,
     116,   117,   118,   119,   418,   320,   321,   148,   419,   420,
     322,   323,   324,   325,   326,   327,   328,   149,   150,   151,
     332,   152,   330,   421,   153,   490,   422,   423,   424,   493,
     494,  -268,  -268,   155,   156,   425,   157,   426,   427,   428,
    -268,  -268,  -268,   429,   498,   430,   500,   502,   330,   431,
     432,   433,   434,   435,   436,   160,   142,   143,   144,   145,
     146,   114,   115,   116,   117,   118,   119,   320,   321,   437,
     438,   439,   322,   323,   324,   325,   326,   327,   328,   440,
     442,   148,   353,   443,   330,   450,   330,   481,   485,   320,
     321,   149,   150,   151,   322,   367,   324,   325,   368,   327,
     328,   486,   487,   488,   489,   491,   330,   155,   156,   492,
     157,   496,   503,   511,   516,   517,   518,   519,   160,   142,
     143,   144,   145,   146,   114,   115,   116,   117,   118,   119,
     320,   321,   283,   520,   521,   322,   323,   324,   325,   326,
     327,   328,   522,   524,   148,   361,   528,   330,     0,     0,
       0,     0,   320,   321,   149,   150,   151,   322,   367,   324,
     325,   368,   327,   328,     0,     0,     0,   497,     0,   330,
     155,   156,     0,   157,     0,     0,     0,     0,     0,     0,
       0,   160,   142,   143,   144,   145,   146,   114,   115,   116,
     117,   118,   119,   320,   321,     0,     0,     0,   322,   323,
     324,   325,   326,   327,   328,     0,     0,   148,   386,     0,
     330,     0,     0,     0,     0,   320,   321,   149,   150,   151,
     322,   367,   324,   325,   368,   327,   328,     0,     0,     0,
     499,     0,   330,   155,   156,     0,   157,     0,     0,     0,
       0,     0,     0,     0,   160,     0,   142,   143,   144,   145,
     146,   114,   115,   116,   117,   118,   119,   320,   321,     0,
       0,     0,   322,   323,   324,   325,   326,   327,   328,     0,
     148,     0,   395,     0,   330,     0,     0,     0,   320,   321,
     149,   150,   151,   322,   367,   324,   325,   368,   327,   328,
       0,     0,     0,   501,   197,   330,   155,   156,     0,   157,
       0,     0,     0,     0,     0,   198,     0,     0,   160,     0,
       0,     0,     0,     0,     0,   199,   200,   142,   143,   144,
     145,   146,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,   320,   321,   148,     0,     0,   322,   323,   324,
     325,   326,   327,   328,   149,   150,   151,   441,   152,   330,
       0,   153,     0,     0,     0,     0,     0,   201,     0,     0,
     155,   156,     0,   157,   142,   143,   144,   145,   146,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,   147,
       0,     0,     0,     0,   142,   143,   144,   145,   146,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,   320,   321,   148,     0,     0,   322,   323,
     324,   325,   326,   327,   328,   149,   150,   151,   484,   152,
     330,     0,   153,     0,     0,     0,   160,     0,   154,     0,
       0,   155,   156,     0,   157,   142,   143,   144,   145,   146,
     114,   115,   116,   117,   118,   119,   160,     0,     0,     0,
     320,   321,   148,     0,     0,   322,   323,   324,   325,   326,
     327,   328,   149,   150,   151,   495,   152,   330,     0,   161,
       0,     0,   148,     0,     0,   162,     0,     0,   155,   156,
       0,   157,   149,   150,   151,     0,   152,     0,     0,   153,
       0,     0,     0,     0,     0,   225,     0,   160,   155,   156,
       0,   157,   142,   143,   144,   145,   146,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,   320,   321,   148,     0,     0,   322,   323,   324,   325,
     326,   327,   328,   149,   150,   151,   506,   152,   330,     0,
     153,     0,     0,     0,     0,     0,   351,     0,     0,   155,
     156,     0,   157,   126,   127,   128,   129,   130,   114,   115,
     116,   117,   118,   119,   160,     0,     0,     0,     0,     0,
       0,   126,   127,   128,   129,   130,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,   320,   321,
     148,     0,     0,   322,   323,   324,   325,   326,   327,   328,
     149,   150,   151,   507,   152,   330,     0,   153,     0,     0,
       0,   167,     0,   362,     0,   131,   155,   156,     0,   157,
       0,     0,   168,     0,     0,     0,     0,     0,     0,     0,
     169,     0,     0,   131,     0,   170,   171,   172,   173,   174,
     175,   132,   176,     0,     0,     0,     0,     0,     0,     0,
       0,   133,   134,   135,     0,   136,     0,     0,     0,   132,
       0,     0,     0,     0,   137,     0,     0,   138,   139,   133,
     134,   135,   285,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,   138,   139,     0,     0,     1,
       2,     3,     4,   178,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,    16,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    21,
      22,    23,     0,     0,    24,    25,    26,     0,    27,     0,
      28,     0,     0,    29,     0,    30,    31,     0,     0,    32,
      33,    34,    35,    36,     0,     0,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,    45,    46,     0,    47,
       0,    48,    49,     0,    50,    51,    52,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,   320,   321,     0,     0,    53,   322,   323,   324,
     325,   326,   327,   328,     0,   320,   321,   508,     0,   330,
     322,   323,   324,   325,   326,   327,   328,     0,     0,     0,
     509,     0,   330,     0,     0,   320,   321,     0,     0,   120,
     322,   323,   324,   325,   326,   327,   328,   121,     0,     0,
     510,     0,   330,     1,     2,     3,     4,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
      16,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,    22,    23,   122,   123,    24,    25,
      26,     0,    27,     0,    28,     0,     0,    29,     0,    30,
      31,     0,     0,    32,    33,    34,    35,    36,     0,     0,
      37,    38,    39,    40,    41,    42,    43,    44,     0,     0,
      45,    46,     0,    47,     0,    48,    49,     0,    50,    51,
      52,     0,     0,     0,   238,   239,   240,   241,     0,   242,
     243,   244,   245,   246,   247,   248,   249,   250,    14,    15,
      53,   251,   252,   253,   254,     0,     0,     0,     0,     0,
       0,     0,     0,   255,   256,   257,   258,   320,   321,   259,
     260,   261,   322,   323,   324,   325,   326,   327,   328,     0,
     262,   263,   512,     0,   330,   264,   265,   266,   267,     0,
       0,   268,   269,   270,   271,   272,   273,   274,   275,     0,
       0,   276,   277,     0,   278,     0,     0,   320,   321,   279,
     280,   281,   322,   323,   324,   325,   326,   327,   328,     0,
       0,     0,   513,     0,   330,     0,     0,   320,   321,     0,
       0,   282,   322,   323,   324,   325,   326,   327,   328,     0,
     320,   321,   514,     0,   330,   322,   323,   324,   325,   326,
     327,   328,     0,   320,   321,   523,     0,   330,   322,   323,
     324,   325,   326,   327,   328,     0,   320,   321,   525,     0,
     330,   322,   323,   324,   325,   326,   327,   328,     0,   320,
     321,   526,     0,   330,   322,   323,   324,   325,   326,   327,
     328,     0,   304,   305,   527,     0,   330,   306,   307,   308,
     309,   310,   311,   312,     0,   320,   321,     0,     0,   313,
     322,   323,   324,   325,   326,   327,   328,     0,   304,   305,
       0,     0,   330,   306,   307,   308,   309,   310,   311,   312,
       0,     0,     0,   515
};

static const yytype_int16 yycheck[] =
{
       8,     4,    16,     6,   171,   172,   173,    35,    36,    66,
     114,    91,    65,   114,    65,    23,    65,    44,    65,    17,
      65,    29,    30,    91,    91,    91,    91,   136,   114,   138,
     139,    15,    16,    31,   114,    88,    44,   114,   114,   116,
      97,    91,    50,    91,    52,    91,   114,   114,   114,   114,
     114,    65,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   114,    91,   114,    65,   114,    66,   114,
      99,   100,    59,    60,   114,   104,   105,   106,   107,   108,
     109,   110,   114,    97,    82,    83,    65,   114,   114,   114,
     119,   114,   114,   121,    57,    99,   100,    91,    91,    50,
     114,    91,    99,   100,   108,   109,   110,   104,   105,   106,
     107,   108,   109,   110,    65,    91,   114,   114,   114,   116,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    91,   114,   136,   114,   138,   139,   114,    91,   114,
      91,    91,   115,   115,   152,   153,   115,   155,   156,   157,
     101,   102,   103,   161,   105,    65,   115,   108,   115,   115,
     115,   115,   114,   114,    91,   114,   117,   118,   115,   120,
     198,   114,   114,   340,   341,   342,   343,   114,   114,   187,
     114,   114,    65,   114,   114,    91,    91,   115,   114,   197,
     114,   114,   114,   114,   202,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   114,    91,   114,    91,    65,
     114,   114,   220,   114,   222,   223,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   114,    99,
     100,   114,   114,   116,   117,   118,   114,   120,   108,   109,
     110,   114,   114,   114,    91,   114,   116,   114,   114,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      99,   100,   114,   114,   114,   104,   105,   106,   107,   108,
     109,   110,   114,   114,   114,    54,   114,   116,   114,   114,
     119,   114,   114,   291,   292,   293,   294,   295,   114,   114,
     298,   299,   300,   114,   114,   114,   114,   114,   114,   114,
     114,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,    65,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   114,   330,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   114,    99,   100,    91,   114,   114,
     104,   105,   106,   107,   108,   109,   110,   101,   102,   103,
     114,   105,   116,   114,   108,   363,   114,   114,   114,   367,
     368,    99,   100,   117,   118,   114,   120,   114,   114,   114,
     108,   109,   110,   114,   382,   114,   384,   385,   116,   114,
     114,   114,   114,   114,   114,    65,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    99,   100,   114,
     114,   114,   104,   105,   106,   107,   108,   109,   110,   114,
     114,    91,   114,   114,   116,   114,   116,   114,   114,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    91,    91,   114,   114,   114,   116,   117,   118,    91,
     120,   114,   114,   114,   114,   114,   114,   114,    65,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      99,   100,    51,   114,   114,   104,   105,   106,   107,   108,
     109,   110,   114,   114,    91,   114,   114,   116,    -1,    -1,
      -1,    -1,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,    -1,    -1,    -1,   114,    -1,   116,
     117,   118,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    99,   100,    -1,    -1,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,    91,   114,    -1,
     116,    -1,    -1,    -1,    -1,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,    -1,    -1,
     114,    -1,   116,   117,   118,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    99,   100,    -1,
      -1,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
      91,    -1,   114,    -1,   116,    -1,    -1,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      -1,    -1,    -1,   114,    51,   116,   117,   118,    -1,   120,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    99,   100,    91,    -1,    -1,   104,   105,   106,
     107,   108,   109,   110,   101,   102,   103,   114,   105,   116,
      -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,   120,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,    91,    -1,    -1,   104,   105,
     106,   107,   108,   109,   110,   101,   102,   103,   114,   105,
     116,    -1,   108,    -1,    -1,    -1,    65,    -1,   114,    -1,
      -1,   117,   118,    -1,   120,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    65,    -1,    -1,    -1,
      99,   100,    91,    -1,    -1,   104,   105,   106,   107,   108,
     109,   110,   101,   102,   103,   114,   105,   116,    -1,   108,
      -1,    -1,    91,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,   120,   101,   102,   103,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    65,   117,   118,
      -1,   120,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,    91,    -1,    -1,   104,   105,   106,   107,
     108,   109,   110,   101,   102,   103,   114,   105,   116,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
     118,    -1,   120,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    65,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,
      91,    -1,    -1,   104,   105,   106,   107,   108,   109,   110,
     101,   102,   103,   114,   105,   116,    -1,   108,    -1,    -1,
      -1,    14,    -1,   114,    -1,    65,   117,   118,    -1,   120,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    65,    -1,    38,    39,    40,    41,    42,
      43,    91,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,    -1,   105,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,   101,
     102,   103,     0,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,   117,   118,    -1,    -1,    17,
      18,    19,    20,    96,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    -1,    52,    53,    54,    -1,    56,    -1,
      58,    -1,    -1,    61,    -1,    63,    64,    -1,    -1,    67,
      68,    69,    70,    71,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    -1,    84,    85,    -1,    87,
      -1,    89,    90,    -1,    92,    93,    94,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    99,   100,    -1,    -1,   114,   104,   105,   106,
     107,   108,   109,   110,    -1,    99,   100,   114,    -1,   116,
     104,   105,   106,   107,   108,   109,   110,    -1,    -1,    -1,
     114,    -1,   116,    -1,    -1,    99,   100,    -1,    -1,    55,
     104,   105,   106,   107,   108,   109,   110,    63,    -1,    -1,
     114,    -1,   116,    17,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,   102,   103,    52,    53,
      54,    -1,    56,    -1,    58,    -1,    -1,    61,    -1,    63,
      64,    -1,    -1,    67,    68,    69,    70,    71,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      84,    85,    -1,    87,    -1,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     114,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    99,   100,    52,
      53,    54,   104,   105,   106,   107,   108,   109,   110,    -1,
      63,    64,   114,    -1,   116,    68,    69,    70,    71,    -1,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    84,    85,    -1,    87,    -1,    -1,    99,   100,    92,
      93,    94,   104,   105,   106,   107,   108,   109,   110,    -1,
      -1,    -1,   114,    -1,   116,    -1,    -1,    99,   100,    -1,
      -1,   114,   104,   105,   106,   107,   108,   109,   110,    -1,
      99,   100,   114,    -1,   116,   104,   105,   106,   107,   108,
     109,   110,    -1,    99,   100,   114,    -1,   116,   104,   105,
     106,   107,   108,   109,   110,    -1,    99,   100,   114,    -1,
     116,   104,   105,   106,   107,   108,   109,   110,    -1,    99,
     100,   114,    -1,   116,   104,   105,   106,   107,   108,   109,
     110,    -1,    99,   100,   114,    -1,   116,   104,   105,   106,
     107,   108,   109,   110,    -1,    99,   100,    -1,    -1,   116,
     104,   105,   106,   107,   108,   109,   110,    -1,    99,   100,
      -1,    -1,   116,   104,   105,   106,   107,   108,   109,   110,
      -1,    -1,    -1,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    18,    19,    20,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    34,    35,    36,    37,
      46,    47,    48,    49,    52,    53,    54,    56,    58,    61,
      63,    64,    67,    68,    69,    70,    71,    74,    75,    76,
      77,    78,    79,    80,    81,    84,    85,    87,    89,    90,
      92,    93,    94,   114,   122,   123,   125,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   114,    44,    91,   114,   114,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      55,    63,   102,   103,   126,   114,     3,     4,     5,     6,
       7,    65,    91,   101,   102,   103,   105,   114,   117,   118,
     126,   175,     3,     4,     5,     6,     7,    65,    91,   101,
     102,   103,   105,   108,   114,   117,   118,   120,   126,   176,
      65,   108,   114,   176,    91,    91,    91,    14,    25,    33,
      38,    39,    40,    41,    42,    43,    45,    86,    96,   114,
     114,   114,   114,   114,   114,   114,   114,    50,   114,   176,
      65,    65,    91,    57,    59,    60,   176,    51,    62,    72,
      73,   114,   176,    66,    97,    91,    91,    15,    16,   124,
     124,   124,   114,    91,    91,   114,   114,    91,   114,    17,
      31,    66,    82,    83,   114,   114,   176,    16,    65,    97,
     114,    65,    88,    65,   114,   114,    91,   176,    17,    18,
      19,    20,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    34,    35,    36,    37,    46,    47,    48,    49,    52,
      53,    54,    63,    64,    68,    69,    70,    71,    74,    75,
      76,    77,    78,    79,    80,    81,    84,    85,    87,    92,
      93,    94,   114,   125,   176,     0,   123,   114,    91,    91,
     114,   115,   115,   115,   115,   115,   115,   124,   115,   115,
     115,   175,   175,   175,    99,   100,   104,   105,   106,   107,
     108,   109,   110,   116,   114,   176,   176,   176,   176,   176,
      99,   100,   104,   105,   106,   107,   108,   109,   110,   114,
     116,   176,   114,   114,   114,   114,   114,   114,   114,    91,
     150,   150,   150,   150,   114,   114,   114,    65,   114,    65,
     114,   114,   176,   114,    65,    91,    91,   114,    91,   114,
     114,   114,   114,   176,   124,   114,   115,   105,   108,   114,
     176,   114,   114,   114,    91,   114,   114,   114,   114,   114,
     114,   114,   176,   114,   176,   176,   114,   114,   114,   114,
      91,   114,    65,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   176,   176,   176,   176,   176,    91,
     114,   176,   176,   176,   119,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   119,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   114,   150,   150,   150,
     150,   114,    65,   114,   114,   114,    91,    91,   114,   114,
     176,   114,    91,   176,   176,   114,   114,   114,   176,   114,
     176,   114,   176,   114,    91,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     126,   126,   126,   127,   127,   128,   129,   130,   130,   130,
     130,   131,   132,   133,   134,   135,   136,   137,   137,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     139,   139,   139,   139,   140,   141,   142,   143,   143,   143,
     143,   144,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   146,
     147,   148,   148,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   163,   163,   163,   164,   165,   166,   167,
     168,   168,   168,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   170,   170,   171,   172,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   174,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     2,     3,     3,     3,
       2,     3,     3,     2,     3,     3,     3,     2,     3,     3,
       3,     2,     4,     4,     4,     5,     5,     5,     2,     3,
       3,     4,     4,     5,     2,     3,     2,     2,     3,     4,
       4,     2,     4,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     2,     5,     2,     3,     3,     2,     3,     4,
       2,     2,     3,     3,     3,     5,     5,     5,     5,     3,
       3,     3,     3,     3,     4,     3,     4,     5,     0,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     4,     3,     3,     2,     4,     5,     5,     3,
       3,     4,     3,     2,     3,     4,     3,     4,     5,     3,
       4,     5,     3,     3,     3,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 52: /* command: '\n'  */
#line 192 "parser.y"
      {
      }
#line 2110 "y.tab.c"
    break;

  case 54: /* BX_TOKEN_TOGGLE_ON_OFF: BX_TOKEN_OFF  */
#line 199 "parser.y"
    { (yyval.bval)=(yyvsp[0].bval); }
#line 2116 "y.tab.c"
    break;

  case 56: /* BX_TOKEN_REGISTERS: BX_TOKEN_REGS  */
#line 205 "parser.y"
    { (yyval.sval)=(yyvsp[0].sval); }
#line 2122 "y.tab.c"
    break;

  case 62: /* BX_TOKEN_SEGREG: BX_TOKEN_GS  */
#line 215 "parser.y"
    { (yyval.uval)=(yyvsp[0].uval); }
#line 2128 "y.tab.c"
    break;

  case 63: /* timebp_command: BX_TOKEN_TIMEBP BX_TOKEN_NUMERIC '\n'  */
#line 220 "parser.y"
      {
          bx_dbg_timebp_command(0, (yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2137 "y.tab.c"
    break;

  case 64: /* timebp_command: BX_TOKEN_TIMEBP_ABSOLUTE BX_TOKEN_NUMERIC '\n'  */
#line 225 "parser.y"
      {
          bx_dbg_timebp_command(1, (yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2146 "y.tab.c"
    break;

  case 65: /* modebp_command: BX_TOKEN_MODEBP '\n'  */
#line 233 "parser.y"
      {
          bx_dbg_modebp_command();
          free((yyvsp[-1].sval));
      }
#line 2155 "y.tab.c"
    break;

  case 66: /* vmexitbp_command: BX_TOKEN_VMEXITBP '\n'  */
#line 241 "parser.y"
      {
          bx_dbg_vmexitbp_command();
          free((yyvsp[-1].sval));
      }
#line 2164 "y.tab.c"
    break;

  case 67: /* show_command: BX_TOKEN_SHOW BX_TOKEN_COMMAND '\n'  */
#line 249 "parser.y"
      {
          bx_dbg_show_command((yyvsp[-1].sval));
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2173 "y.tab.c"
    break;

  case 68: /* show_command: BX_TOKEN_SHOW BX_TOKEN_OFF '\n'  */
#line 254 "parser.y"
      {
          bx_dbg_show_command("off");
          free((yyvsp[-2].sval));
      }
#line 2182 "y.tab.c"
    break;

  case 69: /* show_command: BX_TOKEN_SHOW BX_TOKEN_STRING '\n'  */
#line 259 "parser.y"
      {
          bx_dbg_show_param_command((yyvsp[-1].sval));
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2191 "y.tab.c"
    break;

  case 70: /* show_command: BX_TOKEN_SHOW '\n'  */
#line 264 "parser.y"
      {
          bx_dbg_show_command(0);
          free((yyvsp[-1].sval));
      }
#line 2200 "y.tab.c"
    break;

  case 71: /* page_command: BX_TOKEN_PAGE expression '\n'  */
#line 272 "parser.y"
      {
          bx_dbg_xlate_address((yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2209 "y.tab.c"
    break;

  case 72: /* tlb_command: BX_TOKEN_TLB expression '\n'  */
#line 280 "parser.y"
      {
          bx_dbg_tlb_lookup((yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2218 "y.tab.c"
    break;

  case 73: /* ptime_command: BX_TOKEN_PTIME '\n'  */
#line 288 "parser.y"
      {
          bx_dbg_ptime_command();
          free((yyvsp[-1].sval));
      }
#line 2227 "y.tab.c"
    break;

  case 74: /* trace_command: BX_TOKEN_TRACE BX_TOKEN_TOGGLE_ON_OFF '\n'  */
#line 296 "parser.y"
      {
          bx_dbg_trace_command((yyvsp[-1].bval));
          free((yyvsp[-2].sval));
      }
#line 2236 "y.tab.c"
    break;

  case 75: /* trace_reg_command: BX_TOKEN_TRACEREG BX_TOKEN_TOGGLE_ON_OFF '\n'  */
#line 304 "parser.y"
      {
          bx_dbg_trace_reg_command((yyvsp[-1].bval));
          free((yyvsp[-2].sval));
      }
#line 2245 "y.tab.c"
    break;

  case 76: /* trace_mem_command: BX_TOKEN_TRACEMEM BX_TOKEN_TOGGLE_ON_OFF '\n'  */
#line 312 "parser.y"
      {
          bx_dbg_trace_mem_command((yyvsp[-1].bval));
          free((yyvsp[-2].sval));
      }
#line 2254 "y.tab.c"
    break;

  case 77: /* print_stack_command: BX_TOKEN_PRINT_STACK '\n'  */
#line 320 "parser.y"
      {
          bx_dbg_print_stack_command(16);
          free((yyvsp[-1].sval));
      }
#line 2263 "y.tab.c"
    break;

  case 78: /* print_stack_command: BX_TOKEN_PRINT_STACK BX_TOKEN_NUMERIC '\n'  */
#line 325 "parser.y"
      {
          bx_dbg_print_stack_command((yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2272 "y.tab.c"
    break;

  case 79: /* watch_point_command: BX_TOKEN_WATCH BX_TOKEN_STOP '\n'  */
#line 333 "parser.y"
      {
          bx_dbg_watchpoint_continue(0);
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2281 "y.tab.c"
    break;

  case 80: /* watch_point_command: BX_TOKEN_WATCH BX_TOKEN_CONTINUE '\n'  */
#line 338 "parser.y"
      {
          bx_dbg_watchpoint_continue(1);
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2290 "y.tab.c"
    break;

  case 81: /* watch_point_command: BX_TOKEN_WATCH '\n'  */
#line 343 "parser.y"
      {
          bx_dbg_print_watchpoints();
          free((yyvsp[-1].sval));
      }
#line 2299 "y.tab.c"
    break;

  case 82: /* watch_point_command: BX_TOKEN_WATCH BX_TOKEN_R expression '\n'  */
#line 348 "parser.y"
      {
          bx_dbg_watch(0, (yyvsp[-1].uval), 1); /* BX_READ */
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2308 "y.tab.c"
    break;

  case 83: /* watch_point_command: BX_TOKEN_WATCH BX_TOKEN_READ expression '\n'  */
#line 353 "parser.y"
      {
          bx_dbg_watch(0, (yyvsp[-1].uval), 1); /* BX_READ */
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2317 "y.tab.c"
    break;

  case 84: /* watch_point_command: BX_TOKEN_WATCH BX_TOKEN_WRITE expression '\n'  */
#line 358 "parser.y"
      {
          bx_dbg_watch(1, (yyvsp[-1].uval), 1); /* BX_WRITE */
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2326 "y.tab.c"
    break;

  case 85: /* watch_point_command: BX_TOKEN_WATCH BX_TOKEN_R expression expression '\n'  */
#line 363 "parser.y"
      {
          bx_dbg_watch(0, (yyvsp[-2].uval), (yyvsp[-1].uval)); /* BX_READ */
          free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2335 "y.tab.c"
    break;

  case 86: /* watch_point_command: BX_TOKEN_WATCH BX_TOKEN_READ expression expression '\n'  */
#line 368 "parser.y"
      {
          bx_dbg_watch(0, (yyvsp[-2].uval), (yyvsp[-1].uval)); /* BX_READ */
          free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2344 "y.tab.c"
    break;

  case 87: /* watch_point_command: BX_TOKEN_WATCH BX_TOKEN_WRITE expression expression '\n'  */
#line 373 "parser.y"
      {
          bx_dbg_watch(1, (yyvsp[-2].uval), (yyvsp[-1].uval)); /* BX_WRITE */
          free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2353 "y.tab.c"
    break;

  case 88: /* watch_point_command: BX_TOKEN_UNWATCH '\n'  */
#line 378 "parser.y"
      {
          bx_dbg_unwatch_all();
          free((yyvsp[-1].sval));
      }
#line 2362 "y.tab.c"
    break;

  case 89: /* watch_point_command: BX_TOKEN_UNWATCH expression '\n'  */
#line 383 "parser.y"
      {
          bx_dbg_unwatch((yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2371 "y.tab.c"
    break;

  case 90: /* symbol_command: BX_TOKEN_LOAD_SYMBOLS BX_TOKEN_STRING '\n'  */
#line 391 "parser.y"
      {
        bx_dbg_symbol_command((yyvsp[-1].sval), 0, 0);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2380 "y.tab.c"
    break;

  case 91: /* symbol_command: BX_TOKEN_LOAD_SYMBOLS BX_TOKEN_STRING BX_TOKEN_NUMERIC '\n'  */
#line 396 "parser.y"
      {
        bx_dbg_symbol_command((yyvsp[-2].sval), 0, (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2389 "y.tab.c"
    break;

  case 92: /* symbol_command: BX_TOKEN_LOAD_SYMBOLS BX_TOKEN_GLOBAL BX_TOKEN_STRING '\n'  */
#line 401 "parser.y"
      {
        bx_dbg_symbol_command((yyvsp[-1].sval), 1, 0);
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2398 "y.tab.c"
    break;

  case 93: /* symbol_command: BX_TOKEN_LOAD_SYMBOLS BX_TOKEN_GLOBAL BX_TOKEN_STRING BX_TOKEN_NUMERIC '\n'  */
#line 406 "parser.y"
      {
        bx_dbg_symbol_command((yyvsp[-2].sval), 1, (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2407 "y.tab.c"
    break;

  case 94: /* where_command: BX_TOKEN_WHERE '\n'  */
#line 414 "parser.y"
      {
        bx_dbg_where_command();
        free((yyvsp[-1].sval));
      }
#line 2416 "y.tab.c"
    break;

  case 95: /* print_string_command: BX_TOKEN_PRINT_STRING BX_TOKEN_NUMERIC '\n'  */
#line 422 "parser.y"
      {
        bx_dbg_print_string_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 2425 "y.tab.c"
    break;

  case 96: /* continue_command: BX_TOKEN_CONTINUE '\n'  */
#line 430 "parser.y"
      {
        bx_dbg_continue_command();
        free((yyvsp[-1].sval));
      }
#line 2434 "y.tab.c"
    break;

  case 97: /* stepN_command: BX_TOKEN_STEPN '\n'  */
#line 438 "parser.y"
      {
        bx_dbg_stepN_command(dbg_cpu, 1);
        free((yyvsp[-1].sval));
      }
#line 2443 "y.tab.c"
    break;

  case 98: /* stepN_command: BX_TOKEN_STEPN BX_TOKEN_NUMERIC '\n'  */
#line 443 "parser.y"
      {
        bx_dbg_stepN_command(dbg_cpu, (yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 2452 "y.tab.c"
    break;

  case 99: /* stepN_command: BX_TOKEN_STEPN BX_TOKEN_ALL BX_TOKEN_NUMERIC '\n'  */
#line 448 "parser.y"
      {
        bx_dbg_stepN_command(-1, (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2461 "y.tab.c"
    break;

  case 100: /* stepN_command: BX_TOKEN_STEPN BX_TOKEN_NUMERIC BX_TOKEN_NUMERIC '\n'  */
#line 453 "parser.y"
      {
        bx_dbg_stepN_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval));
      }
#line 2470 "y.tab.c"
    break;

  case 101: /* step_over_command: BX_TOKEN_STEP_OVER '\n'  */
#line 461 "parser.y"
      {
        bx_dbg_step_over_command();
        free((yyvsp[-1].sval));
      }
#line 2479 "y.tab.c"
    break;

  case 102: /* set_command: BX_TOKEN_SET BX_TOKEN_DISASM BX_TOKEN_TOGGLE_ON_OFF '\n'  */
#line 469 "parser.y"
      {
        bx_dbg_set_auto_disassemble((yyvsp[-1].bval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2488 "y.tab.c"
    break;

  case 103: /* set_command: BX_TOKEN_SET BX_TOKEN_SYMBOLNAME '=' BX_TOKEN_NUMERIC '\n'  */
#line 474 "parser.y"
      {
        bx_dbg_set_symbol_command((yyvsp[-3].sval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2497 "y.tab.c"
    break;

  case 104: /* set_command: BX_TOKEN_SET BX_TOKEN_8BL_REG '=' expression '\n'  */
#line 479 "parser.y"
      { 
        bx_dbg_set_reg8l_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2505 "y.tab.c"
    break;

  case 105: /* set_command: BX_TOKEN_SET BX_TOKEN_8BH_REG '=' expression '\n'  */
#line 483 "parser.y"
      { 
        bx_dbg_set_reg8h_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2513 "y.tab.c"
    break;

  case 106: /* set_command: BX_TOKEN_SET BX_TOKEN_16B_REG '=' expression '\n'  */
#line 487 "parser.y"
      { 
        bx_dbg_set_reg16_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2521 "y.tab.c"
    break;

  case 107: /* set_command: BX_TOKEN_SET BX_TOKEN_32B_REG '=' expression '\n'  */
#line 491 "parser.y"
      { 
        bx_dbg_set_reg32_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2529 "y.tab.c"
    break;

  case 108: /* set_command: BX_TOKEN_SET BX_TOKEN_64B_REG '=' expression '\n'  */
#line 495 "parser.y"
      { 
        bx_dbg_set_reg64_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2537 "y.tab.c"
    break;

  case 109: /* set_command: BX_TOKEN_SET BX_TOKEN_REG_EIP '=' expression '\n'  */
#line 499 "parser.y"
      { 
        bx_dbg_set_rip_value((yyvsp[-1].uval));
      }
#line 2545 "y.tab.c"
    break;

  case 110: /* set_command: BX_TOKEN_SET BX_TOKEN_REG_RIP '=' expression '\n'  */
#line 503 "parser.y"
      { 
        bx_dbg_set_rip_value((yyvsp[-1].uval));
      }
#line 2553 "y.tab.c"
    break;

  case 111: /* set_command: BX_TOKEN_SET BX_TOKEN_SEGREG '=' expression '\n'  */
#line 507 "parser.y"
      { 
        bx_dbg_load_segreg((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2561 "y.tab.c"
    break;

  case 112: /* breakpoint_command: BX_TOKEN_VBREAKPOINT '\n'  */
#line 514 "parser.y"
      {
        bx_dbg_vbreakpoint_command(bkAtIP, 0, 0);
        free((yyvsp[-1].sval));
      }
#line 2570 "y.tab.c"
    break;

  case 113: /* breakpoint_command: BX_TOKEN_VBREAKPOINT vexpression ':' vexpression '\n'  */
#line 519 "parser.y"
      {
        bx_dbg_vbreakpoint_command(bkRegular, (yyvsp[-3].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval));
      }
#line 2579 "y.tab.c"
    break;

  case 114: /* breakpoint_command: BX_TOKEN_LBREAKPOINT '\n'  */
#line 524 "parser.y"
      {
        bx_dbg_lbreakpoint_command(bkAtIP, 0);
        free((yyvsp[-1].sval));
      }
#line 2588 "y.tab.c"
    break;

  case 115: /* breakpoint_command: BX_TOKEN_LBREAKPOINT expression '\n'  */
#line 529 "parser.y"
      {
        bx_dbg_lbreakpoint_command(bkRegular, (yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 2597 "y.tab.c"
    break;

  case 116: /* breakpoint_command: BX_TOKEN_LBREAKPOINT BX_TOKEN_STRING '\n'  */
#line 534 "parser.y"
      {
        bx_dbg_lbreakpoint_symbol_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval));free((yyvsp[-1].sval));
      }
#line 2606 "y.tab.c"
    break;

  case 117: /* breakpoint_command: BX_TOKEN_PBREAKPOINT '\n'  */
#line 539 "parser.y"
      {
        bx_dbg_pbreakpoint_command(bkAtIP, 0);
        free((yyvsp[-1].sval));
      }
#line 2615 "y.tab.c"
    break;

  case 118: /* breakpoint_command: BX_TOKEN_PBREAKPOINT expression '\n'  */
#line 544 "parser.y"
      {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 2624 "y.tab.c"
    break;

  case 119: /* breakpoint_command: BX_TOKEN_PBREAKPOINT '*' expression '\n'  */
#line 549 "parser.y"
      {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[-1].uval));
        free((yyvsp[-3].sval));
      }
#line 2633 "y.tab.c"
    break;

  case 120: /* blist_command: BX_TOKEN_LIST_BREAK '\n'  */
#line 557 "parser.y"
      {
        bx_dbg_info_bpoints_command();
        free((yyvsp[-1].sval));
      }
#line 2642 "y.tab.c"
    break;

  case 121: /* slist_command: BX_TOKEN_LIST_SYMBOLS '\n'  */
#line 565 "parser.y"
      {
        bx_dbg_info_symbols_command(0);
        free((yyvsp[-1].sval));
      }
#line 2651 "y.tab.c"
    break;

  case 122: /* slist_command: BX_TOKEN_LIST_SYMBOLS BX_TOKEN_STRING '\n'  */
#line 570 "parser.y"
      {
        bx_dbg_info_symbols_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval));free((yyvsp[-1].sval));
      }
#line 2660 "y.tab.c"
    break;

  case 123: /* info_command: BX_TOKEN_INFO BX_TOKEN_PBREAKPOINT '\n'  */
#line 578 "parser.y"
      {
        bx_dbg_info_bpoints_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2669 "y.tab.c"
    break;

  case 124: /* info_command: BX_TOKEN_INFO BX_TOKEN_CPU '\n'  */
#line 583 "parser.y"
      {
        bx_dbg_info_registers_command(-1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2678 "y.tab.c"
    break;

  case 125: /* info_command: BX_TOKEN_INFO BX_TOKEN_IDT optional_numeric optional_numeric '\n'  */
#line 588 "parser.y"
      {
        bx_dbg_info_idt_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2687 "y.tab.c"
    break;

  case 126: /* info_command: BX_TOKEN_INFO BX_TOKEN_IVT optional_numeric optional_numeric '\n'  */
#line 593 "parser.y"
      {
        bx_dbg_info_ivt_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2696 "y.tab.c"
    break;

  case 127: /* info_command: BX_TOKEN_INFO BX_TOKEN_GDT optional_numeric optional_numeric '\n'  */
#line 598 "parser.y"
      {
        bx_dbg_info_gdt_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2705 "y.tab.c"
    break;

  case 128: /* info_command: BX_TOKEN_INFO BX_TOKEN_LDT optional_numeric optional_numeric '\n'  */
#line 603 "parser.y"
      {
        bx_dbg_info_ldt_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2714 "y.tab.c"
    break;

  case 129: /* info_command: BX_TOKEN_INFO BX_TOKEN_TAB '\n'  */
#line 608 "parser.y"
      {
        bx_dbg_dump_table();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2723 "y.tab.c"
    break;

  case 130: /* info_command: BX_TOKEN_INFO BX_TOKEN_TSS '\n'  */
#line 613 "parser.y"
      {
        bx_dbg_info_tss_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2732 "y.tab.c"
    break;

  case 131: /* info_command: BX_TOKEN_INFO BX_TOKEN_FLAGS '\n'  */
#line 618 "parser.y"
      {
        bx_dbg_info_flags();
        free((yyvsp[-2].sval));
      }
#line 2741 "y.tab.c"
    break;

  case 132: /* info_command: BX_TOKEN_INFO BX_TOKEN_LINUX '\n'  */
#line 623 "parser.y"
      {
        bx_dbg_info_linux_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2750 "y.tab.c"
    break;

  case 133: /* info_command: BX_TOKEN_INFO BX_TOKEN_SYMBOLS '\n'  */
#line 628 "parser.y"
      {
        bx_dbg_info_symbols_command(0);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2759 "y.tab.c"
    break;

  case 134: /* info_command: BX_TOKEN_INFO BX_TOKEN_SYMBOLS BX_TOKEN_STRING '\n'  */
#line 633 "parser.y"
      {
        bx_dbg_info_symbols_command((yyvsp[-1].sval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2768 "y.tab.c"
    break;

  case 135: /* info_command: BX_TOKEN_INFO BX_TOKEN_DEVICE '\n'  */
#line 638 "parser.y"
      {
        bx_dbg_info_device("", "");
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2777 "y.tab.c"
    break;

  case 136: /* info_command: BX_TOKEN_INFO BX_TOKEN_DEVICE BX_TOKEN_STRING '\n'  */
#line 643 "parser.y"
      {
        bx_dbg_info_device((yyvsp[-1].sval), "");
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2786 "y.tab.c"
    break;

  case 137: /* info_command: BX_TOKEN_INFO BX_TOKEN_DEVICE BX_TOKEN_STRING BX_TOKEN_STRING '\n'  */
#line 648 "parser.y"
      {
        bx_dbg_info_device((yyvsp[-2].sval), (yyvsp[-1].sval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2795 "y.tab.c"
    break;

  case 138: /* optional_numeric: %empty  */
#line 655 "parser.y"
               { (yyval.uval) = EMPTY_ARG; }
#line 2801 "y.tab.c"
    break;

  case 140: /* regs_command: BX_TOKEN_REGISTERS '\n'  */
#line 660 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_GENERAL_PURPOSE_REGS);
        free((yyvsp[-1].sval));
      }
#line 2810 "y.tab.c"
    break;

  case 141: /* fpu_regs_command: BX_TOKEN_FPU '\n'  */
#line 668 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_FPU_REGS);
        free((yyvsp[-1].sval));
      }
#line 2819 "y.tab.c"
    break;

  case 142: /* mmx_regs_command: BX_TOKEN_MMX '\n'  */
#line 676 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_MMX_REGS);
        free((yyvsp[-1].sval));
      }
#line 2828 "y.tab.c"
    break;

  case 143: /* sse_regs_command: BX_TOKEN_SSE '\n'  */
#line 684 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_SSE_REGS);
        free((yyvsp[-1].sval));
      }
#line 2837 "y.tab.c"
    break;

  case 144: /* avx_regs_command: BX_TOKEN_AVX '\n'  */
#line 692 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_AVX_REGS);
        free((yyvsp[-1].sval));
      }
#line 2846 "y.tab.c"
    break;

  case 145: /* segment_regs_command: BX_TOKEN_SEGMENT_REGS '\n'  */
#line 700 "parser.y"
      {
        bx_dbg_info_segment_regs_command();
        free((yyvsp[-1].sval));
      }
#line 2855 "y.tab.c"
    break;

  case 146: /* control_regs_command: BX_TOKEN_CONTROL_REGS '\n'  */
#line 708 "parser.y"
      {
        bx_dbg_info_control_regs_command();
        free((yyvsp[-1].sval));
      }
#line 2864 "y.tab.c"
    break;

  case 147: /* debug_regs_command: BX_TOKEN_DEBUG_REGS '\n'  */
#line 716 "parser.y"
      {
        bx_dbg_info_debug_regs_command();
        free((yyvsp[-1].sval));
      }
#line 2873 "y.tab.c"
    break;

  case 148: /* delete_command: BX_TOKEN_DEL_BREAKPOINT BX_TOKEN_NUMERIC '\n'  */
#line 724 "parser.y"
      {
        bx_dbg_del_breakpoint_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 2882 "y.tab.c"
    break;

  case 149: /* bpe_command: BX_TOKEN_ENABLE_BREAKPOINT BX_TOKEN_NUMERIC '\n'  */
#line 732 "parser.y"
      {
        bx_dbg_en_dis_breakpoint_command((yyvsp[-1].uval), 1);
        free((yyvsp[-2].sval));
      }
#line 2891 "y.tab.c"
    break;

  case 150: /* bpd_command: BX_TOKEN_DISABLE_BREAKPOINT BX_TOKEN_NUMERIC '\n'  */
#line 739 "parser.y"
      {
        bx_dbg_en_dis_breakpoint_command((yyvsp[-1].uval), 0);
        free((yyvsp[-2].sval));
      }
#line 2900 "y.tab.c"
    break;

  case 151: /* quit_command: BX_TOKEN_QUIT '\n'  */
#line 747 "parser.y"
      {
        bx_dbg_quit_command();
        free((yyvsp[-1].sval));
      }
#line 2909 "y.tab.c"
    break;

  case 152: /* examine_command: BX_TOKEN_EXAMINE BX_TOKEN_XFORMAT expression '\n'  */
#line 755 "parser.y"
      {
        bx_dbg_examine_command((yyvsp[-3].sval), (yyvsp[-2].sval),1, (yyvsp[-1].uval), 1);
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2918 "y.tab.c"
    break;

  case 153: /* examine_command: BX_TOKEN_EXAMINE BX_TOKEN_XFORMAT '\n'  */
#line 760 "parser.y"
      {
        bx_dbg_examine_command((yyvsp[-2].sval), (yyvsp[-1].sval),1, 0, 0);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2927 "y.tab.c"
    break;

  case 154: /* examine_command: BX_TOKEN_EXAMINE expression '\n'  */
#line 765 "parser.y"
      {
        bx_dbg_examine_command((yyvsp[-2].sval), NULL,0, (yyvsp[-1].uval), 1);
        free((yyvsp[-2].sval));
      }
#line 2936 "y.tab.c"
    break;

  case 155: /* examine_command: BX_TOKEN_EXAMINE '\n'  */
#line 770 "parser.y"
      {
        bx_dbg_examine_command((yyvsp[-1].sval), NULL,0, 0, 0);
        free((yyvsp[-1].sval));
      }
#line 2945 "y.tab.c"
    break;

  case 156: /* restore_command: BX_TOKEN_RESTORE BX_TOKEN_STRING BX_TOKEN_STRING '\n'  */
#line 778 "parser.y"
      {
        bx_dbg_restore_command((yyvsp[-2].sval), (yyvsp[-1].sval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2954 "y.tab.c"
    break;

  case 157: /* writemem_command: BX_TOKEN_WRITEMEM BX_TOKEN_STRING BX_TOKEN_NUMERIC BX_TOKEN_NUMERIC '\n'  */
#line 786 "parser.y"
      {
        bx_dbg_writemem_command((yyvsp[-3].sval), (yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2963 "y.tab.c"
    break;

  case 158: /* setpmem_command: BX_TOKEN_SETPMEM BX_TOKEN_NUMERIC BX_TOKEN_NUMERIC BX_TOKEN_NUMERIC '\n'  */
#line 794 "parser.y"
      {
        bx_dbg_setpmem_command((yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval));
      }
#line 2972 "y.tab.c"
    break;

  case 159: /* query_command: BX_TOKEN_QUERY BX_TOKEN_PENDING '\n'  */
#line 802 "parser.y"
      {
        bx_dbg_query_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2981 "y.tab.c"
    break;

  case 160: /* take_command: BX_TOKEN_TAKE BX_TOKEN_DMA '\n'  */
#line 810 "parser.y"
      {
        bx_dbg_take_command((yyvsp[-1].sval), 1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2990 "y.tab.c"
    break;

  case 161: /* take_command: BX_TOKEN_TAKE BX_TOKEN_DMA BX_TOKEN_NUMERIC '\n'  */
#line 815 "parser.y"
      {
        bx_dbg_take_command((yyvsp[-2].sval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2999 "y.tab.c"
    break;

  case 162: /* take_command: BX_TOKEN_TAKE BX_TOKEN_IRQ '\n'  */
#line 820 "parser.y"
      {
        bx_dbg_take_command((yyvsp[-1].sval), 1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3008 "y.tab.c"
    break;

  case 163: /* disassemble_command: BX_TOKEN_DISASM '\n'  */
#line 828 "parser.y"
      {
        bx_dbg_disassemble_current(NULL);
        free((yyvsp[-1].sval));
      }
#line 3017 "y.tab.c"
    break;

  case 164: /* disassemble_command: BX_TOKEN_DISASM expression '\n'  */
#line 833 "parser.y"
      {
        bx_dbg_disassemble_command(NULL, (yyvsp[-1].uval), (yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 3026 "y.tab.c"
    break;

  case 165: /* disassemble_command: BX_TOKEN_DISASM expression expression '\n'  */
#line 838 "parser.y"
      {
        bx_dbg_disassemble_command(NULL, (yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval));
      }
#line 3035 "y.tab.c"
    break;

  case 166: /* disassemble_command: BX_TOKEN_DISASM BX_TOKEN_DISFORMAT '\n'  */
#line 843 "parser.y"
      {
        bx_dbg_disassemble_current((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3044 "y.tab.c"
    break;

  case 167: /* disassemble_command: BX_TOKEN_DISASM BX_TOKEN_DISFORMAT expression '\n'  */
#line 848 "parser.y"
      {
        bx_dbg_disassemble_command((yyvsp[-2].sval), (yyvsp[-1].uval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 3053 "y.tab.c"
    break;

  case 168: /* disassemble_command: BX_TOKEN_DISASM BX_TOKEN_DISFORMAT expression expression '\n'  */
#line 853 "parser.y"
      {
        bx_dbg_disassemble_command((yyvsp[-3].sval), (yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3062 "y.tab.c"
    break;

  case 169: /* disassemble_command: BX_TOKEN_DISASM BX_TOKEN_SWITCH_MODE '\n'  */
#line 858 "parser.y"
      {
        bx_dbg_disassemble_switch_mode();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3071 "y.tab.c"
    break;

  case 170: /* disassemble_command: BX_TOKEN_DISASM BX_TOKEN_HEX BX_TOKEN_TOGGLE_ON_OFF '\n'  */
#line 863 "parser.y"
      {
        bx_dbg_disassemble_hex_mode_switch((yyvsp[-1].bval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 3080 "y.tab.c"
    break;

  case 171: /* disassemble_command: BX_TOKEN_DISASM BX_TOKEN_SIZE '=' BX_TOKEN_NUMERIC '\n'  */
#line 868 "parser.y"
      {
        bx_dbg_set_disassemble_size((yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3089 "y.tab.c"
    break;

  case 172: /* instrument_command: BX_TOKEN_INSTRUMENT BX_TOKEN_STOP '\n'  */
#line 876 "parser.y"
      {
        bx_dbg_instrument_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3098 "y.tab.c"
    break;

  case 173: /* instrument_command: BX_TOKEN_INSTRUMENT BX_TOKEN_COMMAND '\n'  */
#line 881 "parser.y"
      {
        bx_dbg_instrument_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3107 "y.tab.c"
    break;

  case 174: /* doit_command: BX_TOKEN_DOIT BX_TOKEN_NUMERIC '\n'  */
#line 889 "parser.y"
      {
        bx_dbg_doit_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 3116 "y.tab.c"
    break;

  case 175: /* crc_command: BX_TOKEN_CRC BX_TOKEN_NUMERIC BX_TOKEN_NUMERIC '\n'  */
#line 897 "parser.y"
      {
        bx_dbg_crc_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval));
      }
#line 3125 "y.tab.c"
    break;

  case 176: /* help_command: BX_TOKEN_HELP BX_TOKEN_QUIT '\n'  */
#line 905 "parser.y"
       {
         dbg_printf("q|quit|exit - quit debugger and emulator execution\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3134 "y.tab.c"
    break;

  case 177: /* help_command: BX_TOKEN_HELP BX_TOKEN_CONTINUE '\n'  */
#line 910 "parser.y"
       {
         dbg_printf("c|cont|continue - continue executing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3143 "y.tab.c"
    break;

  case 178: /* help_command: BX_TOKEN_HELP BX_TOKEN_STEPN '\n'  */
#line 915 "parser.y"
       {
         dbg_printf("s|step [count] - execute #count instructions on current processor (default is one instruction)\n");
         dbg_printf("s|step [cpu] <count> - execute #count instructions on processor #cpu\n");
         dbg_printf("s|step all <count> - execute #count instructions on all the processors\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3154 "y.tab.c"
    break;

  case 179: /* help_command: BX_TOKEN_HELP BX_TOKEN_STEP_OVER '\n'  */
#line 922 "parser.y"
       {
         dbg_printf("n|next|p - execute instruction stepping over subroutines\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3163 "y.tab.c"
    break;

  case 180: /* help_command: BX_TOKEN_HELP BX_TOKEN_VBREAKPOINT '\n'  */
#line 927 "parser.y"
       {
         dbg_printf("vb|vbreak <seg:offset> - set a virtual address instruction breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3172 "y.tab.c"
    break;

  case 181: /* help_command: BX_TOKEN_HELP BX_TOKEN_LBREAKPOINT '\n'  */
#line 932 "parser.y"
       {
         dbg_printf("lb|lbreak <addr> - set a linear address instruction breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3181 "y.tab.c"
    break;

  case 182: /* help_command: BX_TOKEN_HELP BX_TOKEN_PBREAKPOINT '\n'  */
#line 937 "parser.y"
       {
         dbg_printf("p|pb|break|pbreak <addr> - set a physical address instruction breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3190 "y.tab.c"
    break;

  case 183: /* help_command: BX_TOKEN_HELP BX_TOKEN_DEL_BREAKPOINT '\n'  */
#line 942 "parser.y"
       {
         dbg_printf("d|del|delete <n> - delete a breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3199 "y.tab.c"
    break;

  case 184: /* help_command: BX_TOKEN_HELP BX_TOKEN_ENABLE_BREAKPOINT '\n'  */
#line 947 "parser.y"
       {
         dbg_printf("bpe <n> - enable a breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3208 "y.tab.c"
    break;

  case 185: /* help_command: BX_TOKEN_HELP BX_TOKEN_DISABLE_BREAKPOINT '\n'  */
#line 952 "parser.y"
       {
         dbg_printf("bpd <n> - disable a breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3217 "y.tab.c"
    break;

  case 186: /* help_command: BX_TOKEN_HELP BX_TOKEN_LIST_BREAK '\n'  */
#line 957 "parser.y"
       {
         dbg_printf("blist - list all breakpoints (same as 'info break')\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3226 "y.tab.c"
    break;

  case 187: /* help_command: BX_TOKEN_HELP BX_TOKEN_MODEBP '\n'  */
#line 962 "parser.y"
       {
         dbg_printf("modebp - toggles mode switch breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3235 "y.tab.c"
    break;

  case 188: /* help_command: BX_TOKEN_HELP BX_TOKEN_VMEXITBP '\n'  */
#line 967 "parser.y"
       {
         dbg_printf("vmexitbp - toggles VMEXIT switch breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3244 "y.tab.c"
    break;

  case 189: /* help_command: BX_TOKEN_HELP BX_TOKEN_CRC '\n'  */
#line 972 "parser.y"
       {
         dbg_printf("crc <addr1> <addr2> - show CRC32 for physical memory range addr1..addr2\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3253 "y.tab.c"
    break;

  case 190: /* help_command: BX_TOKEN_HELP BX_TOKEN_TRACE '\n'  */
#line 977 "parser.y"
       {
         dbg_printf("trace on  - print disassembly for every executed instruction\n");
         dbg_printf("trace off - disable instruction tracing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3263 "y.tab.c"
    break;

  case 191: /* help_command: BX_TOKEN_HELP BX_TOKEN_TRACEREG '\n'  */
#line 983 "parser.y"
       {
         dbg_printf("trace-reg on  - print all registers before every executed instruction\n");
         dbg_printf("trace-reg off - disable registers state tracing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3273 "y.tab.c"
    break;

  case 192: /* help_command: BX_TOKEN_HELP BX_TOKEN_TRACEMEM '\n'  */
#line 989 "parser.y"
       {
         dbg_printf("trace-mem on  - print all memory accesses occured during instruction execution\n");
         dbg_printf("trace-mem off - disable memory accesses tracing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3283 "y.tab.c"
    break;

  case 193: /* help_command: BX_TOKEN_HELP BX_TOKEN_RESTORE '\n'  */
#line 995 "parser.y"
       {
         dbg_printf("restore <param_name> [path] - restore bochs root param from the file\n");
         dbg_printf("for example:\n");
         dbg_printf("restore \"cpu0\" - restore CPU #0 from file \"cpu0\" in current directory\n");
         dbg_printf("restore \"cpu0\" \"/save\" - restore CPU #0 from file \"cpu0\" located in directory \"/save\"\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3295 "y.tab.c"
    break;

  case 194: /* help_command: BX_TOKEN_HELP BX_TOKEN_PTIME '\n'  */
#line 1003 "parser.y"
       {
         dbg_printf("ptime - print current time (number of ticks since start of simulation)\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3304 "y.tab.c"
    break;

  case 195: /* help_command: BX_TOKEN_HELP BX_TOKEN_TIMEBP '\n'  */
#line 1008 "parser.y"
       {
         dbg_printf("sb <delta> - insert a time breakpoint delta instructions into the future\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3313 "y.tab.c"
    break;

  case 196: /* help_command: BX_TOKEN_HELP BX_TOKEN_TIMEBP_ABSOLUTE '\n'  */
#line 1013 "parser.y"
       {
         dbg_printf("sba <time> - insert breakpoint at specific time\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3322 "y.tab.c"
    break;

  case 197: /* help_command: BX_TOKEN_HELP BX_TOKEN_PRINT_STACK '\n'  */
#line 1018 "parser.y"
       {
         dbg_printf("print-stack [num_words] - print the num_words top 16 bit words on the stack\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3331 "y.tab.c"
    break;

  case 198: /* help_command: BX_TOKEN_HELP BX_TOKEN_LOAD_SYMBOLS '\n'  */
#line 1023 "parser.y"
       {
         dbg_printf("ldsym [global] <filename> [offset] - load symbols from file\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3340 "y.tab.c"
    break;

  case 199: /* help_command: BX_TOKEN_HELP BX_TOKEN_LIST_SYMBOLS '\n'  */
#line 1028 "parser.y"
       {
         dbg_printf("slist [string] - list symbols whose preffix is string (same as 'info symbols')\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3349 "y.tab.c"
    break;

  case 200: /* help_command: BX_TOKEN_HELP BX_TOKEN_REGISTERS '\n'  */
#line 1033 "parser.y"
       {
         dbg_printf("r|reg|regs|registers - list of CPU registers and their contents (same as 'info registers')\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3358 "y.tab.c"
    break;

  case 201: /* help_command: BX_TOKEN_HELP BX_TOKEN_FPU '\n'  */
#line 1038 "parser.y"
       {
         dbg_printf("fp|fpu - print FPU state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3367 "y.tab.c"
    break;

  case 202: /* help_command: BX_TOKEN_HELP BX_TOKEN_MMX '\n'  */
#line 1043 "parser.y"
       {
         dbg_printf("mmx - print MMX state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3376 "y.tab.c"
    break;

  case 203: /* help_command: BX_TOKEN_HELP BX_TOKEN_SSE '\n'  */
#line 1048 "parser.y"
       {
         dbg_printf("xmm|sse - print SSE state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3385 "y.tab.c"
    break;

  case 204: /* help_command: BX_TOKEN_HELP BX_TOKEN_AVX '\n'  */
#line 1053 "parser.y"
       {
         dbg_printf("ymm - print AVX state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3394 "y.tab.c"
    break;

  case 205: /* help_command: BX_TOKEN_HELP BX_TOKEN_SEGMENT_REGS '\n'  */
#line 1058 "parser.y"
       {
         dbg_printf("sreg - show segment registers\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3403 "y.tab.c"
    break;

  case 206: /* help_command: BX_TOKEN_HELP BX_TOKEN_CONTROL_REGS '\n'  */
#line 1063 "parser.y"
       {
         dbg_printf("creg - show control registers\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3412 "y.tab.c"
    break;

  case 207: /* help_command: BX_TOKEN_HELP BX_TOKEN_DEBUG_REGS '\n'  */
#line 1068 "parser.y"
       {
         dbg_printf("dreg - show debug registers\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3421 "y.tab.c"
    break;

  case 208: /* help_command: BX_TOKEN_HELP BX_TOKEN_WRITEMEM '\n'  */
#line 1073 "parser.y"
       {
         dbg_printf("writemem <filename> <laddr> <len> - dump 'len' bytes of virtual memory starting from the linear address 'laddr' into the file\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3430 "y.tab.c"
    break;

  case 209: /* help_command: BX_TOKEN_HELP BX_TOKEN_SETPMEM '\n'  */
#line 1078 "parser.y"
       {
         dbg_printf("setpmem <addr> <datasize> <val> - set physical memory location of size 'datasize' to value 'val'\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3439 "y.tab.c"
    break;

  case 210: /* help_command: BX_TOKEN_HELP BX_TOKEN_DISASM '\n'  */
#line 1083 "parser.y"
       {
         dbg_printf("u|disasm [/count] <start> <end> - disassemble instructions for given linear address\n");
         dbg_printf("    Optional 'count' is the number of disassembled instructions\n");
         dbg_printf("u|disasm switch-mode - switch between Intel and AT&T disassembler syntax\n");
         dbg_printf("u|disasm hex on/off - control disasm offsets and displacements format\n");
         dbg_printf("u|disasm size = n - tell debugger what segment size [16|32|64] to use\n");
         dbg_printf("       when \"disassemble\" command is used.\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3453 "y.tab.c"
    break;

  case 211: /* help_command: BX_TOKEN_HELP BX_TOKEN_WATCH '\n'  */
#line 1093 "parser.y"
       {
         dbg_printf("watch - print current watch point status\n");
         dbg_printf("watch stop - stop simulation when a watchpoint is encountred\n");
         dbg_printf("watch continue - do not stop the simulation when watch point is encountred\n");
         dbg_printf("watch r|read addr - insert a read watch point at physical address addr\n");
         dbg_printf("watch w|write addr - insert a write watch point at physical address addr\n");
         dbg_printf("watch r|read addr <len> - insert a read watch point at physical address addr with range <len>\n");
         dbg_printf("watch w|write addr <len> - insert a write watch point at physical address addr with range <len>\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3468 "y.tab.c"
    break;

  case 212: /* help_command: BX_TOKEN_HELP BX_TOKEN_UNWATCH '\n'  */
#line 1104 "parser.y"
       {
         dbg_printf("unwatch      - remove all watch points\n");
         dbg_printf("unwatch addr - remove a watch point\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3478 "y.tab.c"
    break;

  case 213: /* help_command: BX_TOKEN_HELP BX_TOKEN_EXAMINE '\n'  */
#line 1110 "parser.y"
       {
         dbg_printf("x  /nuf <addr> - examine memory at linear address\n");
         dbg_printf("xp /nuf <addr> - examine memory at physical address\n");
         dbg_printf("    nuf is a sequence of numbers (how much values to display)\n");
         dbg_printf("    and one or more of the [mxduotcsibhwg] format specificators:\n");
         dbg_printf("    x,d,u,o,t,c,s,i select the format of the output (they stand for\n");
         dbg_printf("        hex, decimal, unsigned, octal, binary, char, asciiz, instr)\n");
         dbg_printf("    b,h,w,g select the size of a data element (for byte, half-word,\n");
         dbg_printf("        word and giant word)\n");
         dbg_printf("    m selects an alternative output format (memory dump)\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3495 "y.tab.c"
    break;

  case 214: /* help_command: BX_TOKEN_HELP BX_TOKEN_INSTRUMENT '\n'  */
#line 1123 "parser.y"
       {
         dbg_printf("instrument <command> - calls BX_INSTR_DEBUG_CMD instrumentation callback with <command>\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3504 "y.tab.c"
    break;

  case 215: /* help_command: BX_TOKEN_HELP BX_TOKEN_SET '\n'  */
#line 1128 "parser.y"
       {
         dbg_printf("set <regname> = <expr> - set register value to expression\n");
         dbg_printf("set eflags = <expr> - set eflags value to expression, not all flags can be modified\n");
         dbg_printf("set $cpu = <N> - move debugger control to cpu <N> in SMP simulation\n");
         dbg_printf("set $auto_disassemble = 1 - cause debugger to disassemble current instruction\n");
         dbg_printf("       every time execution stops\n");
         dbg_printf("set u|disasm|disassemble on  - same as 'set $auto_disassemble = 1'\n");
         dbg_printf("set u|disasm|disassemble off - same as 'set $auto_disassemble = 0'\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3519 "y.tab.c"
    break;

  case 216: /* help_command: BX_TOKEN_HELP BX_TOKEN_PAGE '\n'  */
#line 1139 "parser.y"
       {
         dbg_printf("page <laddr> - show linear to physical xlation for linear address laddr\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3528 "y.tab.c"
    break;

  case 217: /* help_command: BX_TOKEN_HELP BX_TOKEN_INFO '\n'  */
#line 1144 "parser.y"
       {
         dbg_printf("info break - show information about current breakpoint status\n");
         dbg_printf("info idt - show interrupt descriptor table\n");
         dbg_printf("info ivt - show interrupt vector table\n");
         dbg_printf("info gdt - show global descriptor table\n");
         dbg_printf("info tss - show current task state segment\n");
         dbg_printf("info tab - show page tables\n");
         dbg_printf("info eflags - show decoded EFLAGS register\n");
         dbg_printf("info symbols [string] - list symbols whose prefix is string\n");
         dbg_printf("info device - show list of devices supported by this command\n");
         dbg_printf("info device [string] - show state of device specified in string\n");
         dbg_printf("info device [string] [string] - show state of device with options\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3547 "y.tab.c"
    break;

  case 218: /* help_command: BX_TOKEN_HELP BX_TOKEN_SHOW '\n'  */
#line 1159 "parser.y"
       {
         dbg_printf("show <command> - toggles show symbolic info (calls to begin with)\n");
         dbg_printf("show - shows current show mode\n");
         dbg_printf("show mode - show, when processor switch mode\n");
         dbg_printf("show int - show, when interrupt is happens\n");
         dbg_printf("show call - show, when call is happens\n");
         dbg_printf("show off - toggles off symbolic info\n");
         dbg_printf("show dbg-all - turn on all show flags\n");
         dbg_printf("show dbg-none - turn off all show flags\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3563 "y.tab.c"
    break;

  case 219: /* help_command: BX_TOKEN_HELP BX_TOKEN_CALC '\n'  */
#line 1171 "parser.y"
       {
         dbg_printf("calc|? <expr> - calculate a expression and display the result.\n");
         dbg_printf("    'expr' can reference any general-purpose and segment\n");
         dbg_printf("    registers, use any arithmetic and logic operations, and\n");
         dbg_printf("    also the special ':' operator which computes the linear\n");
         dbg_printf("    address for a segment:offset (in real and v86 mode) or\n");
         dbg_printf("    of a selector:offset (in protected mode) pair.\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3577 "y.tab.c"
    break;

  case 220: /* help_command: BX_TOKEN_HELP BX_TOKEN_HELP '\n'  */
#line 1181 "parser.y"
       {
         bx_dbg_print_help();
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3586 "y.tab.c"
    break;

  case 221: /* help_command: BX_TOKEN_HELP '\n'  */
#line 1186 "parser.y"
       {
         bx_dbg_print_help();
         free((yyvsp[-1].sval));
       }
#line 3595 "y.tab.c"
    break;

  case 222: /* calc_command: BX_TOKEN_CALC expression '\n'  */
#line 1194 "parser.y"
   {
     bx_dbg_calc_command((yyvsp[-1].uval));
     free((yyvsp[-2].sval));
   }
#line 3604 "y.tab.c"
    break;

  case 223: /* vexpression: BX_TOKEN_NUMERIC  */
#line 1211 "parser.y"
                                     { (yyval.uval) = (yyvsp[0].uval); }
#line 3610 "y.tab.c"
    break;

  case 224: /* vexpression: BX_TOKEN_STRING  */
#line 1212 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_symbol_value((yyvsp[0].sval)); free((yyvsp[0].sval));}
#line 3616 "y.tab.c"
    break;

  case 225: /* vexpression: BX_TOKEN_8BL_REG  */
#line 1213 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg8l_value((yyvsp[0].uval)); }
#line 3622 "y.tab.c"
    break;

  case 226: /* vexpression: BX_TOKEN_8BH_REG  */
#line 1214 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg8h_value((yyvsp[0].uval)); }
#line 3628 "y.tab.c"
    break;

  case 227: /* vexpression: BX_TOKEN_16B_REG  */
#line 1215 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg16_value((yyvsp[0].uval)); }
#line 3634 "y.tab.c"
    break;

  case 228: /* vexpression: BX_TOKEN_32B_REG  */
#line 1216 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg32_value((yyvsp[0].uval)); }
#line 3640 "y.tab.c"
    break;

  case 229: /* vexpression: BX_TOKEN_64B_REG  */
#line 1217 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg64_value((yyvsp[0].uval)); }
#line 3646 "y.tab.c"
    break;

  case 230: /* vexpression: BX_TOKEN_SEGREG  */
#line 1218 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_selector_value((yyvsp[0].uval)); }
#line 3652 "y.tab.c"
    break;

  case 231: /* vexpression: BX_TOKEN_REG_IP  */
#line 1219 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_ip (); }
#line 3658 "y.tab.c"
    break;

  case 232: /* vexpression: BX_TOKEN_REG_EIP  */
#line 1220 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_eip(); }
#line 3664 "y.tab.c"
    break;

  case 233: /* vexpression: BX_TOKEN_REG_RIP  */
#line 1221 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_instruction_pointer(); }
#line 3670 "y.tab.c"
    break;

  case 234: /* vexpression: vexpression '+' vexpression  */
#line 1222 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) + (yyvsp[0].uval); }
#line 3676 "y.tab.c"
    break;

  case 235: /* vexpression: vexpression '-' vexpression  */
#line 1223 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) - (yyvsp[0].uval); }
#line 3682 "y.tab.c"
    break;

  case 236: /* vexpression: vexpression '*' vexpression  */
#line 1224 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) * (yyvsp[0].uval); }
#line 3688 "y.tab.c"
    break;

  case 237: /* vexpression: vexpression '/' vexpression  */
#line 1225 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) / (yyvsp[0].uval); }
#line 3694 "y.tab.c"
    break;

  case 238: /* vexpression: vexpression BX_TOKEN_RSHIFT vexpression  */
#line 1226 "parser.y"
                                             { (yyval.uval) = (yyvsp[-2].uval) >> (yyvsp[0].uval); }
#line 3700 "y.tab.c"
    break;

  case 239: /* vexpression: vexpression BX_TOKEN_LSHIFT vexpression  */
#line 1227 "parser.y"
                                             { (yyval.uval) = (yyvsp[-2].uval) << (yyvsp[0].uval); }
#line 3706 "y.tab.c"
    break;

  case 240: /* vexpression: vexpression '|' vexpression  */
#line 1228 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) | (yyvsp[0].uval); }
#line 3712 "y.tab.c"
    break;

  case 241: /* vexpression: vexpression '^' vexpression  */
#line 1229 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) ^ (yyvsp[0].uval); }
#line 3718 "y.tab.c"
    break;

  case 242: /* vexpression: vexpression '&' vexpression  */
#line 1230 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) & (yyvsp[0].uval); }
#line 3724 "y.tab.c"
    break;

  case 243: /* vexpression: '!' vexpression  */
#line 1231 "parser.y"
                                     { (yyval.uval) = !(yyvsp[0].uval); }
#line 3730 "y.tab.c"
    break;

  case 244: /* vexpression: '-' vexpression  */
#line 1232 "parser.y"
                                     { (yyval.uval) = -(yyvsp[0].uval); }
#line 3736 "y.tab.c"
    break;

  case 245: /* vexpression: '(' vexpression ')'  */
#line 1233 "parser.y"
                                     { (yyval.uval) = (yyvsp[-1].uval); }
#line 3742 "y.tab.c"
    break;

  case 246: /* expression: BX_TOKEN_NUMERIC  */
#line 1239 "parser.y"
                                     { (yyval.uval) = (yyvsp[0].uval); }
#line 3748 "y.tab.c"
    break;

  case 247: /* expression: BX_TOKEN_STRING  */
#line 1240 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_symbol_value((yyvsp[0].sval)); free((yyvsp[0].sval));}
#line 3754 "y.tab.c"
    break;

  case 248: /* expression: BX_TOKEN_8BL_REG  */
#line 1241 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg8l_value((yyvsp[0].uval)); }
#line 3760 "y.tab.c"
    break;

  case 249: /* expression: BX_TOKEN_8BH_REG  */
#line 1242 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg8h_value((yyvsp[0].uval)); }
#line 3766 "y.tab.c"
    break;

  case 250: /* expression: BX_TOKEN_16B_REG  */
#line 1243 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg16_value((yyvsp[0].uval)); }
#line 3772 "y.tab.c"
    break;

  case 251: /* expression: BX_TOKEN_32B_REG  */
#line 1244 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg32_value((yyvsp[0].uval)); }
#line 3778 "y.tab.c"
    break;

  case 252: /* expression: BX_TOKEN_64B_REG  */
#line 1245 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg64_value((yyvsp[0].uval)); }
#line 3784 "y.tab.c"
    break;

  case 253: /* expression: BX_TOKEN_SEGREG  */
#line 1246 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_selector_value((yyvsp[0].uval)); }
#line 3790 "y.tab.c"
    break;

  case 254: /* expression: BX_TOKEN_REG_IP  */
#line 1247 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_ip (); }
#line 3796 "y.tab.c"
    break;

  case 255: /* expression: BX_TOKEN_REG_EIP  */
#line 1248 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_eip(); }
#line 3802 "y.tab.c"
    break;

  case 256: /* expression: BX_TOKEN_REG_RIP  */
#line 1249 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_instruction_pointer(); }
#line 3808 "y.tab.c"
    break;

  case 257: /* expression: expression ':' expression  */
#line 1250 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_laddr ((yyvsp[-2].uval), (yyvsp[0].uval)); }
#line 3814 "y.tab.c"
    break;

  case 258: /* expression: expression '+' expression  */
#line 1251 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) + (yyvsp[0].uval); }
#line 3820 "y.tab.c"
    break;

  case 259: /* expression: expression '-' expression  */
#line 1252 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) - (yyvsp[0].uval); }
#line 3826 "y.tab.c"
    break;

  case 260: /* expression: expression '*' expression  */
#line 1253 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) * (yyvsp[0].uval); }
#line 3832 "y.tab.c"
    break;

  case 261: /* expression: expression '/' expression  */
#line 1254 "parser.y"
                                     { (yyval.uval) = ((yyvsp[0].uval) != 0) ? (yyvsp[-2].uval) / (yyvsp[0].uval) : 0; }
#line 3838 "y.tab.c"
    break;

  case 262: /* expression: expression BX_TOKEN_RSHIFT expression  */
#line 1255 "parser.y"
                                           { (yyval.uval) = (yyvsp[-2].uval) >> (yyvsp[0].uval); }
#line 3844 "y.tab.c"
    break;

  case 263: /* expression: expression BX_TOKEN_LSHIFT expression  */
#line 1256 "parser.y"
                                           { (yyval.uval) = (yyvsp[-2].uval) << (yyvsp[0].uval); }
#line 3850 "y.tab.c"
    break;

  case 264: /* expression: expression '|' expression  */
#line 1257 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) | (yyvsp[0].uval); }
#line 3856 "y.tab.c"
    break;

  case 265: /* expression: expression '^' expression  */
#line 1258 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) ^ (yyvsp[0].uval); }
#line 3862 "y.tab.c"
    break;

  case 266: /* expression: expression '&' expression  */
#line 1259 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) & (yyvsp[0].uval); }
#line 3868 "y.tab.c"
    break;

  case 267: /* expression: '!' expression  */
#line 1260 "parser.y"
                                     { (yyval.uval) = !(yyvsp[0].uval); }
#line 3874 "y.tab.c"
    break;

  case 268: /* expression: '-' expression  */
#line 1261 "parser.y"
                                     { (yyval.uval) = -(yyvsp[0].uval); }
#line 3880 "y.tab.c"
    break;

  case 269: /* expression: '*' expression  */
#line 1262 "parser.y"
                                     { (yyval.uval) = bx_dbg_lin_indirect((yyvsp[0].uval)); }
#line 3886 "y.tab.c"
    break;

  case 270: /* expression: '@' expression  */
#line 1263 "parser.y"
                                     { (yyval.uval) = bx_dbg_phy_indirect((yyvsp[0].uval)); }
#line 3892 "y.tab.c"
    break;

  case 271: /* expression: '(' expression ')'  */
#line 1264 "parser.y"
                                     { (yyval.uval) = (yyvsp[-1].uval); }
#line 3898 "y.tab.c"
    break;


#line 3902 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1267 "parser.y"

#endif  /* if BX_DEBUGGER */
/* The #endif is appended by the makefile after running yacc. */
