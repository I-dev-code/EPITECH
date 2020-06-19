/*
** EPITECH PROJECT, 2018
** animation.c
** File description:
** animation and moove my_sprite
*/

#include "hunter.h"

void anime_sprite(moove_list *moove)
{
    moove->time = sfClock_getElapsedTime(moove->clock);
    moove->seconds = moove->time.microseconds / 1000000.0;

    if (moove->seconds > 0.15 && moove->rect.left != 220) {
        moove->rect.left += 110;
        sfClock_restart(moove->clock);
    }
    else if (moove->rect.left >= 220 && moove->seconds > 0.15) {
        moove->rect.left = 0;
        sfClock_restart(moove->clock);
    }
}

void moove_my_sprite(moove_list *moove, t_list *spr_txt, menu_list *menu)
{
    sfSprite_setPosition(spr_txt->canard_spr, moove->position);
    moove->position.x += 3;

    if (spr_txt->event.type == sfEvtMouseButtonPressed) {
        moove->mouse = sfMouse_getPositionRenderWindow(spr_txt->window);
        if (moove->mouse.y > moove->position.y &&
            moove->mouse.y < moove->position.y + 110) {
            if (moove->mouse.x < moove->position.x + 110 &&
                moove->mouse.x > moove->position.x) {
                moove->position.y = rand() % 500;
                moove->position.x = -200;
                moove->a++;
                sfText_setString(menu->score, int_to_char(moove->a));
            }
        }
    }
    if (moove->position.x >= 1280) {
        moove->position.y = rand() % 500;
        moove->position.x = 0;
    }
}
