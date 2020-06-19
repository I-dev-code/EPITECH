/*
** EPITECH PROJECT, 2019
** minishell2
** File description:
** mysh.h
*/

#ifndef MYSH_H_
#define MYSH_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int sep;
int ret_val;

typedef struct data_sh
{
    int i;
    char *path;
    char *str;
    char **cmd;
    char **env;
    char *sep;
} data_t;

//execve.c
void my_execve(data_t *);

//echo.c
void echo_cmd(data_t *);

void get_my_env(data_t *, char **);
char *clear_str(char *);

//unsetenv.c
int my_strncmp(char *, char *, int);
char **my_unsetenv(char **, char *);

//env.c
int count_lines(char **);
char **set_env(data_t *);
int print_env(data_t *);

//cd.c
int skip_command(char *);
int cd_command(data_t *);
int count_words(char *);

//manage_cmd
int count_words(char *);
void check_command(data_t *);
bool is_alphanum(char);

//exit.c
void exit_command(int);
void my_exit(data_t *);

//tools.c
char *my_strcat(char *dest, char const *src);
int my_getnbr(char const *);
char **str_to_wordtab(char *);
char **str_to_tab(char *, char);
char *my_strdup(char const *);
char *get_next_line(int);
int my_printf(char const *str, ...);

#endif /* !MYSH_H_ */
