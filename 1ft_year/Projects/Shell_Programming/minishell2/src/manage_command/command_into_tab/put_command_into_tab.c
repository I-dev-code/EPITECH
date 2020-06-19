/*
** EPITECH PROJECT, 2019
** put_command_into_tab.c
** File description:
** put command in a tab
*/

#include "minishell2.h"

int put_command_into_tab(char **env, char *command)
{
    char **tab = my_str_to_tab(command, ' ');
    int status = 0;

    if (tab == NULL)
        return (84);
    status = parse_my_arg(tab, env);
    return (status);
}