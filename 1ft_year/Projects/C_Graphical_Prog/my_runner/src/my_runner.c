/*init_linked_list
** EPITECH PROJECT, 2019
** my_runner.c
** File description:
** infinit runner
*/

#include "runner.h"

void draw_sprite(t_main *list, t_list *my_window)
{
    t_node *node = list->start;
    sfVector2f pos = {0, 0};
    sfVector2f position = {0, 0};

    for (; list->start;) {
        sfSprite_setTextureRect(my_window->player, my_window->rect);
        sfRenderWindow_drawSprite(my_window->window, list->start->sprite, NULL);
        sfRenderWindow_drawSprite(my_window->window, my_window->obstacle, NULL);
        sfRenderWindow_drawSprite(my_window->window, my_window->player, NULL);
        sfSprite_move(list->start->sprite, list->start->move);
        position = sfSprite_getPosition(list->start->sprite);
        if (position.x == -1080) {
            sfSprite_setPosition(list->start->sprite, pos);
        }
        list->start = list->start->next;
   }
   list->start = node;
}

void anime_sprite(t_list *my_window)
{
    my_window->time = sfClock_getElapsedTime(my_window->clock);
    my_window->seconds = my_window->time.microseconds / 1000000.0;

    if (my_window->seconds > 0.05 && my_window->rect.left != 300) {
        sfSprite_move(my_window->player, my_window->move);
        my_window->rect.left += 100;
        sfClock_restart(my_window->clock);
    }
    else if (my_window->rect.left >= 300 && my_window->seconds > 0.05) {
        sfSprite_move(my_window->player, my_window->move);
        my_window->rect.left = 0;
        sfClock_restart(my_window->clock);
    }
}

void jump_event(t_list *my_window)
{
    sfSprite_move(my_window->player, my_window->jump);
}

int open_map(t_list *my_window, t_main *list)
{
    if (!my_window->window)
        return (84);
    while (sfRenderWindow_isOpen(my_window->window)) {
        sfRenderWindow_display(my_window->window);
        sfRenderWindow_clear(my_window->window, sfBlack);
        draw_sprite(list, my_window);
        if (my_window->status == 1) {
            jump_event(my_window);
            my_window->status = 0;
        }
        else
            anime_sprite(my_window);
        while (sfRenderWindow_pollEvent(my_window->window, &my_window->event)) {
            if (sfKeyboard_isKeyPressed(sfKeySpace))
                my_window->status = 1;
            if (my_window->event.type == sfEvtClosed)
                sfRenderWindow_close(my_window->window);
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    t_list my_window;
    t_main *list = init_linked_list();

    if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h') {
        game_rules();
        return (0);
    }
    else {
        init_struct(&my_window);
        open_map(&my_window, list);
        return (0);
    }
    return (0);
}
