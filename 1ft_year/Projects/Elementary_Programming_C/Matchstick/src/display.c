/*
** EPITECH PROJECT, 2019
** display.c
** File description:
** display
*/

#include "matchstick.h"

int display(t_list *info)
{
    my_putstr("Player removed ");
    my_putstr(info->number);
    my_putstr(" match(es) from line ");
    my_putstr(info->line);
    my_putchar('\n');
    return (0);
}

int check_new_line(t_list *info, int status)
{
    for (int new = 1; new == 1 && status == 1;) {
        new = game_player_line(info);
        if (new == -1)
            return -1;
    }
    return 0;
}

int count_total_matches(t_list *info)
{
    int a = 1;
    int b = 1;
    int count = 0;

    for (; info->array[a]; a++) {
        if (info->array[a][b] == '|')
            count++;
        b++;
    }
    return (count);
}

int check_win_or_lose(t_list *info)
{
    int status = count_total_matches(info);

    if (status == 0 && info->win_or_lose == 1) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    else if (status == 0 && info->win_or_lose == 2) {
        my_putstr("You lost, too bad...\n");
        return (2);
    }
    else
        return (0);
}

int display_array(t_list *info)
{
    for (int a = 0; info->array[a]; a++) {
        my_putstr(info->array[a]);
        my_putchar('\n');
    }
}

