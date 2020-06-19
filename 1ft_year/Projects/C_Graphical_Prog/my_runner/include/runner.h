/*
** EPITECH PROJECT, 2019
** runner.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#ifndef _RUNNER_H_
#define _RUNNER_H_

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

typedef struct t_list
{
    sfEvent event;
    sfVideoMode mode;
    sfRenderWindow *window;
    sfSprite *obstacle;
    sfSprite *player;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfVector2f move;
    sfVector2f jump;
    sfVector2f size;
    sfVector2f pos_obstacle;
    sfVector2f move_obs;
    int status;
}t_list;

typedef struct t_node
{
    sfSprite *sprite;
    sfVector2f move;
    struct t_node *prev;
    struct t_node *next;
}t_node;

typedef struct t_main
{
    int size;
    struct t_node *start;
    struct t_node *end;
}t_main;

//my_runner.c
void draw_sprite(t_main *list, t_list *my_window);
void anime_sprite(t_list *my_window);
void jump_event(t_list *my_window);
int open_map(t_list *my_window, t_main *list);
int main(int ac, char **av);

//init_struc.c
void init_struct(t_list *my_window);
void init_rect(t_list *my_window);

//my_linked_list.c
t_main *my_linked_list(t_main *list, char *filepath, float move_value);
t_main *init_linked_list(void);
sfSprite *create_my_sprite(char *filepath);

//games_rules.c
void game_rules(void);

//utils.c
void my_putchar(char c);
int my_putstr(char const *str);

#endif /* !_RUNNER_H_ */
