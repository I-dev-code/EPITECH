/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** my_putstr.c
*/

#include "../include/myprintf.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}

void my_fputstr(va_list ap)
{
    char *str = va_arg(ap, char *);

    write(1, str, my_strlen(str));
}
