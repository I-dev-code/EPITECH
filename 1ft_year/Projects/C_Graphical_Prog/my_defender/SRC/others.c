/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** others
*/

#include "../include/my.h"

void draw_sprite(my_struct *info)
{
    sfSprite_setPosition(info->quit_bt, info->quit);
    sfSprite_setPosition(info->resume_bt, info->resume);
    sfSprite_setPosition(info->home_bt, info->home);
    info->resume_pos = sfSprite_getGlobalBounds(info->resume_bt);
    info->home_pos = sfSprite_getGlobalBounds(info->home_bt);
    info->quit_pos = sfSprite_getGlobalBounds(info->quit_bt);
    sfRenderWindow_drawSprite(info->window, info->quit_bt, NULL);
    sfRenderWindow_drawSprite(info->window, info->home_bt, NULL);
    sfRenderWindow_drawSprite(info->window, info->resume_bt, NULL);
}

int manage_quit_button(sfEvent *event, my_struct *info)
{
    int status_game;

    sfRenderWindow_clear(info->window, sfBlack);
    if (info->status == PAUSE && event->type == sfEvtMouseButtonPressed) {
        status_game = anime_buttons_q(info, event, 1);
        if (info->status == PAUSE && event->type == sfEvtMouseButtonPressed) {
            status_game = anime_buttons_q(info, event, 0);
            return (0);
        }
    } else
        status_game = anime_buttons_q(info, event, 2);
    draw_sprite(info);
    sfRenderWindow_display(info->window);
    return status_game;
}

int manage_home_button(sfEvent *event, my_struct *button)
{
    int status_game;

    sfRenderWindow_clear(button->window, sfBlack);
    if (button->status == PAUSE && event->type == sfEvtMouseButtonPressed) {
        status_game = anime_buttons_h(button, event, 1);
        if (button->status == PAUSE && event->type == sfEvtMouseButtonPressed) {
            status_game = anime_buttons_h(button, event, 0);
            return (0);
        }
    } else
        status_game = anime_buttons_h(button, event, 2);
    draw_sprite(button);
    sfRenderWindow_display(button->window);
    return status_game;
}

int manage_buttons(sfEvent *event, my_struct *button)
{
    int status_game;

    sfRenderWindow_clear(button->window, sfBlack);
    if (button->status == PAUSE && event->type == sfEvtMouseButtonPressed) {
        status_game = anime_buttons_p(button, event, 1);
        if (button->status == PAUSE && event->type == sfEvtMouseButtonPressed) {
            status_game = anime_buttons_p(button, event, 0);
            return (0);
        }
    } else
        status_game = anime_buttons_p(button, event, 2);
    draw_sprite(button);
    sfRenderWindow_display(button->window);
    return status_game;
}

int manage_all_button(sfEvent *event, my_struct *button)
{
    if (manage_buttons(event, button) == 1)
        return (1);
    if (manage_home_button(event, button) == 2)
        return (2);
    if (manage_quit_button(event, button) == 3)
        return (3);
}
