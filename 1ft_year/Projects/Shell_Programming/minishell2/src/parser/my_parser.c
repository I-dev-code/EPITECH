/*
** EPITECH PROJECT, 2019
** my_parser.c
** File description:
** parser minishell
*/

#include "minishell2.h"
#include "get_next_line.h"

int parse_my_arg(char **tab, char **env)
{
    int a = 0;

    if (my_strcmp(tab[0], "exit") == 0) {
        manage_exit(tab);
    }
    else if (my_strcmp(tab[0], "cd") == 0)
            a = manage_cd(tab);
    else if (my_strcmp(tab[0], "env") == 0)
            a = display_my_env(tab, env);
    else if (my_strcmp(tab[0], "setenv") == 0)
        a = manage_setenv(tab, env);
    else
        a =  manage_binary(tab, env);
    return (a);
}