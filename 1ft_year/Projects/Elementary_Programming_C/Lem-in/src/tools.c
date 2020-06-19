/*
** EPITECH PROJECT, 2019
** tools.c
** File description:
** tools.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i], 1);
    return (0);
}

int my_strcmp(char const *s1, char const *s2)
{
    int a = 0;

    while (s1[a] && s1[a] == s2[a])
        a++;
    if (s1[a] > s2[a])
        return (1);
    if (s1[a] < s2[a])
        return (-1);
    return (0);
}

int my_getnbr(char const *str)
{
    int sign = 1;
    int a = 0;
    int b = 0;
    int nb = 0;

    while (str[a] == '-' || str[a] == '+') {
        if (str[a] == '-')
            sign = -1;
        if (str[a] == '+')
            sign = 1;
        a++;
    }
    while (str[a] != '\0' && str[a] >= '0' && str[a] <= '9') {
        if (b > 10)
            return (0);
        nb = nb * 10 + str[a++] - 48;
        b++;
    }
    if (b <= 10)
        return (nb * sign);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb < 10) {
        my_putchar(nb % 10 + 48);
    }
    if (nb >= 10) {
        (my_put_nbr(nb / 10));
        my_putchar(nb % 10 + 48);
    }
    return (0);
}
