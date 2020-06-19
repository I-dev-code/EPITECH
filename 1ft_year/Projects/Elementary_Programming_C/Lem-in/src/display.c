/*
** EPITECH PROJECT, 2019
** display
** File description:
** lemin
*/

#include "my.h"

int size_my_tab(char **tab)
{
    int i = 0;

    for (; tab[i] != NULL; i++);
    return i;
}

void display(anthill_t *data)
{
    int b = 0;

    my_putstr("#number_of_ants\n");
    my_put_nbr(data->nbr_ant);
    my_putstr("\n");
    my_putstr("#rooms\n");
    disp_room(data);
    my_putstr("#tunnels\n");
    for (; data->tunnels[b] != NULL; b++) {
        my_putstr(data->tunnels[b]);
        my_putchar('\n');
    }
    my_putstr("#moves\n");
}

void disp_room(anthill_t *data)
{
    int i = 0;

    for (; data->room[i] != NULL; i++) {
        if (my_strcmp(data->room[i], data->start) == 0)
            my_putstr("##start\n");
        if (my_strcmp(data->room[i], data->end) == 0)
            my_putstr("##end\n");
        my_putstr(data->room[i]);
        my_putchar('\n');
    }
}
