/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** buttons_functions
*/

#include "../include/my.h"

void hover_button_play(my_struct *data, int p)
{
    static int mouse_clic = 0;

    if (sfFloatRect_contains(&data->buttonhit,
        sfMouse_getPositionRenderWindow(data->window).x,
        sfMouse_getPositionRenderWindow(data->window).y)) {
        sfSprite_setTextureRect(data->start_butt,
            (sfIntRect){410, 0, 450, 120});
        if (mouse_clic == 1 && sfEvtMouseButtonReleased)
            data->status = GAME;
        if (p == 2) {
            sfSprite_setTextureRect(data->start_butt,
                (sfIntRect){888, 0, 380, 120});
            mouse_clic = 1;
        }
    }
    else
        sfSprite_setTextureRect(data->start_butt, (sfIntRect){0, 13, 400, 94});
}

void hover_button_quit(my_struct *data, int p)
{
    static int mouse_clic = 0;

    if (sfFloatRect_contains(&data->buttonquit,
        sfMouse_getPositionRenderWindow(data->window).x,
        sfMouse_getPositionRenderWindow(data->window).y)) {
        sfSprite_setTextureRect(data->quit_butt, (sfIntRect){420, 0, 436, 120});
        if (mouse_clic == 1 && sfEvtMouseButtonReleased)
            sfRenderWindow_close(data->window);
        if (p == 2) {
            mouse_clic = 1;
            sfSprite_setTextureRect(data->quit_butt,
                (sfIntRect){905, 0, 370, 120});
        }
    }
    else
        sfSprite_setTextureRect(data->quit_butt, (sfIntRect) {0, 0, 390, 120});
}

int anime_buttons_q(my_struct *button, sfEvent *event, int p)
{
    static int mouse_clic = 0;

    if (sfFloatRect_contains(&button->quit_pos,
        sfMouse_getPositionRenderWindow(button->window).x,
        sfMouse_getPositionRenderWindow(button->window).y)) {
        sfSprite_setTextureRect(button->quit_bt, (sfIntRect){0, 0, 350, 120});
        if (mouse_clic == 1 && event->type == sfEvtMouseButtonReleased) {
            return 3;
        }
        if (p == 2) {
            sfSprite_setTextureRect(button->quit_bt,
                (sfIntRect){414, 0, 439, 120});
            mouse_clic = 1;
        }
    }
    else
        sfSprite_setTextureRect(button->quit_bt, (sfIntRect){0, 0, 350, 120});
    return 0;
}

int anime_buttons_h(my_struct *button, sfEvent *event, int p)
{
    static int mouse_clic = 0;

    if (sfFloatRect_contains(&button->home_pos,
        sfMouse_getPositionRenderWindow(button->window).x,
        sfMouse_getPositionRenderWindow(button->window).y)) {
        sfSprite_setTextureRect(button->home_bt, (sfIntRect){0, 0, 350, 120});
        if (mouse_clic == 1 && event->type == sfEvtMouseButtonReleased) {
            return 2;
        }
        if (p == 2) {
            sfSprite_setTextureRect(button->home_bt,
                (sfIntRect){414, 0, 439, 120});
            mouse_clic = 1;
        }
    }
    else
        sfSprite_setTextureRect(button->home_bt, (sfIntRect){0, 0, 350, 120});
    return 0;
}

int anime_buttons_p(my_struct *button, sfEvent *event, int p)
{
    static int mouse_clic = 0;

    if (sfFloatRect_contains(&button->resume_pos,
        sfMouse_getPositionRenderWindow(button->window).x,
        sfMouse_getPositionRenderWindow(button->window).y)) {
        sfSprite_setTextureRect(button->resume_bt, (sfIntRect){0, 0, 350, 120});
        if (mouse_clic == 1 && event->type == sfEvtMouseButtonReleased) {
            return 1;
        }
        if (p == 2) {
            sfSprite_setTextureRect(button->resume_bt,
                (sfIntRect){414, 0, 439, 120});
            mouse_clic = 1;
        }
    }
    else
        sfSprite_setTextureRect(button->resume_bt,
            (sfIntRect){0, 0, 350, 120});
    return 0;
}
