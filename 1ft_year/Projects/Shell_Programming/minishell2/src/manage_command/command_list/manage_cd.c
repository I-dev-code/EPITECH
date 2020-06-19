/*
** EPITECH PROJECT, 2019
** manage_cd.c
** File description:
** function cd
*/

#include "minishell2.h"
#include <sys/types.h>
#include <dirent.h>

static int more_than_path(char **tab)
{
    int a;

    for (a = 0; tab[a]; a++);
    if (a > 2)
        return (true);
    return (false);
}

static int go_to_path(char *str)
{
    chdir(str);
    return (0);
}

static int check_path_cd(char **tab)
{
    if (more_than_path(tab) == true) {
        my_putstr_err("cd: Too many arguments.\n");
        return (true);
    }
    else if (opendir(tab[1]) == NULL) {
        my_putstr_err(tab[1]);
        my_putstr_err(": No such file or directory.\n");
        return (true);
    }
    return (false);
}

int manage_cd(char **tab)
{
    int a = 0;

    if (is_one_value(tab) == true)
        chdir("/home/lucas/");
    else if (check_path_cd(tab) == true)
        return (1);
    else
        a = go_to_path(tab[1]);
    return (a);
}