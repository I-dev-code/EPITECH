/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** my_revstr.c
*/

#include "../include/myprintf.h"

char *my_revstr(char *str)
{
    char arr;
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i <= j) {
        arr = str[i];
        str[i] = str[j];
        str[j] = arr;
        i++;
        j--;
    }
    return (str);
}
