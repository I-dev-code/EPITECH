/*
** EPITECH PROJECT, 2018
** bsq.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#ifndef _BSQ_H
#define _BSQ_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//open_map.c
char *open_map(char *str);
int main(int ac, char **av);

//utils.c
void my_putchar(char c);
int my_strline(char const *str);

//rb_errors.c
int rb_print_err(char *str);
void rb_xerror(char *c);
int check_files(char *buf);

//convert_to_int.c
int strwidth(char *str);
int strlenght(char *str);
int **my_array_malloc(int width, int lenght);
int **convert_to_int(char *str, int width, int lenght);

//bsq.c
int find_smallest(int **tab, int a, int b);
void process_bsq(int **tab);

//convert_to_char.c
int *find_coordinate(int **tab);
int **convert_my_square(int **tab);
char *convert_to_char(int **tab, int width, int lenght);

#endif /* ! _BSQ_H_ */
