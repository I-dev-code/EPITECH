/*
** EPITECH PROJECT, 2018
** information.c
** File description:
** file for info
*/

#include"struct.h"
#include"tetris.h"
#include <stdlib.h>
#include <stdlib.h>
#include "my.h"

int find_name(char *str, struct tetriminos *game)
{
    int i = 0;
    int j = 0;
    char *str2 = ".tetrimino";
    game->name2 = malloc(sizeof(char) * 99);
    j = my_strlen(str2);
    i = my_strlen(str);

    while (j != 0) {
        i--;
        j--;
    }
    i--;
    j = i;
    while (i >= 0)
        game->name2[j--] = str[i--];
    return (0);
}

int jump_space(char *str, int i)
{
    while (str[i] == 32)
        i++;
    return (i);
}

int get_inf(char *str, struct tetriminos *game)
{
    int i = 0;
    int j = 0;
    char *str_x = malloc(sizeof(char) * 5);
    char *str_y = malloc(sizeof(char) * 5);
    char *str_color= malloc(sizeof(char) * 5);

    i = jump_space(str, i);
    while (str[i] != 32)
        str_x[j++] = str[i++];
    game->size_x = argv_int(str_x);
    j = 0;
    i = jump_space(str, i);
    while (str[i] != 32)
        str_y[j++] = str[i++];
    game->size_y = argv_int(str_y);
    j = 0;
    i = jump_space(str, i);
    str_color[j++] = str[i++];
    game->color = argv_int(str_color);
}

int analyse_tetriminos(char *str)
{
    int i = 0;

    while (str[i] != '\n') {
        if (str[i] >= 48 && str[i] <= 57) {
            i++;
        }
        else if (str[i] == 32) {
            i++;
        }
        else
            return (1);
    }
    return (0);
}

int analyse_string(char *str)
{
    int i = my_strlen(str);
    int j = my_strlen(str2);
    char *str2 = ".tetrimino";

    while (j != 0) {
        if (str[i] != str2[j])
            return (1);
        i--;
        j--;
    }
    return (0);
}
