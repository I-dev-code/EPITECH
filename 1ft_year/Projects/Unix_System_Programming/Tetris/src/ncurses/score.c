/*
** EPITECH PROJECT, 2018
** score.c
** File description:
** score.c
*/

#include "my.h"

void score_top(void)
{
    int x = 20;
    int y = 0;
    int a = 0;

    mvprintw(x, y, "/");
    while (a <= 40) {
        y++;
        mvprintw(x, y, "-");
        a++;
    }
    mvprintw(x, y + 1, "\\");
}

void score_middel(void)
{
    int x = 21;
    int y = 0;
    int b = 0;

    for (int a = 0; a <= 20; a++) {
        mvprintw(x, y, "|");
        while (b <= 40) {
            mvprintw(23, 5, "Score :");
            mvprintw(25, 5, "hight score :");
            mvprintw(28, 5, "Level :");
            mvprintw(30, 5, "Timer :");
            y++;
            mvprintw(x, y, " ");
            b++;
        }
        b = 0;
        mvprintw(x, y + 1, "|\n");
        x++;
        y = 0;
    }
}

void score_end(void)
{
    int x = 41;
    int y = 0;
    int a = 0;

    mvprintw(x, y, "\\");
    while (a <= 40) {
        y++;
        mvprintw(x, y, "-");
        a++;
    }
    mvprintw(x, y + 1, "/");
}

void display_score(void)
{
    score_top();
    score_middel();
    score_end();
}
