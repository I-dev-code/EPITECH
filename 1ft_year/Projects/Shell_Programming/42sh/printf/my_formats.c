/*
** EPITECH PROJECT, 2018
** my_formats.c
** File description:
** all my formats
*/

#include "../include/myprintf.h"

bool my_format(char to_cmp)
{
    char formats[] = {'#', ' ', '.'};

    for (int i = 0; formats[i]; i++) {
        if (formats[i] == to_cmp)
            return (true);
    }
    return (false);
}
