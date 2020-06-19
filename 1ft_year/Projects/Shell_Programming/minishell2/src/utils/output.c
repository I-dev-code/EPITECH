/*
** EPITECH PROJECT, 2019
** output.c
** File description:
** function output
*/

#include "minishell2.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    write(1, str, my_strlen(str));
    return (0);
}

int my_strlen(char const *str)
{
    int a;

    for (a = 0; str[a]; a++);
    return (a);
}
