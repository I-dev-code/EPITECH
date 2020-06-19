/*
** EPITECH PROJECT, 2019
** PSU_42sh_2018
** File description:
** echo.c
*/

#include "myprintf.h"
#include "mysh.h"

void echo_cmd(data_t *info)
{
    if (info->cmd[1] != NULL && my_strcmp("$?", info->cmd[1]) == 0) {
        my_printf("%d\n", ret_val);
        return ;
    }
    if (info->cmd[1] != NULL)
        my_printf("%s", info->cmd[1]);
    write(1, "\n", 1);
}
