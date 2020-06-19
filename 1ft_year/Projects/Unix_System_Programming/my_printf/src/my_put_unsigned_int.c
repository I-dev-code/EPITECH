/*
** EPITECH PROJECT, 2018
** my_put_unsigned_nbr.c
** File description:
** print numb
*/

#include "../include/printf.h"

int my_put_unsigned_nbr(unsigned int nb)
{
    if (nb >= 10) {
        my_put_unsigned_nbr(nb / 10);
        my_put_unsigned_nbr(nb % 10);
        nb++;
    }
    else if (nb < 0) {
        my_putchar('-');
        my_put_unsigned_nbr(nb * (-1));
    }
    else
        my_putchar(nb + '0');
    return (0);
}

int my_put_long_unsigned_nbr(long unsigned int nb)
{
    if (nb >= 10) {
        my_put_long_unsigned_nbr(nb / 10);
        my_put_long_unsigned_nbr(nb % 10);
        nb++;
    }
    else if (nb < 0) {
        my_putchar('-');
        my_put_long_unsigned_nbr(nb * (-1));
    }
    else
        my_putchar(nb + '0');
    return (0);
}

int my_put_long_long_unsigned_nbr(long long unsigned nb)
{
    if (nb >= 10) {
        my_put_long_long_unsigned_nbr(nb / 10);
        my_put_long_long_unsigned_nbr(nb % 10);
        nb++;
    }
    else if (nb < 0) {
        my_putchar('-');
        my_put_long_long_unsigned_nbr(nb * (-1));
    }
    else
        my_putchar(nb + '0');
    return (0);
}
