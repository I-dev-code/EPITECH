/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** pause menu
*/

#include "../include/my.h"

void lose_game(my_struct *info)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(info->window)) {
        while (sfRenderWindow_pollEvent(info->window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(info->window);
        }
        sfRenderWindow_clear(info->window, sfBlack);
        sfRenderWindow_drawSprite(info->window, info->lose_screen, NULL);
        sfRenderWindow_display(info->window);
    }
}

void init_button(my_struct *button)
{
    button->rect.left = 0;
    button->rect.top = 0;
    button->rect.width = 366;
    button->rect.height = 100;
    button->quit_bt = create_my_sprite("img/quit_Buttons.png");
    button->resume_bt = create_my_sprite("img/resume_Buttons.png");
    button->home_bt = create_my_sprite("img/home_Buttons.png");
    button->quit.x = 800;
    button->quit.y = 700;
    button->home.x = 800;
    button->home.y = 450;
    button->resume.x = 800;
    button->resume.y = 175;
}

sfSprite *create_my_sprite(char *filepath)
{
    sfIntRect rect = {0, 0, 360, 100};
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}

void pause_game_cut(sfEvent *event, my_struct *info)
{
    while (sfRenderWindow_pollEvent(info->window, event)) {
        if (event->type == sfEvtClosed)
            sfRenderWindow_close(info->window);
        if (event->type == sfEvtKeyPressed && event->key.code == sfKeyEscape)
            info->status = GAME;
    }
}

int pause_game(sfEvent *event, my_struct *button)
{
    init_button(button);
    int game_status = 0;

    sfRenderWindow_setKeyRepeatEnabled(button->window, sfFalse);
    while (sfRenderWindow_isOpen(button->window)) {
        pause_game_cut(event, button);
        game_status = manage_all_button(event, button);
        if (game_status == 1)
            return 1;
        if (game_status == 2)
            return (2);
        if (game_status == 3)
            return 3;
    }
    return (0);
}
