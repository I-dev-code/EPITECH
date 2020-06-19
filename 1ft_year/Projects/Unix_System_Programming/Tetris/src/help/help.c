/*
** EPITECH PROJECT, 2018
** help.c
** File description:
** help.c
*/

#include "my.h"

int display_h(char **av)
{
    my_printf("Usage:  %s [options]\n", av[0]);
    my_putstr("Options:\n --help               Display this help\n");
    my_putstr(" -L --level={num}     Start Tetris at level num (def: 1)\n");
    my_putstr(" -l --key-left={K}    Move the tetrimino LEFT using the ");
    my_putstr("K key (def; left arrow)\n");
    my_putstr(" -r --key-right={K}   Move the tetrimino RIGHT using ");
    my_putstr("the K key (def: right arrow)\n");
    my_putstr(" -t --key-turn={K}    TURN the tetrimino clockwise 90d ");
    my_putstr("using the K key (def: top arrow)\n");
    my_putstr(" -d --key-drop={K}    DROP the tetrimino using the K ");
    my_putstr("key (def: down arrow)\n");
    my_putstr(" -q --key-quit={K}    QUIT the game using the K key ");
    my_putstr("(def: 'q' Key)\n");
    my_putstr(" -p --key-pause={K}   PAUSE/RESTART the game using the ");
    my_putstr("K key (def: space bar)\n");
    my_putstr(" --map-size={row,col} Set the numbers of rows and ");
    my_putstr("columns of the map (def: 20,10)\n");
    my_putstr(" -w --without-next    Hide next tetrimino (def: false)\n");
    my_putstr(" -D --debug           Debug mode (def: false)\n");
    return (0);
}

int help(char **av)
{
    if (my_strcmp("--help", av[1]) == 0) {
        return (1);
    }
    return (0);
}
