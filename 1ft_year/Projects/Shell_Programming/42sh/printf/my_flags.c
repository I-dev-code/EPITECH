/*
** EPITECH PROJECT, 2018
** my_flags.c
** File description:
** functions for my flags
*/

#include "../include/myprintf.h"

int nb_str_flags(char *to_cmp)
{
    char *flags[] = {"ld", "li", "lld", "lli", "lu", "llu", NULL};
    int i = 0;

    for (; my_strcmp(to_cmp, flags[i]) != 0 && flags[i]; i++);
    return (i);
}

bool my_flags(char to_cmp)
{
    char flags[] = {'c', 's', '%', 'd', 'i', 'b', 'o',
    'x', 'X', 'S', 'u', 'q', 'p'};

    for (int i = 0; flags[i]; i++)
        if (flags[i] == to_cmp)
            return (true);
    return (false);
}

int nb_flags(char to_cmp)
{
    char flags[] = {'c', 's', '%', 'd', 'i', 'b', 'o',
    'x', 'X', 'S', 'u', 'q', 'p'};
    int i = 0;

    for (; flags[i] != to_cmp && flags[i]; i++);
    return (i);
}
