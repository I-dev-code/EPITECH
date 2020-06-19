/*
** EPITECH PROJECT, 2018
** my_realloc.c
** File description:
** function my_realloc
*/

#include "minishell2.h"

char *my_realloc(char *str, int ln)
{
    int i = 0;
    char *data = malloc(sizeof(char) * (my_strlen(str) + ln + 1));

    while (str[i] != '\0') {
        data[i] = str[i];
        i++;
    }
    return (data);
}