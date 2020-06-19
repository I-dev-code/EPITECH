/*
** EPITECH PROJECT, 2018
** debug.c
** File description:
** debug.c
*/

#include "my.h"

int return_debug(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "-D") == 0 ||
            my_strcmp(av[i], "--debug") == 0)
            return (1);
        i++;
    }
    return (0);
}

int display_debug(char **av)
{
    int b = 0;

    if (return_debug(av) == 1) {
        my_printf("*** DEBUG MODE ***\n");
        display_key_left(av);
        display_key_right(av);
        display_key_turn(av);
        display_key_drop(av);
        display_key_quit(av);
        display_key_pause(av);
        display_key_next(av);
        display_key_level(av);
        display_key_size(av);
        b = tetrimino_nbr();
        if (b == 84)
            return (84);
    }
    return (0);
}

int my_compare_string(char const *s1, char const *s2)
{
    int n = 0;
    int p = 0;

    while (s2[n] != '\0') {
        if (s1[p] != s2[n]) {
            return (-1);
        }
        n = n + 1;
        p++;
    }
    return (0);
}

int return_getch(void)
{
    int input = 0;

    input = getch();
    if (input == -1)
        return (1);
    else
        return (0);
    return (0);
}
