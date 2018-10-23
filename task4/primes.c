/**
 * primes.c -- программа "Вывод простых чисел в заданном диапозоне"
 *
 * Copyright (c) 2014, Guardini123 <betelev@cs.karelia.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include<stdio.h>
#include "calculate_primes.h"

int calculate_primes(int primes[], int n);
int main()
{
    int k, primes[1001], i;
    printf
        ("Введите чисел, нуждающихся в проверке : \n");
    scanf("%d", &k);
    calculate_primes(primes, k);

    printf("Вывод результата : \n");
    for (i = 0; i <= k; i++)    /*идём по числам до конечного введённого числа */
        printf("%d %d\n", i, primes[i]);
    return 0;
}
