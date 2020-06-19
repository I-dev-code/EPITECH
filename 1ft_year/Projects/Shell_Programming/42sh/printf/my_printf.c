/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdio.h>
#include "../include/myprintf.h"

int count_char(char const *str)
{
    int i = 0;

    for (; str[i] >= 'a' && str[i] <= 'z'; i++);
    return (i);
}

void my_hashtag(char to_cmp)
{
    switch (to_cmp) {
    case 'o':
        my_putstr("0");
        break;
    case 'x':
    case 'X':
        my_putstr("0x");
        break;
    default:
        break;
    }
}

int my_check_format(char const *str, int i)
{
    switch (str[i]) {
    case '#':
        my_hashtag(str[i + 1]);
        break;
    case ' ':
        my_putstr(" ");
    default:
        break;
    }
    return (i);
}

void my_parser(char const *str, void (*pf[])(), va_list ap, ...)
{
    int n = 0;
    int j = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '%' &&
        (my_flags(str[i + 1]) == true || my_format(str[i + 1]) == true)) {
            if (my_format(str[i + 1]) == true)
                i = my_check_format(str, ++i);
            j = nb_flags(str[i + 1]);
            pf[j](ap);
            i++;
        } else if (str[i] == '%' && str[i + 1] == 'l') {
            n = count_char(&str[i + 1]);
            j = nb_str_flags(concat_char(n, &str[i + 1])) + 13;
            pf[j](ap);
            i = i + n;
        } else
            my_putchar(str[i]);
    }
}

int my_printf(char const *str, ...)
{
    va_list ap;
    void (*pf[18])(va_list) = {C, STR, D, I, B, O, x, X, S,\
U, Q, P, LD, LI, LLD, LLI, LU, LLU};

    va_start(ap, str);
    my_parser(str, pf, ap);
    va_end(ap);
    return (0);
}
