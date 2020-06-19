/*
** EPITECH PROJECT, 2019
** player
** File description:
** navy: part of signals
*/

#include "navy.h"

void player_one_successfully_connected(int signum)
{
    (void) signum;
    my_putstr("enemy connected\n");
}

int player_one(void)
{
    pid_t pid_player1 = getpid();

    my_putstr("my_pid:\t");
    my_put_nbr(pid_player1);
    my_putstr("\nwaiting for enemy connection...\n\n");
    waiting_player_two();
    return (0);
}

void waiting_player_one(void)
{
    struct sigaction handle_sig;

    sigemptyset(&handle_sig.sa_mask);
    handle_sig.sa_flags = 0;
    sigaction(SIGUSR1, &handle_sig, NULL);
    pause();
}
