/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 285 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE bxlval;

int bxparse (void);

#endif /* !YY_BX_Y_TAB_H_INCLUDED  */
