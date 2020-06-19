/*
** EPITECH PROJECT, 2019
** my_struct_def
** File description:
** myhstruct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <SFML/Audio.h>

#define LOAD 1
#define GAME 2
#define MENU 3
#define PAUSE 4
#define LOSE 5

typedef struct structure
{
    sfSprite *sprite;
    sfVector2f speed_run;
    sfVector2f pos_load_bar;
    sfVector2f pos_troll;
    sfVector2f speed_troll;
    sfVector2f pos_deck;
    sfVector2f pos_start;
    sfVector2f pos_quit;
    sfVector2f pos_bt_1;
    sfVector2f pos_bt_2;
    sfVector2f pos_bt_3;
    sfVector2f pos_bt_4;
    sfClock *clock;
    sfClock *clock_troll;
    sfTime time;
    sfClock *clock_s_l;
    int tmp;
    int status;
    sfSprite *lose_screen;
    sfSprite *build_bt_1;
    sfSprite *build_bt_2;
    sfSprite *build_bt_3;
    sfSprite *build_bt_4;
    sfSprite *troll;
    sfSprite *screen_menu;
    sfSprite *bg;
    sfSprite *deck;
    sfSprite *screen_loading;
    sfSprite *progress_bar;
    sfTexture *texture;
    sfSprite *sprite2;
    sfFont *font;
    sfText *text;
    sfVector2f pos_score;
    sfMusic *music;
    sfIntRect rect_troll;
    sfIntRect rect_load_bar;
    sfSprite *start_butt;
    sfFloatRect buttonhit;
    sfSprite *quit_butt;
    sfFloatRect buttonquit;
    sfIntRect rect;
    sfSprite *quit_bt;
    sfSprite *home_bt;
    sfSprite *resume_bt;
    sfVector2f quit;
    sfVector2f home;
    sfVector2f resume;
    sfFloatRect quit_pos;
    sfFloatRect home_pos;
    sfFloatRect resume_pos;
    sfRenderWindow *window;
} my_struct;

#endif
