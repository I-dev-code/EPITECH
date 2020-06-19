/*
** EPITECH PROJECT, 2019
** manage_env.c
** File description:
** display env
*/

#include "minishell2.h"

int display_error(char **tab)
{
    my_putstr_err("env:");
    my_putstr_err(" \" ");
    my_putstr_err(tab[1]);
    my_putstr_err(" \": No such file or directory\n");
    return (1);
}

int display_my_env(char **tab, char **env)
{
    int a;
    int value = 0;

    if (is_one_value(tab) == false) {
        value = display_error(tab);
        return (value);
    }
    for (a = 0; env[a]; a++) {
        my_putstr(env[a]);
        my_putchar('\n');
    }
    return (0);
}