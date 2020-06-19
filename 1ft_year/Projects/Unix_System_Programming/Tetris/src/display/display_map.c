/*
** EPITECH PROJECT, 2018
** display_map.c
** File description:
** display_map.c
*/

#include "my.h"

void map_top(void)
{
    add_color_func(1);
    int i = 1;
    int x = 0;
    int y = 81;

    mvprintw(0, 80, "+");
    while (i <= 50) {
        mvprintw(x, y, "-");
        y++;
        i++;
    }
    mvprintw(x, y, "+\n");
}

void map_middel(void)
{
    add_color_func(1);
    int j = 0;
    int p = 0;
    int x = 1;
    int y = 80;

    while (j <= 42) {
        mvprintw(x, y, "|");
        while (p < 50) {
            p++;
            y++;
            mvprintw(x, y, " ");
        }
        p = 0;
        j++;
        mvprintw(x , y + 1, "|\n");
        x++;
        y = 80;
    }
}

void map_end(void)
{
    int n = 0;
    int x = 43;
    int y = 80;

    mvprintw(x, y, "+");
    while (n <= 50) {
        y++;
        mvprintw(x, y, "-");
        n++;
    }
    mvprintw(x, y, "+\n");
}

void display_game(void)
{
    display_score();
    display_map();
    display_next();
}
