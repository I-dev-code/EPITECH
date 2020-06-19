/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main minishell
*/

#include "minishell2.h"
#include "get_next_line.h"

int get_command(char **env)
{
    char *s1 = get_next_line();
    int status = 0;

    if (s1 == NULL)
        return (84);
    status = put_command_into_tab(env, s1);
    return (status);
}

int my_prompt(char **env)
{
    int status = 0;
    char *prompt = "lucas-$>:";

    while (1) {
        my_putstr(prompt);
        status = get_command(env);
        if (status == 84)
            break;
    }
    return (0);
}

int main(int ac, char **av, char **env)
{
    int status = 0;

    if (ac == 0 || av == NULL)
        exit (84);
    status = my_prompt(env);
    return (status);
}