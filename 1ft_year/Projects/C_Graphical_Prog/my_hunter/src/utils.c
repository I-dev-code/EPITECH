/*
** EPITECH PROJECT, 2018
** int_to_string.c
** File description:
** int to string
*/

#include "hunter.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    return (0);
}

char *my_revstr(char *str)
{
    int a = 0;
    int b = 0;
    char swap;

    while (str[a])
        a++;
    a--;
    while (b < a) {
        swap = str[a];
        str[a] = str[b];
        str[b] = swap;
        b++;
        a--;
    }
    return (str);
}

char *int_to_char(int nb)
{
    int a = 0;
    char *str = malloc(sizeof(char) * nb + 1);

    while (nb >= 10) {
        str[a] = (nb % 10) + 48;
        nb = nb / 10;
        a++;
    }
    str[a] = nb + 48;
    str[a + 1] = '\0';
    str = my_revstr(str);
    return (str);
}
