/*
** EPITECH PROJECT, 2019
** output_error.c
** File description:
** output for error
*/

#include "minishell2.h"

void my_putchar_err(char c)
{
    write(2, &c, 1);
}

int my_putstr_err(char const *str)
{
    int a;

    for (a = 0; str[a]; a++)
        my_putchar_err(str[a]);
    return (1);
}