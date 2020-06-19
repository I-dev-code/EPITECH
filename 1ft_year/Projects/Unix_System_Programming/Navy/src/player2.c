/*
** EPITECH PROJECT, 2019
** player2.c
** File description:
** signal player 2
*/

#include "navy.h"

int pid_opponent;

int player_two(pid_t pid_player1)
{
    pid_t pid_player2 = getpid();

    my_putstr("my_pid:\t");
    my_put_nbr(pid_player2);
    my_putchar('\n');
    kill(pid_player1, SIGUSR1);
    my_putstr("successfully connected\n");
    return (0);
}

void waiting_player_two(void)
{
    struct sigaction handle_sig;

    sigemptyset(&handle_sig.sa_mask);
    handle_sig.sa_flags = SA_SIGINFO;
    handle_sig.sa_handler = &player_one_successfully_connected;
    sigaction(SIGUSR1, &handle_sig, NULL);
    pause();
}

void player_two_connection(int signum, siginfo_t *siginfo, void *ucontext)
{
    (void) signum;
    (void) ucontext;
    pid_opponent = siginfo->si_pid;
    kill(siginfo->si_pid, SIGUSR1);
    my_putstr("successfully connected\n");
}
