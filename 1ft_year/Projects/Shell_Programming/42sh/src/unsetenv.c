/*
** EPITECH PROJECT, 2019
** minishell1
** File description:
** unsetenv.c
*/

#include <mysh.h>
#include <myprintf.h>

int my_strncmp(char *to_cmp, char *str, int n)
{
    int i = 0;

    while (str[i] && i < n) {
        if (str[i] != to_cmp[i])
            return (-1);
        i++;
    }
    if (str[i + 1] != '=')
        return (-1);
    return (0);
}

int mod_strncmp(char *to_cmp, char *str, int n)
{
    int i = 0;

    while (str[i] && i < n) {
        if (str[i] != to_cmp[i])
            return (-1);
        i++;
    }
    return (0);
}

char **my_unsetenv(char **env, char *to_unset)
{
    char **tmp = malloc(sizeof(char *) * (count_lines(env) + 2));
    int j = 0;

    if (to_unset == NULL) {
        ret_val = 1;
        return (env);
    }
    for (int i = 0; env[i] != NULL; i++) {
        if (mod_strncmp(env[i], to_unset, my_strlen(to_unset) - 1) != 0) {
            tmp[j] = my_strdup(env[i]);
            j++;
        }
    }
    ret_val = 0;
    tmp[j] = NULL;
    return (tmp);
}
