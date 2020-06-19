/*
** EPITECH PROJECT, 2018
** convert_to_array.c
** File description:
** convert string into array
*/

#include "sokoban.h"

int strlenght(char *buf, data_array *data)
{
    int a = 0;
    
    while (buf[a]) {
        if (buf[a] == '\n')
            data->line++;
        a++;
    }
    return (data->line);
}

int strwidth(char *buf, data_array *data)
{
    int a = 0;

    while (buf[a] != '\n') {
        data->column++;
        a++;
    }
    return (data->column);
}

char **malloc_array(char *buf, data_array *data)
{
    int a = 0;
    char **array;

    array = malloc(sizeof(char *) * data->line);
    while (a <= data->line) {
        array[a] = malloc(sizeof(char) * data->column + 1);
        a++;
    }
    return (array);
}

char **convert_in_array(char *buf, data_array *data)
{
    int b = 0;
    int c = 0;
    char **array = malloc_array(buf, data);

    if (array == NULL)
        exit (84);
    for (int a = 0; buf[a]; a++) {
        if (buf[a] != '\n')
            array[b][c] = buf[a];
        else {
            b++;
            c = -1;
        }
        c++;
    }
    array[b] = NULL;
    return (array);
}
