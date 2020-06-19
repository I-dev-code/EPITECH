/*
** EPITECH PROJECT, 2018
** my_char_to_string
** File description:
** concat a bunch of char to string
*/

#include "../include/myprintf.h"

char *concat_char(int i, char const *str)
{
    char *tmp = malloc(sizeof(char) * (i + 1));
    int j = 0;

    for (; j < i; j++)
        tmp[j] = str[j];
    return (tmp);
}
