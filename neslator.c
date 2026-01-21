/**
 * @file neslator.c
 * @author Chimipupu(https://github.com/Chimipupu)
 * @brief NESLATOR
 * @version 0.1
 * @date 2026-01-22
 * 
 * @copyright Copyright (c) 2026 Chimipupu All Rights Reserved.
 * 
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

static void neslator_main(void);

static void neslator_main(void)
{
    printf("[DEBUG] NESLATOR main\n");
}

int main (void)
{
    while (1)
    {
        neslator_main();
        _sleep(1000);
    }

    return 0;
}