/*
** EPITECH PROJECT, 2019
** minishell2
** File description:
** main.c
*/

#include "mysh.h"
#include "myprintf.h"

char *curr_dir(char *str)
{
    char *tmp;
    int i = 0;
    int j = 0;
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == '/')
            count++;
    for (int n = 0; n < count; i++)
        if (str[i] == '/')
            n++;
    tmp = malloc(sizeof(char) * my_strlen(&str[i]) + 1);
    for (; str[i]; j++) {
        tmp[j] = str[i];
        i++;
    }
    tmp[j] = 0;
    return (tmp);
}

int check_separator(char *str)
{
    static const char *tab[] = {";", "||", "|", "&", "&&"};

    for (int i = 0; i < 5; i++) {
        sep = i;
        if (my_strcmp(str, tab[i]) == 0)
            return (0);
    }
    return (1);
}

char **get_one_cmd(data_t *info, char **tab)
{
    char **tmp = malloc(sizeof(char *) * (count_lines(&tab[info->i]) + 1));
    int i = 0;

    while (tab[info->i] != NULL && check_separator(tab[info->i]) == 0)
        info->i++;
    for (; tab[info->i] != NULL && check_separator(tab[info->i]) != 0; i++) {
        tmp[i] = my_strdup(tab[info->i]);
        info->i++;
    }
    tmp[i] = NULL;
    return (tmp);
}

void manage_mult_cmd(data_t *info)
{
    char **all_cmd = str_to_wordtab(info->str);

    info->i = 0;
    info->cmd = get_one_cmd(info, all_cmd);
    while (info->cmd[0] != NULL) {
        check_command(info);
        if (info->cmd[0] == NULL || (ret_val != 0 && sep == 4) ||
(ret_val == 0 && sep == 1))
            break ;
        info->cmd = get_one_cmd(info, all_cmd);
    }
}

int launch_sh(char **env)
{
    data_t info;
    char cwd[256];

    get_my_env(&info, env);
    while (1) {
        if (getcwd(cwd, sizeof(cwd)) == NULL)
            my_printf(":( $");
        else
            my_printf("[%s]$ ", curr_dir(cwd));
        info.str = get_next_line(0);
        if (info.str == NULL)
            exit_command(0);
        else if (info.str[0] != 0) {
            manage_mult_cmd(&info);
        }
        free(info.str);
    }
    return (0);
}

int main(int ac, char **av, char **envp)
{
    sep = 0;
    ret_val = 0;
    if (ac != 1)
        return (1);
    (void)av;
    launch_sh(envp);
    return (0);
}
