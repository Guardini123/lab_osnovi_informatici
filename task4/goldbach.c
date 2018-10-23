/**
 * goldbach.c -- программа "Разложение чётных чисел на простые"
 *
 * Copyright (c) 2014, Guardini123 <betelev@cs.karelia.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include "calculate_primes.h"

int calculate_primes(int *primes, int n);
int main()
{
    int kol, i, j, x, y;
    int primes[1001], m, n;
    printf("Введите начало диапозона (>4) : \n");
    scanf("%d", &n);
    printf("Введите конец диапозона (<1000) : \n");
    scanf("%d", &m);

    calculate_primes(primes, 1000);

    printf("\nРезультат работы программы : \n");
    for (i = n; i <= m; i++) {  /*идём по диапозону, от n до m */
        if (i % 2 == 0) {       /*если это чётное число */
            printf("%d ", i);
            kol = 0;
            for (j = 2; j <= i / 2; j++) {  /*идём с 2 до i/2 (чтобы исключить двойную проверку) */
                if (primes[j] == 1 && primes[i - j] == 1) { /*если число j простое и i-j простое, то нам эта сумма подходит */
                    kol++;
                    if (kol == 1) { /*запоминаем первое расзложение */
                        x = j;
                        y = i - j;
                    }
                }
            }
            printf("%d %d %d \n", kol, x, y);
        }
    }
    return 0;
}