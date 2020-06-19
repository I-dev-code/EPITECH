/*
** EPITECH PROJECT, 2019
** minishell1
** File description:
** env.c
*/

#include <mysh.h>
#include <myprintf.h>

int count_lines(char **tab)
{
    int nb = 0;

    for (int i = 0; tab[i]; i++)
        nb++;
    return (nb);
}

int envline_exist(data_t *info)
{
    int i;
    int a = 0;

    for (i = 0; info->env[i] &&
    my_strncmp(info->cmd[1], info->env[i],
my_strlen(info->cmd[1]) - 1) != 0; i++);
    if (info->env[i] == NULL)
        return (1);
    else if (info->env[i] != NULL && count_lines(info->cmd) == 3) {
        info->env[i] = malloc(sizeof(char) * \
        (my_strlen(info->cmd[1]) + my_strlen(info->cmd[2]) + 1));
        for (int j = 0; info->cmd[1][j]; j++, a++)
            info->env[i][a] = info->cmd[1][j];
        info->env[i][a++] = '=';
        for (int j = 0; info->cmd[2][j]; j++, a++)
            info->env[i][a] = info->cmd[2][j];
        info->env[i][a] = 0;
    } else
        info->env[i][my_strlen(info->cmd[1]) + 1] = 0;
    return (0);
}

bool check_mystr(char *s)
{
    for (int i = 0; s[i]; i++)
        if (is_alphanum(s[i]) != true) {
            if (i == 0)
                my_printf("setenv: name of variable must"\
" start with a letter.\n");
            else
                my_printf("setenv: name of variable must"\
" contains alphanumeric carachters.\n");
            return (false);
        }
    return (true);
}

char **set_env(data_t *data)
{
    char **tmp = malloc(sizeof(char *) * (count_lines(data->env) + 2));
    int i;
    int a;

    if (data->cmd[1] == NULL || count_lines(data->cmd) > 3 ||
    check_mystr(data->cmd[1]) == false || envline_exist(data) == 0)
        return (data->env);
    for (i = 0; data->env[i] != NULL; i++)
        tmp[i] = my_strdup(data->env[i]);
    tmp[i] = malloc(sizeof(char) * (my_strlen(data->str) + 1));
    for (a = 0; data->cmd[1][a] != 0; a++)
        tmp[i][a] = data->cmd[1][a];
    tmp[i][a++] = '=';
    if (data->cmd[2] != NULL)
        for (int j = 0; data->cmd[2][j]; a++, j++)
            tmp[i][a] = data->cmd[2][j];
    tmp[i][a + 1] = 0;
    tmp[i + 1] = NULL;
    return (tmp);
}

int print_env(data_t *info)
{
    if (info->cmd[1] != NULL && my_strcmp(info->cmd[1], "-i") != 0) {
        my_printf("env: « %s »: No such file or directory\n", info->cmd[1]);
        return 127;
    }
    for (int i = 0; info->env[i] != NULL; i++)
        my_printf("%s\n", info->env[i]);
    return 0;
}
