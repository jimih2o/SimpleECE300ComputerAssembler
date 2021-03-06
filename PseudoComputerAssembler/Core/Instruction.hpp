#pragma once

#include "Defs.hpp"
#include <string> 

enum InstructionIndex {
  NOP,
  GOTO,
  GREATER,
  LESS,
  EQUAL,
  BRANCHIFTRUE,
  INCREMENT,
  LOAD,
  TWIDDLE,
  LOGICAND,
  LOGICOR,
  LOGICNEGATE,
  BITAND,
  BITOR,
  ADD,
  SUB,
  MULT,
  DIV,
  SHIFTLEFT,
  SHIFTRIGHT,
  STORE,
  CLEARREG,
  BITSET,
  BITCLEAR,
  LOADALU1,
  LOADALU2,
  LOADLITERAL,
  LOADSTATUS,
  STORESTATUS,
  LOADUART,
  LOADSUP1LO,
  LOADSUP1LOMID,
  LOADSUP1HIMID,
  LOADSUP1HI,
  LOADSUP2LO,
  LOADSUP2LOMID,
  LOADSUP2HIMID,
  LOADSUP2HI,
  STORESUPLO,
  STORESUPLOMID,
  STORESUPHIMID,
  STORESUPHI,
  ADDSUP,
  SUBSUP,
  MULTSUP
} ;

#define InstructionStringify(X) (#X)

struct Instruction {
	InstructionIndex mIndex ;
	std::string mName ;
	Uint32 mHexCode ;
} ;

Instruction const gInstructions[] = {
  { 
    NOP,
    InstructionStringify(NOP),
    NOP
  },
  {
    GOTO,
    InstructionStringify(GOTO),
    GOTO
  },
  {
    GREATER,
    InstructionStringify(GREATER),
    GREATER
  },
  {
    LESS,
    InstructionStringify(LESS),
    LESS
  },
  {
    EQUAL,
    InstructionStringify(EQUAL),
    EQUAL
  },
  {
    BRANCHIFTRUE,
    InstructionStringify(BRANCHIFTRUE),
    BRANCHIFTRUE
  },
  {
    INCREMENT,
    InstructionStringify(INCREMENT),
    INCREMENT
  },
  {
    LOAD,
    InstructionStringify(LOAD),
    LOAD
  },
  {
    TWIDDLE,
    InstructionStringify(TWIDDLE),
    TWIDDLE
  },
  {
    LOGICAND,
    InstructionStringify(LOGICAND),
    LOGICAND
  },
  {
    LOGICOR,
    InstructionStringify(LOGICOR),
    LOGICOR
  },
  {
    LOGICNEGATE,
    InstructionStringify(LOGICNEGATE),
    LOGICNEGATE
  },
  {
    BITAND,
    InstructionStringify(BITAND),
    BITAND
  }, 
  {
    BITOR,
    InstructionStringify(BITOR),
    BITOR
  },
  {
    ADD,
    InstructionStringify(ADD),
    ADD
  },
  {
    SUB,
    InstructionStringify(SUB),
    SUB
  },
  {
    MULT,
    InstructionStringify(MULT),
    MULT
  },
  {
    DIV,
    InstructionStringify(DIV),
    DIV
  },
  {
    SHIFTLEFT,
    InstructionStringify(SHIFTLEFT),
    SHIFTLEFT
  },
  {
    SHIFTRIGHT,
    InstructionStringify(SHIFTRIGHT),
    SHIFTRIGHT
  },
  {
    STORE,
    InstructionStringify(STORE),
    STORE
  },
  {
    CLEARREG,
    InstructionStringify(CLEARREG),
    CLEARREG
  },
  {
    BITSET,
    InstructionStringify(BITSET),
    BITSET
  },
  {
    BITCLEAR,
    InstructionStringify(BITCLEAR),
    BITCLEAR
  },
  {
    LOADALU1,
    InstructionStringify(LOADALU1),
    LOADALU1
  },
  {
    LOADALU2,
    InstructionStringify(LOADALU2),
    LOADALU2
  },
  {
    LOADLITERAL,
    InstructionStringify(LOADLITERAL),
    LOADLITERAL
  },
  {
    LOADSTATUS,
    InstructionStringify(LOADSTATUS),
    LOADSTATUS
  },
  {
    STORESTATUS,
    InstructionStringify(STORESTATUS),
    STORESTATUS
  },
  {
    LOADUART,
    InstructionStringify(LOADUART),
    LOADUART
  },
  /// super register instructions (SSE)
  {
    LOADSUP1LO,
    InstructionStringify(LOADSUP1LO),
    LOADSUP1LO
  },
  {
    LOADSUP1LOMID,
    InstructionStringify(LOADSUP1LOMID),
    LOADSUP1LOMID
  },
  {
    LOADSUP1HIMID,
    InstructionStringify(LOADSUP1HIMID),
    LOADSUP1HIMID
  },
  {
    LOADSUP1HI,
    InstructionStringify(LOADSUP1HI),
    LOADSUP1HI
  },
  {
    LOADSUP2LO,
    InstructionStringify(LOADSUP2LO),
    LOADSUP2LO
  },
  {
    LOADSUP2LOMID,
    InstructionStringify(LOADSUP2LOMID),
    LOADSUP2LOMID
  },
  {
    LOADSUP2HIMID,
    InstructionStringify(LOADSUP2HIMID),
    LOADSUP2HIMID
  },
  {
    LOADSUP2HI,
    InstructionStringify(LOADSUP2HI),
    LOADSUP2HI
  },
  {
    STORESUPLO,
    InstructionStringify(STORESUPLO),
    STORESUPLO
  },
  {
    STORESUPLOMID,
    InstructionStringify(STORESUPLOMID),
    STORESUPLOMID
  },
  {
    STORESUPHIMID,
    InstructionStringify(STORESUPHIMID),
    STORESUPHIMID
  },
  {
    STORESUPHI,
    InstructionStringify(STORESUPHI),
    STORESUPHI
  },
  {
    ADDSUP,
    InstructionStringify(ADDSUP),
    ADDSUP
  },
  {
    SUBSUP,
    InstructionStringify(SUBSUP),
    SUBSUP
  },
  {
    MULTSUP,
    InstructionStringify(MULTSUP),
    MULTSUP
  }
}; 

static const Instruction BAD_INSTRUCTION ;

InstructionIndex InstructionStringToIndex(std::string const &string) ;
Instruction const &InstructionFromString(std::string const &string) ;