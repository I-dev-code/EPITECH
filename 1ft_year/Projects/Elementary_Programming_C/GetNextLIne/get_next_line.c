/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** get_next_line
*/

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char *line = malloc(sizeof(char) * READ_SIZE);
    static char buf[READ_SIZE];
    int a = 0;    
    static int i = 0;
    static int j = 0;
    static int nb = 0;

    if (fd < 0)
        return (NULL);
    while (1) {
        if (i == 0) {
            i = read(fd, buf, READ_SIZE);
            buf[i] = '\0';
            j = 0;
        }
        line[a] = buf[j];
        if (line[a] != '\n' && line[a] != '\0') {
            a++;
            j++;
            i--;
        }
        else if (line[a] == '\0' && a == 0 && nb != 0)
            return (NULL);
        else {
            i--;
            if (buf[j] != '\0')
            j++;
            line[a] = '\0';
            nb++;
            return (line);
        }
    }
}
