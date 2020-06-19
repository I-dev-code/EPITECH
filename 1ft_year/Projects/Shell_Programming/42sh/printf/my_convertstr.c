/*
** EPITECH PROJECT, 2018
** my_Sflag.c
** File description:
** convert a char to octal base
*/

#include "../include/myprintf.h"

long int char_to_int(char *str)
{
    int nb;
    int i = 0;

    while (str[i]) {
        nb = nb + str[i] - '0';
        nb = nb * 10;
        i++;
    }
    nb = nb / 10;
    return (nb);
}

void my_put_octal(int nb)
{
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int i = 0;
    int new;

    while (nb != 0) {
        tmp[i] = nb % 8 + '0';
        nb /= 8;
        i++;
    }
    new = char_to_int(tmp);
    if (new <= 9)
        my_putstr("00");
    else if (new <= 99)
        my_putstr("0");
    my_putstr(my_revstr(tmp));
}

void my_fconvert_string(va_list ap)
{
    char *str = va_arg(ap, char *);

    for (int i = 0; str[i]; i++) {
        if (str[i] < 32 || str[i] > 126) {
            my_putchar('\\');
            my_put_octal(str[i]);
        } else
            my_putchar(str[i]);
    }
}
