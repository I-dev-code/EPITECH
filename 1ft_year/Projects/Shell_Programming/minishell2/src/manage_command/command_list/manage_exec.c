/*
** EPITECH PROJECT, 2019
** manage_exec.c
** File description:
** execve
*/

#include "minishell2.h"
#include "get_next_line.h"

static int check_error(pid_t my_pid)
{
    if (WTERMSIG(my_pid) == SIGFPE) {
        my_putstr_err("Floating exception\n");
    }
    if (WTERMSIG(my_pid) == 11) {
        my_putstr_err("Segmentation fault\n");
    }
    return (0);
}

static char *is_binary(char *command)
{
    char *bin = my_strcat("/bin/", command);
    char *usr_bin = my_strcat("/usr/bin/", command);

    if (open(bin, O_RDONLY) != -1)
        return (bin);
    else if (open(usr_bin, O_RDONLY) != -1)
        return (usr_bin);
    else
        return (NULL);
}

static int print_error_bin(char *command)
{
    DIR *dir = opendir(command);

    if (dir == NULL) {
        my_putstr_err(command);
        my_putstr_err(": Command not found.\n");
    }
    else {
        my_putstr_err(command);
        my_putstr_err(": Permission denied.\n");
    }
    return (0);
}

int manage_binary(char **tab, char **env)
{
    int status = 0;
    pid_t my_pid = 0;
    char *binary = is_binary(tab[0]);

    if (binary != NULL)
        tab[0] = my_strcpy(tab[0], binary);
    my_pid = fork();
    if (my_pid == -1)
        exit(1);
    else if (my_pid == 0)
        status = execve(tab[0], tab, env);
    else
        wait(&my_pid);
    check_error(my_pid);
    if (status == -1)
        print_error_bin(tab[0]);
    kill(my_pid, 0);
}