/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** my_putchar.c
*/

#include "../include/myprintf.h"

void my_fputchar(va_list ap)
{
    char c = va_arg(ap, int);

    write(1, &c, 1);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}
