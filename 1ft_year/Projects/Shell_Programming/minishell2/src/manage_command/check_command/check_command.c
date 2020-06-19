/*
** EPITECH PROJECT, 2019
** check_command.c
** File description:
** error handdling
*/

#include "minishell2.h"

int is_one_value(char **tab)
{
    int a;

    for (a = 0; tab[a]; a++);
    if (a < 2)
        return (true);
    return (false);
}