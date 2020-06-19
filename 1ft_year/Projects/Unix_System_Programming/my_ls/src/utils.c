/*
** EPITECH PROJECT, 2019
** utils.c
** File description:
** function utils
*/

#include "my_ls.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a]) {
        my_putchar(str[a]);
        a++;
    }
    return (0);
}

int my_strlen(char const *str)
{
    int a = 0;

    while (str[a]) {
        a++;
    }
    return (a);
}

int my_put_nbr(int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    }
    else
        my_putchar(nb + 0);
    return (0);
}
