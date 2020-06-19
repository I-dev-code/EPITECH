/*
** EPITECH PROJECT, 2018
** debug_next.c
** File description:
** debug_next.c
*/

#include "my.h"

int key_next(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "-w") == 0 ||
            my_strcmp(av[i], "--without-next") == 0 ) {
            return (1);
        }
        i++;
    }
    return (0);
}

void display_key_next(char **av)
{
    char *str = malloc(sizeof(char) * 10);
    int a = 0;

    a = key_next(av);
    if (a == 1) {
        my_printf("Next :  false\n");
    }
    else
        my_printf("Next :  Yes\n", str);
}
