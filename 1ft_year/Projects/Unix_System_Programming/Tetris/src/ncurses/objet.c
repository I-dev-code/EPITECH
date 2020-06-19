/*
** EPITECH PROJECT, 2018
** objet.c
** File description:
** objet.c
*/

#include "my.h"

void dodo(void)
{
    refresh();
    usleep(1000000);
}

char *mouv_obj(int x, int y, int r)
{
    char **buf = malloc(sizeof(char *) * 20);
    char **dos;
    int b = 1;

    dos = open_tetrimino();
    buf = readd(dos[r]);
    while (b < 5) {
        mvprintw(x, y, "%s", buf[b]);
        x = x + 1;
        b++;
    }
    return (dos[r]);
}
