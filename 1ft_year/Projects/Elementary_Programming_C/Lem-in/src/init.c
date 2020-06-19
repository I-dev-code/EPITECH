/*
** EPITECH PROJECT, 2019
** init.c
** File description:
** init.c
*/

#include "my.h"

void init_struct(anthill_t *data)
{
    data->end = NULL;
    data->start = NULL;
    data->tunnels = NULL;
    data->nbr_ant = 0;
}

int init_wrong(char **tab, anthill_t *data, int i)
{
    if (tab[i + 1][0] == '#') {
        my_putstr("error");
        return (84);
    }
}

int init(char **tab, anthill_t *data)
{
    int k = 0;
    data->room = malloc_my_board(100, 10);
    data->tunnels = malloc_my_board(100, 10);
    for (int i = 1; tab[i]; i++) {
        data->nbr_ant = my_getnbr(tab[0]);
        if (my_strcmp(tab[i], "##start") == 0) {
            if (init_wrong(tab, data, i) == 84)
                return (84);
            data->start = tab[i + 1];
        }
        if (my_strcmp(tab[i], "##end") == 0) {
            if (init_wrong(tab, data, i) == 84)
                return (84);
            data->end = tab[i + 1];
        }
        if (tab[i][1] == '-')
            data->tunnels[k++] = tab[i];
    }
    init_room(tab, data);
    data->tunnels[k] = NULL;
}

int init_room(char **tab, anthill_t *data)
{
    int j = 0;

    for (int i = 1; tab[i]; i++) {
        if (tab[i][1] != '-' && tab[i][0] != '#') {
            data->room[j] = tab[i];
            j++;
        }
    }
    data->room[j] = NULL;
    return (0);
}
