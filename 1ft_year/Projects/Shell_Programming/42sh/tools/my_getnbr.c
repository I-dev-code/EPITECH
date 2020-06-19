/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** my_getnbr.c
*/

#include <stdbool.h>

bool is_num(char c)
{
    return (c >= '0' && c <= '9'? true : false);
}

int my_getnbr(char const *str)
{
    int nb = 0;
    int sign = 1;
    int i = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '-')
            sign *= -1;
    }
    for (; str[i]; i++) {
        if (is_num(str[i]) == true)
            nb = nb * 10 + str[i] - '0';
    }
    return (nb * sign);
}
