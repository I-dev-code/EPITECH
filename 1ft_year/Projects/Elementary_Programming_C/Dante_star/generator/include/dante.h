/*
** EPITECH PROJECT, 2019
** dante.h
** File description:
** dante.h
*/

#ifndef DANTE_H_
#define DANTE_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

typedef struct Element Element;
struct Element
{
    int *coord_arg;
    Element *next;
    Element *prev;
};

typedef struct List List;
struct List
{
    int length;
    Element *first;
    Element *last;
};

char **create_my_map(char **map, int x, int y, int i);
char **perfect(char **map, int *coord, int k);
char **imperfect(char **map, int *coord);
int my_strlen(char *str);
char *my_strcpy(char *src, char *dest);
char **malloc_my_board(int ln, int cln);
int generator(int x, int y, char *param, List *list);
void my_putchar(char c);
int my_putstr(char *str);

#endif /* DANTE_H */
