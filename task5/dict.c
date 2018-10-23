/**
 * dict.c -- программа чтения словаря и печати словарной статьи по номеру
 *
 * Copyright (c) 2009, Student Name <student@cs.karelia.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 1024

int main(int argc, char*argv[])
{
    /* Файл словаря */
    FILE* dict = NULL;

    /* Текущая строка */
    char current_line[MAXLINE];

    /* Номер искомой статьи */
    int requested_entry_number;

    /* Номер текущей словарной статьи */
    int current_entry_number = 0;

    /* Получаем номер словарной статьи для поиска */
    scanf("%d", &requested_entry_number);

    /* Открываем файл словаря */
    dict = fopen(argv[1], "r");

    /* Просматриваем словарь, печатая строки запрошенной статьи */
    while (fgets(current_line, MAXLINE, dict) != NULL) {
         /* Если первый символ строки не является пробельным разделителем,
            найдено начало новой словарной статьи */
         if (!isspace(current_line[0])) {
             current_entry_number++;
         }
         /* Печатаем строку, если она относится к запрошенной словарной
            статье */
         if (current_entry_number == requested_entry_number) {
             printf("%s", current_line);
         }
    }

    /* Завершаем работу с файлом словаря */
    fclose(dict);

    return 0;
}