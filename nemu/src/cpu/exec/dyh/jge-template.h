#include "cpu/exec/template-start.h"

#define instr jge

make_helper(concat(jge_i_, SUFFIX)) {
	int len = concat(decode_i_, SUFFIX) (eip + 1);
	print_asm("jge 0x%x", (DATA_TYPE_S)op_src->imm + cpu.eip + len + 1);
	if(cpu.eflags.ZF == 1 || cpu.eflags.SF == cpu.eflags.OF) cpu.eip += (DATA_TYPE_S)op_src->imm;
	return len + 1;
}

#include "cpu/exec/template-end.h"
