/*
** EPITECH PROJECT, 2018
** utils.c
** File description:
** utils functions
*/

#include "bsq.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_strline(char const *str)
{
    int a = 0;

    while(str[a] != '\n')
        a++;
    return (a);
}
