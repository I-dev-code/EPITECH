/*
** EPITECH PROJECT, 2018
** my_base_conversion.c
** File description:
** conversion int into base
*/

#include "printf.h"

char *my_base_conv(int nb, int b)
{
    char *str = malloc(sizeof(char) * (nb * b));
    char a;
    int i = 0;

    if (str == NULL)
        return (84);
    while (nb >= 1) {
        a = (nb % b) + 48;
        if (a > '9')
            a = a + 7;
        str[i] = a;
        i++;
        nb = nb / b;
    }
    my_revstr(str);
    return (str);
}
