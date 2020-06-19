/*
** EPITECH PROJECT, 2019
** utils.c
** File description:
** function utils
*/

#include "matchstick.h"

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

int my_strlen(char *str)
{
    int a = 0;

    for (; str[a]; a++);
    return (a);
}

int my_put_nbr(int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    }
    else
        my_putchar(nb + '0');
    return (0);
}

int my_str_isnum(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}
