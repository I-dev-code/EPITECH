/*
** EPITECH PROJECT, 2019
** utils.c
** File description:
** function utils
*/

#include "navy.h"

int fill_vertical(t_map *map, int length, int x, int y)
{
    for (int i = 0; i < length; i++)
        map->array[y++][x] = length + '0';
    return (0);
}

int fill_horizontal(t_map *map, int length, int x, int y)
{
    for (int i = 0; i < length; i++) {
        x += 2;
        map->array[y][x] = length + '0';
    }
    return (0);
}

int find_sens_boats(t_pos *pos, int a, int x)
{
    if ((pos->pos[a][2] - 'A') % 2 == 0) {
        x = pos->pos[a][2] - 'A';
        x += 1 * x;
        return (x);
    }
    else {
        x = pos->pos[a][2] - 'A';
        x += ((2 * x) / 2);
        return (x);
    }
}

int filling_array_boards(t_pos *pos, t_map *map)
{
    int length;
    int x;
    int y;

    for (int a = 0; pos->pos[a] != NULL; a++) {
        length = pos->pos[a][0] - '0';
        x = find_sens_boats(pos, a, x);
        y = pos->pos[a][3] - '0' - 1;
        if (pos->pos[a][2] == pos->pos[a][5]){
            x += 2;
            fill_vertical(map, length, x, y);
        }
        else
            fill_horizontal(map, length, x, y);
    }
    return (0);
}
