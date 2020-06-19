/*
** EPITECH PROJECT, 2019
** string_to_int.c
** File description:
** convert a string in int
*/

#include "minishell2.h"

int string_to_int(char *str)
{
    int m = 0;
    int nbr = 0;
    int neg = 0;
    int ten = 1;

    if (str[0] == '-')
        neg = 1;
    while (str[m] != '\0')
        m++;
    m--;
    while (m >= neg) {
        nbr = (str[m] - '0') * ten + nbr;
        ten = ten * 10;
        m--;
    }
    if (neg == 1)
        return (nbr * (-1));
    return (nbr);
}
