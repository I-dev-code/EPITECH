/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** my_strdup
*/

#include "../../include/my.h"

char *my_strdup(char const *src)
{
    int a = 0;
    int b = 0;
    char *dest;

    if (src == NULL)
        return (NULL);
    while (src[a])
        a++;
    dest = malloc(sizeof(dest) * a + 1);
    while (src[b]) {
        dest[b] = src[b];
        b++;
    }
    dest[b] = '\0';
    return (dest);            
}
