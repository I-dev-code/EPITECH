/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** init_and_set
*/

#include "../include/my.h"

void initialize_struct(my_struct *info)
{
    info->speed_troll.y = 0;
    info->speed_troll.x = -25;
    info->rect_troll.left = 5705 - 815;
    info->rect_troll.top = 0;
    info->rect_troll.width = 815;
    info->rect_troll.height = 600;
    info->pos_troll.y = 500;
    info->pos_troll.x = 2000;
    info->pos_deck.x = 1900;
    info->pos_deck.y = 5000;
    info->pos_load_bar.x = 200;
    info->pos_load_bar.y = 700;
    info->pos_start.x = 700;
    info->pos_start.y = 350;
    info->pos_quit.x = 700;
    info->pos_quit.y = 500;
    info->pos_deck.x = 700;
    info->pos_deck.y = 840;
}

void initialize_struct_second(my_struct *info)
{
    info->pos_bt_1.x = 710;
    info->pos_bt_1.y = 977;
    info->pos_bt_2.y = 977;
    info->pos_bt_2.x = 850;
    info->pos_bt_3.y = 977;
    info->pos_bt_3.x = 984;
    info->pos_bt_4.y = 977;
    info->pos_bt_4.x = 1114;
    info->rect_load_bar.width = 696;
    info->rect_load_bar.height = 64;
    info->rect_load_bar.left = 0;
    info->rect_load_bar.top = 0;
    info->status = 0;
}

void init_and_clock(my_struct *info)
{
    info->tmp = 0;
    info->clock = sfClock_create();
    info->clock_troll = sfClock_create();
    info->clock_s_l = sfClock_create();
    info->clock_s_l = sfClock_create();
    initialize_struct_second(info);
    initialize_struct(info);
}

sfSprite *my_img(char *str)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture;

    texture = sfTexture_createFromFile(str, NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}

int screen_loading(my_struct *info)
{

    if (ELAPSED_S_LOAD > 0.5) {
        if (info->rect_load_bar.left < 4874)
            info->rect_load_bar.left += info->rect_load_bar.width;
        if (info->rect_load_bar.left >= (4874 - info->rect_load_bar.width))
            info->status = MENU;
        sfClock_restart(info->clock_s_l);
        sfSprite_setTextureRect(info->progress_bar, info->rect_load_bar);
    }
    return 0;
}
