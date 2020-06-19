/*
** EPITECH PROJECT, 2018
** check_file.c
** File description:
** error gestion for files
*/

#include "sokoban.h"

int check_player(char *buf, map_list *map)
{
    int a = 0;

    while (buf[a]) {
        if (buf[a] == 'P')
            map->player++;
        a++;
    }
    if (map->player != 1) {
        rb_xerror("only one player");
    }
    else
        return (0);
    return (0);
}

int check_boxes_storages(char *buf, map_list *map)
{
    int a = 0;

    while (buf[a]) {
        if (buf[a] == 'X')
            map->boxes++;
        if (buf[a] == 'O')
            map->storage++;
        a++;
    }
    if (map->boxes != map->storage)
        rb_xerror("not as much boxes as storage");
    else
        return (0);
    return (0);
}

int check_all_caract(char *buf)
{
    int a = 0;

    while(buf[a]) {
        if (buf[a] == ' ' || buf[a] == '#' || buf[a] == 'P' ||
            buf[a] == 'O' || buf[a] == 'X' || buf[a] == '\n')
            a++;
        else
            rb_xerror("not a map");
    }
    return (0);
}

void check_files(char *buf, map_list *map)
{
    check_all_caract(buf);
    check_boxes_storages(buf, map);
    check_player(buf, map);
}
