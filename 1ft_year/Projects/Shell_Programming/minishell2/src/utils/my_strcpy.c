/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** copy a string in another
*/

#include "get_next_line.h"
#include "minishell2.h"

char *my_strcpy(char *dest, char *src)
{
    int a = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[a] != '\0') {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';
    return (dest);
}
