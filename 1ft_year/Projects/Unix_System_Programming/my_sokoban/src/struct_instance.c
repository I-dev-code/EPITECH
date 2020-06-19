/*
** EPITECH PROJECT, 2018
** struct_instance.c
** File description:
** initialisation of structur
*/

#include "sokoban.h"

void init_map(map_list *map)
{
    map->player = 0;
    map->boxes = 0;
    map->storage = 0;
}

void init_data(data_array *data)
{
    data->line = 0;
    data->column = 0;
    data->array = NULL;
}
