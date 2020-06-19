/*
** EPITECH PROJECT, 2019
** init_struct.c
** File description:
** initialisation structur
*/

#include "matchstick.h"

void init_struct(t_list *info, char *str, char *column)
{
    info->array = NULL;
    info->numb_matches = str;
    info->number_matches = (my_getnbr(info->numb_matches) *
    my_getnbr(info->numb_matches));
    info->lenght = ((2 * my_getnbr(str)) + 1);
    info->height = (my_getnbr(str) + 2);
    info->matches = my_getnbr(column);
    info->line = NULL;
    info->number = NULL;
    info->numb = 0;
    info->line2 = 0;
    info->numb_ia = 0;
    info->line_ia = 0;
    info->win_or_lose = 0;
}