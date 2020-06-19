/*
** EPITECH PROJECT, 2019
** utils_bis.c
** File description:
** function utils two
*/

#include "navy.h"

int check_alpha(char c)
{
    if (c < 'A' || c > 'H')
        return (1);
    return (0);
}

int my_getnbr(char *str, int *stock)
{
    int i = 0;
    *stock = 0;
    int moins = 1;

    while (str[i] < '0' || str[i] > '9') {
        if (str[i] == '-')
            moins = moins * (-1);
        i += 1;
    }
    while (str[i] >= 48 && str[i] <= 57) {
        *stock += str[i] - 48;
        *stock = *stock * 10;
        i = i + 1;
    }
    *stock /= 10;
    if (moins % 2 == 0)
        *stock = *stock * (-1);
    *stock = *stock * moins;
    return (0);
}
