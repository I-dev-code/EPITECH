/*
** EPITECH PROJECT, 2019
** minishell1
** File description:
** cd.c
*/

#include <mysh.h>
#include <myprintf.h>

int skip_command(char *str)
{
    int i = 0;

    for (; is_alphanum(str[i]) == false; i++);
    for (; is_alphanum(str[i]) == true; i++);
    for (; str[i] == ' '; i++);
    return (i);
}

char *get_path(char *str)
{
    char *tmp = malloc(sizeof(char) * my_strlen(str) + 1);
    int i = 0;
    int j = 0;

    i = skip_command(str);
    for (; str[i] && str[i] != ' '; i++) {
        tmp[j] = str[i];
        j++;
    }
    tmp[j] = 0;
    return (tmp);
}

int count_tab(data_t *data)
{
    int i = 0;

    for (i = 0; data->cmd[i]; i++);
    return (i);
}

int cd_command(data_t *data)
{
    char cwd[256];
    static char *old_p = ".";
    struct stat sb;

    getcwd(cwd, sizeof(cwd));
    data->path = my_strdup(data->cmd[1]);
    if (my_strcmp(data->cmd[1], "-") == 0) {
        chdir(old_p);
        return 0;
    }
    if (data->path[0] == 0)
        data->path = my_strdup("/home/");
    if (count_tab(data) > 2) {
        my_printf("cd: Too many arguments.\n");
        return 1;
    }
    if (my_strcmp(data->cmd[1], "-") != 0 &&
        stat(data->path, &sb) == -1) {
        my_printf("%s: No such file or directory.\n", data->path);
        return 1;
    }
    if (S_ISDIR(sb.st_mode)) {
        old_p = my_strdup(cwd);
        chdir(data->path);
    } else
        my_printf("%s: Not a directory.\n", data->path);
    return 0;
}
