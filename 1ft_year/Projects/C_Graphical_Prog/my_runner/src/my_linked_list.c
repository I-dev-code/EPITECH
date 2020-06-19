/*
** EPITECH PROJECT, 2019
** my_linked_list.c
** File description:
** linked_list
*/

#include "runner.h"

t_main *my_linked_list(t_main *list, char *filepath, float move_value)
{
    t_node *node = malloc(sizeof(*node));
    sfVector2f move = {move_value / 2, 0};

    node->move = move;
    node->sprite = create_my_sprite(filepath);
    node->prev = NULL;
    if (list->end == NULL) {
        node->next = NULL;
        list->start = node;
        list->end = node;
    }
    else {
        list->start->prev = node;
        node->next = list->start;
        list->start = node;
    }
    list->size++;
    return (list);
}

t_main *init_linked_list(void)
{
    t_main *list = malloc(sizeof(*list));

    list->size = 0;
    list->start = NULL;
    list->end = NULL;

    list = my_linked_list(list, "ressources/background/clouds_MG_1.png", -6);
    list = my_linked_list(list, "ressources/background/clouds_MG_2.png", -5);
    list = my_linked_list(list, "ressources/background/clouds_MG_3.png", -4);
    list = my_linked_list(list, "ressources/background/mountains.png", -3);
    list = my_linked_list(list, "ressources/background/clouds_BG.png", -2);
    list = my_linked_list(list, "ressources/background/cloud_lonely.png", -1);
    list = my_linked_list(list, "ressources/background/sky.png", 0);
    return (list);
}

sfSprite *create_my_sprite(char *filepath)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);

    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}