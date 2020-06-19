/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** print numb
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
        nb++;
    }
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    }
    else
        my_putchar(nb + '0');
    return (0);
}
