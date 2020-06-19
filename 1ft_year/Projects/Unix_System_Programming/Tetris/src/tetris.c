/*
** EPITECH PROJECT, 2018
** tetris.c
** File description:
** main tetris
*/

#include "struct.h"
#include "tetris.h"
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <unistd.h>
#include "my.h"

int option (int argc, char **argv, struct game *game)
{
    int i;
    int index = 0;

    static struct option options[] =
        {
            {"help",    no_argument, 0, 'h'},
            {"level",     no_argument, 0, 'L'},
            {"key-left",  no_argument, 0, 'l'},
            {"key-right",  no_argument, 0, 'r'},
            {"key-turn",  no_argument, 0, 't'},
            {"key-drop",    no_argument, 0, 'd'},
            {"file-quit",    no_argument, 0, 'q'},
            {"file-pause",    no_argument, 0, 'p'},
            {"map-size",    no_argument, 0, 'm'},
            {"without-next",    no_argument, 0, 'w'},
            {"debug",         no_argument, 0, 'D'},
            {0, 0, 0, 0}
        };

    i = getopt_long(argc, argv, "hLlrtdqpmwD", options, &index);
    switch (i)
    {
    case 0:
        if (optarg)
            write(2, "invalide option\n", 17);
        break;
    case 'h':
        display_help();
        break;

    case 'L':
        break;

    case 'l':
        break;

    case 'r':
        break;

    case 't':
        break;

    case 'd':
        break;

    case 'q':
        break;

    case 'p':
        break;

    case 'w':
        break;

    case 'D':
        debug();
        break;

    case '?':
        break;
    }
    return (0);
}

int parse_debug(char *str)
{
    if ((my_strcmp(str, "-D") == 0) || (my_strcmp(str, "--debug") == 0))
        return (1);
    else
        return (0);
}

int main(int argc, char *argv[])
{
    struct game game;
    init(&game);
    if (argc == 0)
        tetris_game(&game);
    else
        option(argc, argv, &game);
}

int main(int ac, char **av)
{
    if (ac == 1)
        tetris_game(&game);
        else if (ac == 2)
        return (parse_my_arg(ac, av));
}