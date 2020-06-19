/*
** EPITECH PROJECT, 2019
** get_next_line.c
** File description:
** get_next_line.c
*/

#include "get_next_line.h"
#include "n4s.h"

static char *my_realloc(char *str)
{
    int i = 0;
    char *data = malloc(sizeof(char) * (my_strlen(str) + READ_SIZE));

    while (str[i] != '\0') {
        data[i] = str[i];
        i++;
    }
    return (data);
}

static char get_char(void)
{
    const int size = 1;
    const int fd = 0;
    char buffer;

    if (read(fd, &buffer, size) == 1)
        return (buffer);
    else
        return (NULL);
}

char *get_next_line(void)
{
    int pos = 0;
    char *buffer = malloc(sizeof(char) * READ_SIZE);
    char c = '\0';

    while (1) {
        if ((c = get_char()) == NULL)
            return (NULL);
        if (c == '\n') {
            buffer[pos] = '\0';
            return (buffer);
        } else
            buffer[pos] = c;
        buffer = my_realloc(buffer);
        pos++;
    }
}