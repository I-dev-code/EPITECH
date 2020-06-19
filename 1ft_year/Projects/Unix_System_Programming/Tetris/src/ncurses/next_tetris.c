/*
** EPITECH PROJECT, 2018
** next_tetris.c
** File description:
** next_tetris.c
*/

#include "my.h"

void next_top(void)
{
    int x = 0;
    int y = 150;
    int a = 0;

    mvprintw(x, y, "/");
    while (a < 20) {
        mvprintw(x, y + 1, "-");
        y++;
        a++;
    }
    mvprintw(x, y, "\\");
}

void next_middel(void)
{
    int x = 1;
    int y = 150;
    int a = 0;
    int b = 0;

    while (a < 10) {
        mvprintw(x, y, "|");
        while (b < 19) {
            mvprintw(3, 153, "Next :");
            b++;
            y++;
            mvprintw(x, y, " ");
        }
        b = 0;
        a++;
        mvprintw(x, y + 1, "|\n");
        x++;
        y = 150;
    }
}

void next_end(void)
{
    int x = 10;
    int y = 150;
    int a = 0;

    mvprintw(x, y, "\\");
    while (a <= 19) {
        y++;
        mvprintw(x, y, "-");
        a++;
    }
    mvprintw(x, y, "/");
}

void display_next(void)
{
    next_top();
    next_middel();
    next_end();
}
