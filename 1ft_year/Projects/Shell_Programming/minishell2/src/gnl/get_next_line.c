/*
** EPITECH PROJECT, 2019
** get_next_line.c
** File description:
** get_next_line
*/

#include "get_next_line.h"
#include "minishell2.h"

static char *set_gnl_str(char *str)
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
    char buffer = '\0';

    if (read(fd, &buffer, size) == 1)
        return (buffer);
    else
        return (-1);
}

char *get_next_line(void)
{
    int pos = 0;
    char *buffer = malloc(sizeof(char) * READ_SIZE);
    char c = '\0';

    while (1) {
        if ((c = get_char()) == -1) {
            return (NULL);
        }
        if (c == '\n') {
            buffer[pos] = '\0';
            return (buffer);
        } else
            buffer[pos] = c;
        buffer = set_gnl_str(buffer);
        pos++;
    }
}