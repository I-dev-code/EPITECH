/*
** EPITECH PROJECT, 2019
** myh
** File description:
** my_h_defender
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include "../include/struct.h"
#include <SFML/Audio.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System.h>

#define ELAPSED_TIME sfTime_asSeconds(sfClock_getElapsedTime(info->clock))
#define ELAPSED_S_LOAD sfTime_asSeconds(sfClock_getElapsedTime(info->clock_s_l))

void anim_my_troll(my_struct *info);
void manage_status(my_struct *info, sfEvent *event);
void manage_status_second(my_struct *info, int status_game);
void main_loop(my_struct *info, sfEvent *event);
void lose_game(my_struct *info);
void init_button(my_struct *button);
sfSprite *create_my_sprite(char *filepath);
int pause_game(sfEvent *event, my_struct *button);
void draw_sprite(my_struct *info);
int manage_quit_button(sfEvent *event, my_struct *info);
int manage_home_button(sfEvent *event, my_struct *button);
int manage_buttons(sfEvent *event, my_struct *button);
int manage_all_button(sfEvent *event, my_struct *button);
void my_sprites_second(my_struct *info);
void my_sprites(my_struct *info);
void my_draws(my_struct *info);
void screen_menu(my_struct *info, int p);
my_struct *my_window(my_struct *info);
int screen_loading(my_struct *info);
sfSprite *my_img(char *str);
void init_and_clock(my_struct *info);
void initialize_struct_second(my_struct *info);
void initialize_struct(my_struct *info);
void hover_button_play(my_struct *data, int p);
void hover_button_quit(my_struct *data, int p);
int anime_buttons_q(my_struct *button, sfEvent *event, int p);
int anime_buttons_h(my_struct *button, sfEvent *event, int p);
int anime_buttons_p(my_struct *button, sfEvent *event, int p);
void pause_game_cut(sfEvent *event, my_struct *info);

#endif
