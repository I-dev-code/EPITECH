/*
** EPITECH PROJECT, 2019
** filling_map.c
** File description:
** filling with boats
*/

#include "navy.h"

int check_pos_alpha(t_pos *pos, t_infopos *info)
{
    if (check_alpha(pos->pos[info->a][info->b]) == 1)
        return (1);
    else if (check_alpha(pos->pos[info->a][info->d]) == 1)
        return (1);
    return (0);
}

int check_pos_num(t_pos * pos, t_infopos *info)
{
    if (check_num(pos->pos[info->a][info->c]) == 1)
        return (1);
    else if (check_num(pos->pos[info->a][info->e]) == 1)
        return (1);
    return (0);
}

int get_position_to_int(t_pos *pos, t_infopos *info)
{
    info->ft_square = pos->pos[info->a][info->b];
    info->ft_number = pos->pos[info->a][info->c];
    info->sd_square = pos->pos[info->a][info->d];
    info->sd_number = pos->pos[info->a][info->e];
    return (0);
}

int check_position(t_pos *pos, t_infopos *info)
{
    int total_lenght = 0;

    if (check_pos_num(pos, info) == 1)
        return (1);
    if (check_pos_alpha(pos, info) == 1)
        return (1);
    total_lenght = (((info->sd_square + info->sd_number) -
    (info->ft_square +  info->ft_number)) + 1);
    info->lenght = pos->pos[info->a][0] - '0';
    if (total_lenght != info->lenght)
        return (1);
    info->a++;
    info->lenght++;
    return (0);
}

int isnum(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    if (str[i] < 48 || str[i] > 57)
        return 1;
    return 0;
}
