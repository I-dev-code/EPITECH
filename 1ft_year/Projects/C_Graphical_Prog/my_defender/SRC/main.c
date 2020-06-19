/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** main
*/

#include "../include/my.h"

void anim_my_troll(my_struct *info)
{
    if (ELAPSED_TIME > 0.1) {
        info->rect_troll.left -= info->rect_troll.width;
        if (info->rect_troll.left <= 0) {
            info->rect_troll.left = 5705 - 815;
        }
        if (sfSprite_getPosition(info->troll).x <= -10)
        lose_game(info);
        sfClock_restart(info->clock);
        sfSprite_setTextureRect(info->troll, info->rect_troll);
        sfSprite_move(info->troll, info->speed_troll);
    }
}

void manage_status(my_struct *info, sfEvent *event)
{
    int status_game = 0;

    while (sfRenderWindow_pollEvent(info->window, event)) {
        if (event->type == sfEvtClosed)
            sfRenderWindow_close(info->window);
        if (info->status == MENU && event->type == sfEvtMouseButtonPressed) {
            screen_menu(info, 1);
            if (info->status == MENU && event->type == sfEvtMouseButtonPressed)
                screen_menu(info, 2);
        } else
            screen_menu(info, 0);
        if (event->type == sfEvtKeyPressed && event->key.code == sfKeyEscape) {
            info->status = PAUSE;
            status_game = pause_game(event, info);
        }
    }
    manage_status_second(info, status_game);
}

void manage_status_second(my_struct *info, int status_game)
{
    if (status_game == 1)
        info->status = GAME;
    if (status_game == 2)
        info->status = MENU;
    if (status_game == 3)
        sfRenderWindow_close(info->window);
}

void main_loop(my_struct *info, sfEvent *event)
{
    info->status = LOAD;
    while (sfRenderWindow_isOpen(info->window)) {
        my_draws(info);
        manage_status(info, event);
        if (info->status == LOAD) {
            screen_loading(info);
        }
        if (info->status == GAME)
            anim_my_troll(info);
    }
    sfRenderWindow_destroy(info->window);
}

int main(int ac, char **av)
{
    my_struct info;
    sfEvent event;
    info.window = my_window(&info);


    init_and_clock(&info);
    sfRenderWindow_setFramerateLimit(info.window, 60);
    my_sprites_second(&info);
    my_sprites(&info);
    main_loop(&info, &event);
    return (0);
}
