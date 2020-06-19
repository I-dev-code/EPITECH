/*
** EPITECH PROJECT, 2018
** my_put_unsigned.c
** File description:
** put unsigned nb
*/

#include "../include/myprintf.h"

void my_fput_unsigned(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int j = 0;

    while (nb != 0) {
        tmp[j] = nb % 10 + '0';
        j++;
        nb /= 10;
    }
    tmp[j] = '\0';
    my_putstr(my_revstr(tmp));
}

void my_fput_long_unsigned(va_list ap)
{
    long unsigned int nb = va_arg(ap, long unsigned int);
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int j = 0;

    while (nb != 0) {
        tmp[j] = nb % 10 + '0';
        j++;
        nb /= 10;
    }
    tmp[j] = '\0';
    my_putstr(my_revstr(tmp));
}

void my_fput_longlong_unsigned(va_list ap)
{
    long long unsigned int nb = va_arg(ap, long long unsigned int);
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int j = 0;

    while (nb != 0) {
        tmp[j] = nb % 10 + '0';
        j++;
        nb /= 10;
    }
    tmp[j] = '\0';
    my_putstr(my_revstr(tmp));
}
