/*
** EPITECH PROJECT, 2018
** read.c
** File description:
** read.c
*/

#include "my.h"

int return_long_read(char *read_tetris)
{
    int n = 0;
    int compt = 0;
    int fd = 0;
    int a = my_strlen(read_tetris) + 1;
    char *str = malloc(sizeof(char ) * 50);

    fd = open(read_tetris, O_RDONLY);
    if (fd == -1 )
        return (84);
    read(fd, str , a);
    while (str[n] != '\0') {
        if (str[n] == '\n') {
            compt++;
        }
        n++;
    }
    if (str[n] == '\0')
        compt++;
    return (compt);
}

char **readd(char *read_tetris)
{
    FILE *fd;
    char **buf = malloc(sizeof(char *) * 20);
    int i = 0;
    size_t len = 0;

    fd = fopen(read_tetris, "r");
    while (i <= 6) {
        buf[i] = malloc(sizeof(char) * 50);
        for (int z = 0; z < 50; z++)
            buf[i][z] = '\0';
        getline(&buf[i], &len, fd);
        i++;
    }
    buf[i] = NULL;
    return (buf);
}

int return_nbr_file(char **buf)
{
    int i = 0;

    if (buf == NULL)
        return (0);
    while (buf[i] != NULL) {
        i++;
    }
    if (buf[i] == NULL) {
        return (i);
    }
    return (0);
}
