#include "common/include/data.h"
#include "hal/include/print.h"
#include "hal/include/int.h"


void no_opt halt()
{
    disable_local_int();
    
    do {
        __asm__ __volatile__ (
            "nop;"
            "wait;"
            "nop;"
        );
    } while (1);
}

void disp_src_info(char *file, char *base, int line)
{
    kprintf("[SRC] File: %s, Base: %s, Line: %d\n", file, base, line);
}
