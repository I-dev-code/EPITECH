/*
** EPITECH PROJECT, 2019
** init_struct.c
** File description:
** initialisation struct
*/

#include "navy.h"

int init_struct_map(t_map *map)
{
    map->ft_line = " |A B C D E F G H";
    map->sd_line = "-+---------------";
    map->array = NULL;
    map->lenght = 17;
    map->height = 8;
    return (0);
}

int init_struct_position(t_pos *pos)
{
    pos->pos = NULL;
    pos->position_boats = NULL;
    pos->lenght = 7;
    pos->height = 4;
    return (0);
}

int init_struct_info_position(t_infopos *info)
{
    info->lenght = 0;
    info->ft_square = 0;
    info->sd_square = 0;
    info->ft_number = 0;
    info->sd_number = 0;
    info->a = 0;
    info->b = 2;
    info->c = 3;
    info->d = 5;
    info->e = 6;
    return (0);
}

int init_struct(t_map *map, t_pos *pos, t_infopos *info)
{
    init_struct_map(map);
    init_struct_position(pos);
    init_struct_info_position(info);
    return (0);
}
