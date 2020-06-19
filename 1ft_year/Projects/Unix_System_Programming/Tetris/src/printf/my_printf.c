/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** my_printf.c
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int a;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10 ) {
            a = (nb % 10);
            nb = (nb - a) / 10;
            my_put_nbr(nb);
            my_putchar(a + '0');
        }
        else
            my_putchar( '0' + nb);
    }
    return (0);
}

int switch_print(char const *s, va_list ap, int i)
{
    switch (s[i + 1]) {
    case 'c':
        my_putchar(va_arg(ap, int));
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case 'd':
        my_put_nbr(va_arg(ap, int));
        break;
    default:
        my_putchar(s[i + 1]);
        break;
    }
    i++;
    return (i);
}

int my_printf(char const *s, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, *s);
    while (s[i] != '\0') {
        if (s[i] != '%') {
            my_putchar(s[i]);
            i = i + 1;
        }
        else {
            i = switch_print(s, ap, i);
            i++;
        }
        va_end(ap);
    }
    return (0);
}

int my_strcmp(char const *s1, char const *s2)
{
    int n = 0;
    int p = 0;

    n = long_file(s2);
    while (s1[p] != '\0' || s2[n] != '\0') {
        if (s1[p] != s2[n]) {
            return (-1);
        }
        n = n + 1;
        p++;
    }
    return (0);
}
