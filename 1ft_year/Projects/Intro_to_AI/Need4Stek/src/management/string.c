/*
** EPITECH PROJECT, 2019
** string.c
** File description:
** function for string
*/

#include "n4s.h"

static int passed_badchar(char *str, int pos)
{
    for (; str[pos] && str[pos] != ':'; pos--);
    pos--;
    for (; str[pos] && str[pos] != ':'; pos--);
    pos++;
    return (pos);
}

int finished_sim(char *str)
{
    char *buffer = malloc(sizeof(char) * my_strlen(str));
    int a = my_strlen(str) - 1;
    int b = 0;

    if (buffer == NULL){
        return (84);
    }
    a = passed_badchar(str, a);
    for (; str[a] && str[a] != ':';)
        buffer[b++] = str[a++];
    buffer[b] = '\0';
    if (my_strcmp(END_COMMAND, buffer) == 0)
    {
        free(buffer);
        my_putstr(STOP_SIMULATION);
        return (1);
    }
    free(buffer);
    return (0);
}

char *clear_info(char *str)
{
    char *str_clear = malloc(sizeof(char) * COMMENT_LIMIT_SIZE);
    int a = 0;
    int b = 0;

    for (int i = 0; i < 3;)
        if (str[a++] == ':')
            i++;
    for (; str[a]; a++) {
        if ((str[a] >= '0' || str[a] <= '9') ||
            str[a] == ':' || str[a] == '.') {
            str_clear[b] = str[a];
            b++;
        }
    }
    str_clear[b] = '\0';
    return (str_clear);
}