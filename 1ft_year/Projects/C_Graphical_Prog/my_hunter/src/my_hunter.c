/*
** EPITECH PROJECT, 2018
** my_hunter.c
** File description:
** game hunter
*/

#include "hunter.h"

int open_map(t_list *spr_txt, moove_list *moove, menu_list *menu)
{
    if (!spr_txt->window)
        return (84);
    while (sfRenderWindow_isOpen(spr_txt->window)) {
        sfRenderWindow_display(spr_txt->window);
        sfRenderWindow_clear(spr_txt->window, sfBlack);
        game(spr_txt, moove, menu);
        while (sfRenderWindow_pollEvent(spr_txt->window, &spr_txt->event)) {
            if (spr_txt->event.type == sfEvtClosed)
                sfRenderWindow_close(spr_txt->window);
        }
    }
    return (0);
}

void game(t_list *spr_txt, moove_list *moove, menu_list *menu)
{
    if (menu->status == 0) {
        display(spr_txt, menu);
        my_menu(menu, moove, spr_txt);
    }
    else if (menu->status != 0) {
        sfRenderWindow_setMouseCursorVisible(spr_txt->window, sfFalse);
        display_sprite(spr_txt, moove, menu);
        anime_sprite(moove);
        moove_my_sprite(moove, spr_txt, menu);
    }
}

void display_sprite(t_list *spr_txt, moove_list *moove, menu_list *menu)
{
    sfSprite_setTextureRect(spr_txt->canard_spr, moove->rect);
    sfRenderWindow_drawSprite(spr_txt->window, spr_txt->sprite_bckg, NULL);
    sfRenderWindow_drawSprite(spr_txt->window, spr_txt->canard_spr, NULL);
    moove->mouse = sfMouse_getPositionRenderWindow(spr_txt->window);
    moove->mouse_pos.x = moove->mouse.x - 50;
    moove->mouse_pos.y = moove->mouse.y - 50;
    sfSprite_setPosition(menu->scop_spr, moove->mouse_pos);
    sfRenderWindow_drawSprite(spr_txt->window, menu->scop_spr, NULL);
    sfRenderWindow_drawText(spr_txt->window, menu->score, NULL);
}

void main(int ac, char **av)
{
    t_list spr_txt;
    moove_list moove;
    menu_list menu;

    if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h')
        game_rules();
    else {
        init_struct(&spr_txt);
        init_rect(&moove);
        init_menu_list(&menu);
        init_score(&menu, &spr_txt, &moove);
        open_map(&spr_txt, &moove, &menu);
    }
}
