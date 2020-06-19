/*
** EPITECH PROJECT, 2019
** manage_exit.c
** File description:
** command_exit
*/

#include "minishell2.h"

static int is_char(char **tab)
{
    int a;
    int b;

    for (a = 1; tab[a]; a++) {
        for (b = 0; tab[a][b]; b++) {
            if ((tab[a][b] >= '0' && tab[a][b] <= '9') ||
                tab[a][b] == '\n')
                b++;
            else
                return (true);
        }
    }
    return (false);
}

int manage_exit(char **tab)
{
    int value = 0;
    if (is_one_value(tab) == true) {
        my_putstr("exit\n");
        exit(0);
    }
    else if (is_char(tab) == true) {
        my_putstr_err("exit: Expression Syntax.\n");
        return (false);
    }
    else {
        value = string_to_int(tab[1]);
        my_putstr("exit\n");
        exit(value);
    }
}