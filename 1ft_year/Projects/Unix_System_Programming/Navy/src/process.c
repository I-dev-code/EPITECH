/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "navy.h"

int process_navy(char *filepath)
{
    t_map map;
    t_pos pos;
    t_infopos info;
    init_struct(&map, &pos, &info);
    process_pos(&pos, filepath);

    if (process_position(&pos, &info) == 84)
        return (84);
    display_game(&map, &pos);
    return (0);
}

int display_game(t_map *map, t_pos *pos)
{
    my_putstr("my positions:\n");
    process(map, pos, 1);
    my_putchar('\n');
    my_putstr("enemy's positions:\n");
    process(map, pos, 0);
    return (0);
}

int process(t_map *map, t_pos *pos, int a)
{
    malloc_map(map);
    filling_map(map);
    if (a == 1)
        filling_array_boards(pos, map);
    display_map(map->array);
    return (0);
}

int process_pos(t_pos *pos, char *filepath)
{
    if (read_file_pos(pos, filepath) == 84) {
        return 84;
    }
    malloc_position(pos);
    filling_pos(pos);
    return (0);
}

int process_position(t_pos *pos, t_infopos *info)
{
    for (; info->a <= 3;) {
        get_position_to_int(pos, info);
        if (check_position(pos, info) == 1)
            return (84);
    }
    return (0);
}
