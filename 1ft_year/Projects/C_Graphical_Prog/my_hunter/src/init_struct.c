/*
** EPITECH PROJECT, 2018
** init_struct.c
** File description:
** init structure
*/

#include "hunter.h"

void init_score(menu_list *menu, t_list *spr_txt, moove_list *moove)
{
    menu->pos_score.x = 800;
    menu->pos_score.y = 20;
    menu->font = sfFont_createFromFile("sprites/Mistletoe-Regular.ttf");
    menu->score = sfText_create();
    sfText_setString(menu->score, "0");
    sfText_setFont(menu->score, menu->font);
    sfColor rgb = sfColor_fromRGB(50, 50, 50);
    sfText_setCharacterSize(menu->score, 100);
    sfText_setColor(menu->score, rgb);
    sfText_setPosition(menu->score, menu->pos_score);
}

void init_rect(moove_list *moove)
{
    moove->rect.left = 0;
    moove->rect.top = 0;
    moove->rect.width = 110;
    moove->rect.height = 110;
    moove->clock = sfClock_create();
    moove->position.x = 0;
    moove->position.y = 0;
    moove->mouse.x = 0;
    moove->mouse.y = 0;
    moove->a = 0;
}

void init_struct(t_list *spr_txt)
{
    spr_txt->event;
    spr_txt->mode.width = 1280;
    spr_txt->mode.height = 740;
    spr_txt->mode.bitsPerPixel = 64;
    spr_txt->window = sfRenderWindow_create(spr_txt->mode, "hunter game",
                                            sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(spr_txt->window, 200);
    spr_txt->texture_bckg = sfTexture_createFromFile
        ("sprites/hunter_bckg.png", NULL);
    spr_txt->sprite_bckg = sfSprite_create();
    spr_txt->canard_txt = sfTexture_createFromFile("sprites/canard.png", NULL);
    spr_txt->canard_spr = sfSprite_create();
    sfSprite_setTexture(spr_txt->canard_spr, spr_txt->canard_txt, sfTrue);
    sfSprite_setTexture(spr_txt->sprite_bckg, spr_txt->texture_bckg, sfTrue);
    spr_txt->music = sfMusic_createFromFile("sprites/music.ogg");
    sfMusic_setLoop(spr_txt->music, sfTrue);
    sfMusic_play(spr_txt->music);
}
