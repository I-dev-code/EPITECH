/*
** EPITECH PROJECT, 2019
** map_empty.c
** File description:
** malloc_map/filing_empty
*/

#include "navy.h"

int malloc_map(t_map *map)
{
    int a = 0;
    map->array = malloc(sizeof(char *) * (map->height));

    for (; a <= map->height; a++) {
        map->array[a] = malloc(sizeof(char) * (map->lenght) + 1);
    }
    map->array[a - 1] = NULL;
    if (map->array == NULL)
        return (84);
    else
        return (0);
}

int filling_map(t_map *map)
{
    int a = 0;
    int b = 0;
    int letter = 49;

    display_line(map);
    for (; a < map->height; a++) {
        map->array[a][b] = letter;
        map->array[a][b + 1] = '|';
        for (b = 2; b <= map->lenght; b += 2) {
            map->array[a][b] = '.';
            map->array[a][b + 1] = ' ';
        }
        map->array[a][b - 1] = '\0';
        b = 0;
        letter++;
    }
    return (0);
    
}

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * my_strlen(src));
    while (src[i] != '\0') {
        str[i] = src[i];
        i = i + 1;
    }
    str[i] = '\0';
    return (str);
}
