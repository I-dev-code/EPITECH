/*
** EPITECH PROJECT, 2018
** my_length.c
** File description:
** length's variable
*/

#include "../include/myprintf.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}

int my_intlen(int nb)
{
    int i = 0;

    while (nb != 0) {
        i++;
        nb /= 10;
    }
    return (i);
}
