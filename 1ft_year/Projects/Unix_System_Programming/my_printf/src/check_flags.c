/*
** EPITECH PROJECT, 2018
** check_flags.c
** File description:
** check flags for printf
*/

#include "printf.h"

int check_flg(char const *str, int i, va_list ap)
{
    switch (str[i]) {
    case 'c':
        my_putchar(va_arg(ap, int));
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case 'd':
    case 'i':
        my_put_nbr(va_arg(ap, int));
        break;
    case 'x':
        my_putstr(my_strlowcase(my_base_conv(va_arg(ap, int), 16)));
	break;
    default:
        i = check_flg_bis(str, i, ap);
    }
    return (i);
}

int check_flg_bis(char const* str, int i, va_list ap)
{
    switch (str[i]) {
    case 'X':
        my_putstr(my_base_conv(va_arg(ap, int), 16));
        break;
    case 'o':
        my_putstr(my_base_conv(va_arg(ap, int), 8));
        break;
    case 'b':
        my_putstr(my_base_conv(va_arg(ap, int), 2));
        break;
    case 'u':
        my_put_unsigned_nbr(va_arg(ap, int));
        break;
    default:
        i = check_flg_long_int(str, i, ap);
    }
    return (i);
}

int check_flg_long_int(char const *str, int i, va_list ap)
{
    switch (str[i]) {
    case 'S':
        my_putstr_isprintable(va_arg(ap, char *));
        break;
    case 'l':
        if (str[i + 1] == 'i') {
            my_put_long_nbr(va_arg(ap, long int));
            return (i + 1);
        }
        if (str[i + 1] == 'd') {
            my_put_long_nbr(va_arg(ap, long  int));
            return (i + 1);
        }
    default:
        i = check_flg_long_long_int(str, i, ap);
    }
    return (i);
}

int check_flg_long_long_int(char const *str, int i, va_list ap)
{
    switch (str[i]) {
    case 'l':
        if (str[i + 1] == 'l' && str[i + 2] == 'i') {
            my_put_long_long_nbr(va_arg(ap, long long int));
            return (i + 2);
        }
        if (str[i + 1] == 'l' && str[i + 2] == 'd') {
            my_put_long_long_nbr(va_arg(ap, long long int));
            return (i + 2);
        }
    default:
        i = check_flg_long_long_unsigned_int(str, i, ap);
    }
    return (i);
}

int check_flg_long_long_unsigned_int(char const *str, int i, va_list ap)
{
    switch(str[i]) {
    case 'l':
        if (str[i + 1] == 'u') {
            my_put_long_unsigned_nbr(va_arg(ap, long unsigned int));
            return (i + 1);
        }
        if (str[i + 1] == 'l' && str[i + 2] == 'u') {
            my_put_long_long_unsigned_nbr(va_arg(ap, long long unsigned int));
            return (i + 2);
        }
    default:
        my_putchar(str[i - 1]);
        my_putchar(str[i]);
    }
    return (i);
}
