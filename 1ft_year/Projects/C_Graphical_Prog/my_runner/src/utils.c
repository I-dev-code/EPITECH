/*
** EPITECH PROJECT, 2019
** utils.c
** File description:
** fucntion utils
*/

#include "runner.h"

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
