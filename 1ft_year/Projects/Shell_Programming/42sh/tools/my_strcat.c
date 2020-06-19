/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** my_strcat.c
*/

#include <stdlib.h>
#include <stdbool.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    char *tmp = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)) + 1);
    int i = 0;
    int k = 0;

    for (; dest[i] != '\0'; i++)
        tmp[i] = dest[i];
    while (src[k] != '\0') {
            tmp[i + k] = src[k];
            k++;
    }
    tmp[i + k] = '\0';
    return (tmp);
}
