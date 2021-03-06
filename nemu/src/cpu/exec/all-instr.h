#include "prefix/prefix.h"

#include "data-mov/mov.h"
#include "data-mov/xchg.h"
#include "data-mov/cltd.h"
#include "data-mov/leave.h"

#include "arith/dec.h"
#include "arith/inc.h"
#include "arith/neg.h"
#include "arith/imul.h"
#include "arith/mul.h"
#include "arith/idiv.h"
#include "arith/div.h"

#include "logic/and.h"
#include "logic/or.h"
#include "logic/not.h"
#include "logic/xor.h"
#include "logic/sar.h"
#include "logic/shl.h"
#include "logic/shr.h"
#include "logic/shrd.h"

#include "string/rep.h"

#include "misc/misc.h"

#include "special/special.h"

#include "dyh/push.h"
#include "dyh/call.h"
#include "dyh/test.h"
#include "dyh/je.h"
#include "dyh/pop.h"
#include "dyh/ret.h"
#include "dyh/add.h"
#include "dyh/cmp.h"
#include "dyh/sub.h"
#include "dyh/sbb.h"
#include "dyh/jmp.h"
#include "dyh/jbe.h"
#include "dyh/jle.h"
#include "dyh/jl.h"
#include "dyh/ja.h"
#include "dyh/jg.h"
#include "dyh/js.h"
#include "dyh/jns.h"
#include "dyh/jge.h"
#include "dyh/jne.h"
#include "dyh/lea.h"
#include "dyh/adc.h"
#include "dyh/movs.h"
#include "dyh/setne.h"
#include "dyh/lods.h"
#include "dyh/scas.h"
#include "dyh/stos.h"
#include "dyh/movzb.h"
#include "dyh/movsb.h"
#include "dyh/movsw.h"
#include "dyh/movzw.h"
