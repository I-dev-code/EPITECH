/*
** EPITECH PROJECT, 2018
** display_map.c
** File description:
** display with ncurses
*/

#include "sokoban.h"

void display_map(char *buf, data_array *data)
{
    WINDOW *boite;
    int a = 0;
    int b = 0;
    char **array = convert_in_array(buf, data);
    
    initscr();
    while(buf[b]) {
        printw(array[a], LINES, COLS);
        refresh();
        if(getch() != 410)
            break;
    }
    endwin();
    free(boite);
    return 0;
}
