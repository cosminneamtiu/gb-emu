#include <cpu.h>

//process cpu instructions

static void proc_none(cpu_context *ctx) {
    printf("invalid instruction! \n");
    exit(-7);
}

static void proc_ld(cpu_context *ctx) {
        //todo...
}


static IN_PROC processors[] = {
    [IN_NONE] =proc_none,
    [IN_LD] = proc_ld,
   
};