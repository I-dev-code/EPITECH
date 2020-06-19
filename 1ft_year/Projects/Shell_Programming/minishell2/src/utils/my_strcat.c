/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** my_strcat
*/

#include "minishell2.h"
#include "get_next_line.h"

char *my_strcat(char *dest, char *src)
{
    int a = 0;
    int b = 0;
    char *str = malloc(sizeof(char) * (my_strlen(src) + my_strlen(dest) + 1));

    for (; dest[a]; a++)
        str[a] = dest[a];
    while (src[b]) {
        str[a] = src[b];
        a++;
        b++;
    }
    str[a] = '\0';
    return (str);
}
