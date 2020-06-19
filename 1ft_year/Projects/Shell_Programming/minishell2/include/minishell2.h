/*
** EPITECH PROJECT, 2019
** minishell1.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#ifndef MINISHELL1_H_
        #define MINISHELL1_H_

#define VALUE_MAX_EXIT (256)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <dirent.h>
#include <wait.h>

//check_command.c
int is_one_value(char **tab);

//command_list
int manage_exit(char **tab);
int manage_cd(char **tab);

//put_command_into_tab.c
int put_command_into_tab(char **env, char *command);

//my_str_to_word_array.c
char **my_str_to_tab(char *str, char charact);

//my_strcmp.c
int my_strcmp(char *s1, char *s2);

//output.c
void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char const *str);

//output_error.c
void my_putchar_err(char c);
int my_putstr_err(char const *str);

//string_to_int.c
int string_to_int(char *str);

//my_strcat.c
char *my_strcat(char *dest, char *src);
char *my_strcpy(char *dest, char *src);
char *my_realloc(char *str, int ln);
int display_my_env(char **tab, char **env);
int manage_setenv(char **tab, char **env);
int manage_binary(char **tab, char **env);
int parse_my_arg(char **tab, char **env);

#endif /* !MINISHELL1_H_ */
