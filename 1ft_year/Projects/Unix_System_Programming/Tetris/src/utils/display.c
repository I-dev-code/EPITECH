/*
** EPITECH PROJECT, 2018
** utils.c
** File description:
** function utils
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a = a + 1;
    }
}

int my_strlen(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        n = n + 1;
    }
    return (n);
}
