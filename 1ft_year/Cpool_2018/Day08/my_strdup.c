/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** duplicate a string
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int a = 0;
    int b = 0;
    char *dest;

    if (src == 0)
        return (0);
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
