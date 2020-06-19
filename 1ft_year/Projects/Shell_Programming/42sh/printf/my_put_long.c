/*
** EPITECH PROJECT, 2018
** my_put_long
** File description:
** display a long int
*/

#include <stdio.h>
#include "../include/myprintf.h"

void my_fput_long(va_list ap)
{
    long int nb = va_arg(ap, long int);
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int j = 0;

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    while (nb != 0) {
        tmp[j] = nb % 10 + '0';
        j++;
        nb /= 10;
    }
    tmp[j] = '\0';
    my_putstr(my_revstr(tmp));
}

void my_fput_longlong(va_list ap)
{
    long long int nb = va_arg(ap, long long int);
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int j = 0;

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    while (nb != 0) {
        tmp[j] = nb % 10 + '0';
        j++;
        nb /= 10;
    }
    tmp[j] = '\0';
    my_putstr(my_revstr(tmp));
}
