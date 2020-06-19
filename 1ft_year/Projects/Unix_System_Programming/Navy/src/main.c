/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "navy.h"

int navy(int ac, char **av)
{
    int pid_player1;
    int retval;
    char *filepath = my_strdup(av[1]);

    if (ac == 2)
        return manage_player_1(filepath);
    if (ac == 3) {
        if (isnum(av[1]) == 1)
            return 84;
        retval = my_getnbr(av[1], &pid_player1);
        if (retval == -1)
            return (84);
        filepath = my_strdup(av[2]);
        player_two(pid_player1);
        if (process_navy(filepath) == 84)
            return (84);
    }
    return (0);
}

int manage_player_1(char *filepath)
{
    player_one();
    if (process_navy(filepath) == 84)
        return (84);
}

void print_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n ");
    my_putstr("     first_player_pid:\t(only for the 2nd player) ");
    my_putstr("pid of the first player.\n ");
    my_putstr("     navy_positions:\tfile representing the positions ");
    my_putstr("of the ships.\n");
}

int main(int ac, char **av)
{
    if (ac < 2 || ac > 3)
    return 84;
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        print_help();
        return 0;
    }
    if (navy(ac, av) == 84)
        return (84);
}
