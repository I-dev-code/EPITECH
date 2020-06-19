/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** put a nbr
*/

#include "../include/myprintf.h"

int reverse_sign(int nb)
{
    my_putchar('-');
    nb *= -1;
    return (nb);
}

int put_my_nbr(int nb, int base)
{
    if (nb > 9) {
        put_my_nbr(nb / base, base);
        my_putchar(nb % base + '0');
    } else if (nb <= 9 && nb >= 0)
        my_putchar(nb % base + '0');
    return (nb);
}

void my_fput_nbr(va_list ap)
{
    int nb = va_arg(ap, int);

    if (nb < 0)
        nb = reverse_sign(nb);
    put_my_nbr(nb, 10);
}

void my_fput_binary(va_list ap)
{
    unsigned int nb = va_arg(ap, int);
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int j = 0;

    while (nb != 0) {
        tmp[j] = nb % 2 + '0';
        j++;
        nb /= 2;
    }
    my_putstr(my_revstr(tmp));
}

void my_fput_octal(va_list ap)
{
    unsigned int nb = va_arg(ap, int);
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int j = 0;

    while (nb != 0) {
        tmp[j] = nb % 8 + '0';
        j++;
        nb /= 8;
    }
    my_putstr(my_revstr(tmp));
}
