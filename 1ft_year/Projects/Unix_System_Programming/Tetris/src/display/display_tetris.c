/*
** EPITECH PROJECT, 2019
** display_tetris.c
** File description:
** display tetris
*/

#include "my.h"

void display_writting(void)
{
    add_color_func(1);
    mvprintw(1, 24, " __________  ");
    mvprintw(2, 24, "|___    ___| ");
    mvprintw(3, 24, "    |  |     ");
    mvprintw(4, 24, "    |  |     ");
    mvprintw(5, 24, "    |  |     ");
    mvprintw(6, 24, "    |__|     ");
    mvprintw(1, 37, " _______     ");
    mvprintw(2, 37, "|   __  \\   ");
    mvprintw(3, 37, "|  |__|  |   ");
    mvprintw(4, 37, "|   __  //   ");
    mvprintw(5, 37, "|  |  \\ \\  ");
    mvprintw(6, 37, "|__|   \\_\\ ");
    display_tetris();
}

void display_tetris(void)
{
    add_color_func(3);
    mvprintw(1, 49, " __________  ");
    mvprintw(2, 49, "|___   ____| ");
    mvprintw(3, 49, "    |  |     ");
    mvprintw(4, 49, "    |  |     ");
    mvprintw(5, 49, " ___|  |___  ");
    mvprintw(6, 49, "|__________| ");
    mvprintw(1, 63, " _________   ");
    mvprintw(2, 63, "|   ______|  ");
    mvprintw(3, 63, "|  |_______  ");
    mvprintw(4, 63, "|_______   | ");
    mvprintw(5, 63, "  ______|  | ");
    mvprintw(6, 63, " |_________| ");
    map_top();
    map_middel();
    map_end();
}

void display_map(void)
{
    add_color_func(2);
    mvprintw(1, 0,  " __________  ");
    mvprintw(2, 0,  "|___    ___| ");
    mvprintw(3, 0,  "    |  |     ");
    mvprintw(4, 0,  "    |  |     ");
    mvprintw(5, 0,  "    |  |     ");
    mvprintw(6, 0,  "    |__|     ");
    mvprintw(1, 13, " ________    ");
    mvprintw(2, 13, "|   _____|   ");
    mvprintw(3, 13, "|  |___      ");
    mvprintw(4, 13, "|   ___|     ");
    mvprintw(5, 13, "|  |_____    ");
    mvprintw(6, 13, "|________|   ");
    display_writting();
}

void add_color_func(int i)
{
    initscr();
    start_color();

    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_RED, COLOR_BLACK);

    attron(COLOR_PAIR(i));
    refresh();
    endwin();
}