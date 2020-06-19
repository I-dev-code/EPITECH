/*
** EPITECH PROJECT, 2019
** game_ia.c
** File description:
** my ia playing
*/

#include "matchstick.h"

int display_ia(t_list *info)
{
    my_putstr("AI's turn...\n");
    my_putstr("AI removed ");
    my_put_nbr(info->numb_ia);
    my_putstr(" match(es) from line ");
    my_put_nbr(info->line_ia);
    my_putchar('\n');
    return (0);
}

int random_matches(t_list *info)
{
    info->line_ia = my_getnbr(info->numb_matches);
    info->numb_ia = 1;
    int count = check_number_of_matches(info, info->line_ia);
    if (info->numb > count)
        info->numb = count;
    change_line(info);
    filling_my_array_ia(info);
    display_ia(info);
    return (0);
}

int filling_my_array_ia(t_list *info)
{
    int lenght = 0;
    int a = 0;

    for (lenght = info->lenght; info->array[info->line_ia][lenght] != '|';
        lenght--);
    for (; a < info->numb_ia; a++) {
        info->array[info->line_ia][lenght] = ' ';
        lenght--;
    }
    return (0);
}

int change_line(t_list *info)
{
    int count = check_number_of_matches(info, info->line_ia);

    if (count == 0) {
        info->line_ia -= 1;
    }
    return (0);
}

int ia_game(t_list *info)
{
    random_matches(info);
    info->win_or_lose = 1;
    for (int a = 0; info->array[a] != '\0'; a++) {
        my_putstr(info->array[a]);
        my_putchar('\n');
    }
    return (0);
}