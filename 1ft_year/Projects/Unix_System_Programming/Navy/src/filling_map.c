/*
** EPITECH PROJECT, 2019
** filling_map.c
** File description:
** filling with boats
*/

#include "navy.h"

int malloc_position(t_pos *pos)
{
    int a = 0;
    pos->pos = malloc(sizeof(char *) * (pos->height));

    for (; a <= pos->height; a++) {
        pos->pos[a] = malloc(sizeof(char) * (pos->lenght));
    }
    pos->pos[a - 1] = NULL;
    if (pos->pos == NULL)
        return (84);
    else
        return (0);
}

int read_file_pos(t_pos *pos, char *filepath)
{
    int fd = 0;
    struct stat size;

    fd = open(filepath, O_RDONLY);
    if (fd < 0) {
        write(2, "Impossible opening", 18);
        return 84;
    }

    stat(filepath, &size);
    pos->position_boats = malloc(sizeof(char *) * (size.st_size + 1));
    if (size.st_size != 31)
    return 84;
    read(fd, pos->position_boats, size.st_size);
    close(fd);
    return (0);
}

int filling_pos(t_pos *pos)
{
    int a = 0;
    int b = 0;
    int c = 0;

    for (; pos->position_boats[a] != '\0'; a++) {
        if (pos->position_boats[a] == '\n'){
            b++;
            c = 0;
            a++;
        }
        pos->pos[b][c] = pos->position_boats[a];
        c++;
    }
    return (0);
}
