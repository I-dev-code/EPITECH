/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av)
{
    int a, b = 0;
    int x = 1;
    int y = 100;

    if (ac == 1) {
        b = display_window(x, y);
        if (b == 84)
            return (84);
    }
    else if (ac >= 2) {
        if (help(av) == 1) {
            display_h(av);
            return (0);
        }
        a = display_debug(av);
        if (a == 84)
            return (84);
    }
    return (0);
}
