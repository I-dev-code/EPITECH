/*
** EPITECH PROJECT, 2019
** display_map.c
** File description:
** display_map
*/

#include "navy.h"

int display_map(char **array)
{
    int a = 0;

    for (; array[a] != NULL; a++) {
        my_putstr(array[a]);
        my_putchar('\n');
    }
    return (0);
}

int display_line(t_map *map)
{
    my_putstr(map->ft_line);
    my_putchar('\n');
    my_putstr(map->sd_line);
    my_putchar('\n');
    return (0);
}
