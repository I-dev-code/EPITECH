/*
** EPITECH PROJECT, 2019
** minishell2
** File description:
** manage_cmd.c
*/

#include "mysh.h"
#include "myprintf.h"

int get_cmd(data_t *info)
{
    static const char *cmd[] = {"env", "setenv", "unsetenv", "echo"};
    int j = -1;

    for (int i = 0; i < 4; i++) {
        if (my_strcmp(info->cmd[0], cmd[i]) == 0) {
            j = i;
            break;
        }
    }
    return (j);
}

void others_cmd(data_t *info)
{
    int j = get_cmd(info);

    switch (j) {
    case 0:
        ret_val = print_env(info);
        break;
    case 1:
        info->env = set_env(info);
        break;
    case 2:
        info->env = my_unsetenv(info->env, info->cmd[1]);
        break;
    case 3:
        echo_cmd(info);
        break;
    default:
        my_execve(info);
        break;
    }
}

void check_command(data_t *info)
{
    if (my_strcmp(info->cmd[0], "exit") == 0) {
        info->str = clear_str(info->str);
        my_exit(info);
    } else if (my_strcmp(info->cmd[0], "cd") == 0)
        ret_val = cd_command(info);
    else
        others_cmd(info);
}
