/*
** EPITECH PROJECT, 2019
** n4s.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#pragma once

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define END_COMMAND ("Track Cleared")
#define START_SIMULATION ("start_simulation\n")
#define STOP_SIMULATION ("stop_simulation\n")
#define COMMENT_LIMIT_SIZE (250)

//converter.c
int my_put_float(double nbr);
double my_atof(char *str);

//function_display.c
void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);
int my_put_err(char *str);
int my_strcmp(char const *s1, char const *s2);

//bridge_speed_dir.c
int dir_or_speed(char *str, int nbr);

//string.c
int finished_sim(char *str);
char *clear_info(char *str);

//my_str_to_tab_delim.c
char **my_str_to_tab(char *str, char charact);

//get_next_line.c
char *get_next_line(void);

//function_free.c
int free_all(char *str, char **tab);