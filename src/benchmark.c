/*
 * Copyright (c) 2021 HPMicro
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include <stdio.h>
#include "board.h"

#define main benchmark_main

// #include "mnist/main.c"

// #include "cifar10/main.c"

// #include "vww/main.c"

#include "mbnet/label.c"
#include "mbnet/main.c"

#undef main

int main(void)
{
    board_init();

    printf("benchmark start...\n");
    benchmark_main(0, NULL);

    __asm("wfi;\n");
    return 0;
}
