/*
** EPITECH PROJECT, 2018
** menu.c
** File description:
** menu for my_hunter
*/

#include "hunter.h"

void init_menu_list(menu_list *menu)
{
    menu->menu = sfTexture_createFromFile("sprites/menu.png", NULL);
    menu->menu_spr = sfSprite_create();
    menu->scop = sfTexture_createFromFile("sprites/scop.png", NULL);
    menu->scop_spr = sfSprite_create();
    menu->play.x = 0;
    menu->play.y = 0;
    menu->status = 0;
    menu->life = 0;
    sfSprite_setTexture(menu->menu_spr, menu->menu, sfTrue);
    sfSprite_setTexture(menu->scop_spr, menu->scop, sfTrue);
}

int my_menu(menu_list *menu, moove_list *moove, t_list *spr_txt)
{
    sfSprite_setPosition(menu->menu_spr, menu->play);
    if (spr_txt->event.type == sfEvtMouseButtonPressed) {
        moove->mouse = sfMouse_getPositionRenderWindow(spr_txt->window);
        if (moove->mouse.y > moove->position.y + 420 &&
            moove->mouse.y < moove->position.y + 540) {
            if (moove->mouse.x < moove->position.x + 990 &&
                moove->mouse.x > moove->position.x + 425) {
                menu->status++;
            }
        }
    }
}

void display(t_list *spr_txt, menu_list *menu)
{
    sfRenderWindow_drawSprite(spr_txt->window, menu->menu_spr, NULL);
}
