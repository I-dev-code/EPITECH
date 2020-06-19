/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** my_strdup.c
*/

#include "myprintf.h"

char *my_strdup(char const *src)
{
    char *tmp = malloc(sizeof(char ) * my_strlen(src) + 1);
    int i = 0;

    if (src == NULL)
        return (NULL);
    while (src[i] != '\0') {
        tmp[i] = src[i];
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}
