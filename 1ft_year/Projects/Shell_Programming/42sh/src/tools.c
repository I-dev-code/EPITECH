/*
** EPITECH PROJECT, 2019
** minishell2
** File description:
** tools
*/

#include "mysh.h"
#include "myprintf.h"

bool is_alphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
        (c >= '0' && c <= '9') || c == '.')
        return (true);
    return (false);
}

void get_my_env(data_t *data, char **env)
{
    int i;

    data->env = malloc(sizeof(char *) * (count_lines(env) + 2));
    for (i = 0; env[i]; i++)
        data->env[i] = my_strdup(env[i]);
    data->env[i] = NULL;
}

int count_words(char *str)
{
    int nb = 0;

    for (int i = 0; str[i]; i++) {
        if ((i == 0 && is_alphanum(str[i]) == true) ||
            (i > 0 && str[i] == ' ' && is_alphanum(str[i - 1]) == true)
            || str[i] == ';')
            nb++;
    }
    return (nb);
}

char *clear_str(char *str)
{
    char *tmp = malloc(sizeof(char ) * my_strlen(str));
    int i = 0;
    int j;

    for (j = 0; str[j] && (str[j] == ' ' || str[j] == '\t'); j++);
    for ( ; str[j]; j++) {
        if ((str[j] != ' ' && str[j] != '\t') ||
            (str[j] == ' ' && (str[j + 1] != ' ' || str[j + 1] != '\t')) ||
             (str[j] == '\t' && (str[j + 1] != ' ' || str[j + 1] != '\t'))) {
            tmp[i] = str[j];
            i++;
        }
    }
    tmp[i] = 0;
    return (tmp);
}
