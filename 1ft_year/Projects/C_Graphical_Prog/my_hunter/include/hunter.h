/*
** EPITECH PROJECT, 2018
** hunter.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#ifndef _HUNTER_H
#define _HUNTER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/System/Time.h>
#include <SFML/System/Export.h>
#include <SFML/System/Types.h>
#include <SFML/Audio.h>

typedef struct t_list {
    sfEvent event;
    sfVideoMode mode;
    sfRenderWindow *window;
    sfTexture *texture_bckg;
    sfSprite *sprite_bckg;
    sfTexture *canard_txt;
    sfSprite *canard_spr;
    sfMusic *music;
}t_list;

typedef struct moove_list {
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfVector2f position;
    sfVector2f mouse_pos;
    sfVector2i mouse;
    int a;
}moove_list;

typedef struct menu_list {
    sfTexture *menu;
    sfSprite *menu_spr;
    sfTexture *scop;
    sfSprite *scop_spr;
    sfVector2f play;
    sfVector2f pos_score;
    int status;
    int life;
    sfText *score;
    sfFont *font;
}menu_list;

//my_hunter.c
int open_map(t_list *spr_txt, moove_list *moove, menu_list *menu);
void game(t_list *spr_txt, moove_list *moove, menu_list *menu);
void display_sprite(t_list *spr_txt, moove_list *moove, menu_list *menu);
void main(int ac, char **av);

//init_struct.c
void init_struct(t_list *spr_txt);
void init_rect(moove_list *moove);
void init_score(menu_list *menu, t_list *spr_txt, moove_list *moove);

//animation.c
void anime_sprite(moove_list *moove);
void moove_my_sprite(moove_list *moove, t_list *spr_txt, menu_list *menu);

//menu.c
void init_menu_list(menu_list *menu);
int my_menu(menu_list *menu, moove_list *moove, t_list *spr_txt);
void display(t_list *spr_txt, menu_list *menu);

//games_rules.c
void game_rules(void);

//utils.c
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *int_to_char(int nb);
#endif /* !_HUNTER_H */
