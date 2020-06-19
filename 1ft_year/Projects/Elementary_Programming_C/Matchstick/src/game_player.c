/*
** EPITECH PROJECT, 2019
** game_player.c
** File description:
** game player
*/

#include "matchstick.h"

int game_player_line(t_list *info)
{
    write(1, "Line: ", 6);
    info->line = get_next_line(0);
    if (info->line == NULL)
        return (-1);
    if (check_line(info) == 1)
        return (1);
    else
        return (0);
}

int game_player_matches(t_list *info)
{
    write(1, "Matches: ", 9);
    info->number = get_next_line(0);
    if (info->number == NULL)
        return (-1);
    if (check_matches(info) == 1)
        return (1);
    else
        return (0);
}

char **filling_my_array(t_list *info)
{
    int lenght = 0;
    int a = 0;
    info->numb = my_getnbr(info->number);

    for (lenght = info->lenght; info->array[info->line2][lenght] != '|';
        lenght--);
    for (; a < info->numb; a++) {
        info->array[info->line2][lenght] = ' ';
        lenght--;
    }
    return (info->array);
}

int game_player(t_list *info)
{
    int status = 1;
    while (status == 1) {
        status = game_player_line(info);
        if (status == -1)
            return -1;
    }
    status = 1;
    while (status == 1) {
        status = game_player_matches(info);
        if (status == -1)
            return -1;
        if (check_new_line(info, status) == -1)
            return -1;
    }
    info->win_or_lose = 2;
    display(info);
}

int removed_match(t_list *info)
{
    for (int win_check = 0; 1;) {
        if (game_player(info) == -1)
            return -1;
        info->array = filling_my_array(info);
        info->number_matches -= my_getnbr(info->number);
        display_array(info);
        win_check = check_win_or_lose(info);
        if (win_check != 0)
            return win_check;
        ia_game(info);
        info->number_matches -= info->numb_ia;
        return (check_win_or_lose(info));
    }
}