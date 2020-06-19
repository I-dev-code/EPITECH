/*
** EPITECH PROJECT, 2019
** init_struc.c
** File description:
** initialisation of struct
*/

#include "runner.h"

void init_struct(t_list *my_window)
{
    my_window->event;
    my_window->mode.width = 1080;
    my_window->mode.height = 608;
    my_window->mode.bitsPerPixel = 64;
    my_window->window = sfRenderWindow_create(my_window->mode, "infinite runner",
                                            sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(my_window->window, 60);
    sfRenderWindow_setVerticalSyncEnabled(my_window->window, 1);
    my_window->obstacle = create_my_sprite("ressources/obstacles/rock.png");
    my_window->player = create_my_sprite("ressources/perso/player.png");
    init_rect(my_window);
}

void init_rect(t_list *my_window)
{
    my_window->rect.left = 0;
    my_window->rect.top = 0;
    my_window->rect.width = 95;
    my_window->rect.height = 85;
    my_window->clock = sfClock_create();
    my_window->move.x = 0;
    my_window->move.y = 6;
    my_window->jump.x = 0;
    my_window->jump.y = -40;
    my_window->size.x = 0;
    my_window->size.y = 0;
    my_window->pos_obstacle.x = 0;
    my_window->pos_obstacle.y = 1100;
    my_window->move_obs.x = -100;
    my_window->move_obs.y = 0;
    my_window->status = 0;
}