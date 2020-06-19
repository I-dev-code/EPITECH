/*
** EPITECH PROJECT, 2018
** size_tretis.c
** File description:
** size_tretris.c
*/

#include "my.h"

int size_tetrimino(int i, int y)
{
    char **dos = open_tetrimino();
    char **tmp = get_order(dos);
    int a = 1;

    tmp  = readd(dos[i]);
    if (tmp[0][y] < 48 || tmp[0][y] > 57 ||
    tmp[0][y + 2] < 48 || tmp[0][y + 2] > 57) {
        my_printf(" Error\n");
        return (0);
    }
    else {
        my_printf(" Size %c*%c : ", tmp[0][y], tmp[0][y + 2]);
        my_printf(" Color %c :\n", tmp[0][y + 4]);
    }
    while (tmp[a] != NULL) {
        my_printf("%s", tmp[a]);
        a++;
    }
    my_printf("\n");
    return (0);
}

char return_size_tetris(char *str, int i)
{
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            return (str[i - 1]);
        }
        i++;
    }
    return (str[i]);
}
