/**
 * calculate_primes.c -- программа "Нахождение простых чисел"
 *
 * Copyright (c) 2014, Guardini123 <betelev@cs.karelia.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include "calculate_primes.h"
int calculate_primes(int *primes, int n)
{
    int k, l;
    primes[0] = 0;
    primes[1] = 0;
    primes[2] = 1;
    for (k = 3; k <= n; k++) {  /*проходим по всем чисам из диапозона */
        primes[k] = 1;
        for (l = 0; l <= k - 1; l++) {  /*проходим по числам от 0 до предыдущего k-ому */
            if (primes[l] == 1 && k % l == 0) { /*если k делится на простое число, то k уже не простое */
                primes[k] = 0;
                break;          /*раз уже k не простое, то переходим к другому k */
            }
        }
    }
    return 0;
}

