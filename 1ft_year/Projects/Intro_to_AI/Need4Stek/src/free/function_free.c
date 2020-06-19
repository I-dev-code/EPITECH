/*
** EPITECH PROJECT, 2019
** function_free.c
** File description:
** free my buffer
*/

#include "n4s.h"

int free_all(char *str, char **tab)
{
    if (str != NULL)
        free(str);
    if (tab != NULL)
        for (int a = 0; tab[a]; a++)
            free(tab[a]);
    free(tab);
    return (0);
}