/*
** EPITECH PROJECT, 2018
** my_get_nbr.c
** File description:
** my_getnbr.c
*/

#include "my.h"

int my_is_neg(char *str)
{
    int i = 0;
    int counter = 0;

    while (str[i] > '9' || str[i] < '0') {
        if (str[i] == '-')
            counter++;
        i++;
    }
    if (counter % 2 != 0)
        return (1);
    else
        return (0);
}

int my_is_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else if (c == '+' || c == '-')
        return (2);
    else
        return (0);
}

int my_getnbr(char *str)
{
    int i = 0;
    int nb = 0;

    if (!str)
        return (0);
    while (my_is_num(str[i]) == 2)
        i++;
    while (my_is_num(str[i]) == 1) {
        nb = ((nb * 10) + str[i] - '0');
        i++;
    }
    if (my_is_neg(str) == 1)
        nb = -nb;
    return (nb);
}
