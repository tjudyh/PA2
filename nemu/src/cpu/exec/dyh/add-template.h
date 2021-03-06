#include "cpu/exec/template-start.h"

#define instr add

void do_execute() {
	DATA_TYPE ans = op_dest->val + op_src->val;
	OPERAND_W(op_dest, ans);
	concat(updateCPU_, SUFFIX) (ans);
	int len = (DATA_BYTE << 3) - 1;
	cpu.eflags.CF = (ans < op_dest->val);
    cpu.eflags.OF = ((op_dest->val >> len) == (op_src->val >> len) && (op_dest->val >> len) != cpu.eflags.SF);
	print_asm_template2();
}

make_instr_helper(i2rm)
make_instr_helper(r2rm)
make_instr_helper(rm2r)
make_instr_helper(i2a)

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(si2rm)
#endif

#include "cpu/exec/template-end.h"
