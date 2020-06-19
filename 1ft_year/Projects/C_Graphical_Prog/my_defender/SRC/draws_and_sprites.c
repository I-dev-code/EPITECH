/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** draws_and_sprites
*/

#include "../include/my.h"

void my_sprites_second(my_struct *info)
{
    info->bg = my_img("img/map_my_defender.png");
    info->troll = my_img("img/troll_run.png");
    sfSprite_setPosition(info->troll, info->pos_troll);
    sfSprite_setScale(info->troll, (sfVector2f){0.45, 0.45});
    info->build_bt_1 = my_img("img/button_build.png");
    info->build_bt_2 = my_img("img/button_build.png");
    info->build_bt_3 = my_img("img/button_build.png");
    info->build_bt_4 = my_img("img/button_build.png");
    info->lose_screen = my_img("img/screen_lose.png");
    info->deck = my_img("img/deck.png");
    sfSprite_setScale(info->deck, (sfVector2f){0.30, 0.25});
    sfSprite_setScale(info->build_bt_1, (sfVector2f){0.27, 0.25});
    sfSprite_setScale(info->build_bt_2, (sfVector2f){0.27, 0.25});
    sfSprite_setScale(info->build_bt_3, (sfVector2f){0.27, 0.25});
}

void my_sprites(my_struct *info)
{
    sfSprite_setScale(info->build_bt_4, (sfVector2f){0.27, 0.25});
    info->screen_loading = my_img("img/ecran_chargement.png");
    info->progress_bar = my_img("img/progress_bar_2.png");
    info->screen_menu = my_img("img/map_menu-Recovered.png");
    info->start_butt = my_img("img/bouton_play.png");
    info->quit_butt = my_img("img/quit_Buttons.png");
    sfSprite_setTextureRect(info->start_butt, (sfIntRect){0, 0, 373, 94});
    sfSprite_setTextureRect(info->build_bt_1, (sfIntRect){0, 0, 415, 100});
    sfSprite_setTextureRect(info->build_bt_2, (sfIntRect){0, 0, 415, 100});
    sfSprite_setTextureRect(info->build_bt_3, (sfIntRect){0, 0, 415, 100});
    sfSprite_setTextureRect(info->build_bt_4, (sfIntRect){0, 0, 415, 100});
    sfSprite_setPosition(info->build_bt_1, info->pos_bt_1);
    sfSprite_setPosition(info->build_bt_2, info->pos_bt_2);
    sfSprite_setPosition(info->build_bt_3, info->pos_bt_3);
    sfSprite_setPosition(info->build_bt_4, info->pos_bt_4);
    sfSprite_setPosition(info->start_butt, info->pos_start);
    sfSprite_setPosition(info->quit_butt, info->pos_quit);
    sfSprite_setPosition(info->deck, info->pos_deck);
    info->buttonhit = sfSprite_getGlobalBounds(info->start_butt);
    info->buttonquit = sfSprite_getGlobalBounds(info->quit_butt);
}

void my_draws(my_struct *info)
{
    sfRenderWindow_clear(info->window, sfBlack);
    if (info->status == GAME) {
        sfRenderWindow_drawSprite(info->window, info->bg, NULL);
        sfRenderWindow_drawSprite(info->window, info->troll, NULL);
        sfRenderWindow_drawSprite(info->window, info->deck, NULL);
        sfRenderWindow_drawSprite(info->window, info->build_bt_1, NULL);
        sfRenderWindow_drawSprite(info->window, info->build_bt_2, NULL);
        sfRenderWindow_drawSprite(info->window, info->build_bt_3, NULL);
        sfRenderWindow_drawSprite(info->window, info->build_bt_4, NULL);
    }
    if (info->status == LOAD) {
        sfRenderWindow_drawSprite(info->window, info->screen_loading, NULL);
        sfRenderWindow_drawSprite(info->window, info->progress_bar, NULL);
    }
    if (info->status == MENU) {
        sfRenderWindow_drawSprite(info->window, info->screen_menu, NULL);
        sfRenderWindow_drawSprite(info->window, info->start_butt, NULL);
        sfRenderWindow_drawSprite(info->window, info->quit_butt, NULL);
    }
    sfRenderWindow_display(info->window);
}

void screen_menu(my_struct *data, int p)
{
    hover_button_play(data, p);
    hover_button_quit(data, p);
}

my_struct *my_window(my_struct *info)
{
    sfVideoMode video_mode = {1920, 1080, 32};

    info->window = sfRenderWindow_create(video_mode, "Defend the Kingdom!",
        sfDefaultStyle, NULL);
    if (!info->window)
        return (NULL);
    return (info->window);
}
