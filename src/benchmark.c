/*
 * Copyright (c) 2022 Siwei Xu
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include <stdio.h>
#include <math.h>
#include "board.h"

#define MODEL_MNIST 1
#define MODEL_CIFAR10 2
#define MODEL_VWW 3
#define MODEL_MBNET 4

#define CONFIG_MODEL MODEL_CIFAR10

#define main benchmark_main
#if (CONFIG_MODEL == MODEL_MNIST)
#include "mnist/main.c"
#elif (CONFIG_MODEL == MODEL_CIFAR10)
#include "cifar10/main.c"
#elif (CONFIG_MODEL == MODEL_VWW)
#include "vww/main.c"
#elif (CONFIG_MODEL == MODEL_MBNET)
#include "mbnet/label.c"
#include "mbnet/main.c"
#endif
#undef main

int main(void)
{
    board_init();

    // for generate float instructions
    float x = 1.0, y = 2.0;
    float z = x / y * sqrtf(y);
    printf("z=%f\n", z);

    printf("benchmark start...\n");
    benchmark_main(0, NULL);

    __asm__("wfi");
    return 0;
}
