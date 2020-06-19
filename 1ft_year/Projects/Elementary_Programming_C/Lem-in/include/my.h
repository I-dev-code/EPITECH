/*
** EPITECH PROJECT, 2017
** file.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


typedef struct anthill_s
{
    char *end;
    char *start;
    char **room;
    char **tunnels;
    int nbr_ant;
}anthill_t;

//check.c
char *clean_str(char *str);
char **clean_space_array(char **tab);
char **strcpy_array(char **src, int k, int j);
int check_bad_char(char **tab);
char **clean_comment(char **tab);

//display.c
int size_my_tab(char **tab);
void display(anthill_t *data);
void disp_room(anthill_t *data);

//init.c
void init_struct(anthill_t *data);
int init_wrong(char **tab, anthill_t *data, int i);
int init(char **tab, anthill_t *data);
int init_room(char **tab, anthill_t *data);

//main.c
int my_strlen(char *str);
char *my_strcpy(char *src, char *dest);
char **malloc_my_board(int ln, int cln);
char **read_my_anthill(void);
int main(void);

//tool.c
void my_putchar(char c);
int my_putstr(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_getnbr(char const *str);
int my_put_nbr(int nb);

#endif /* MY_H */
