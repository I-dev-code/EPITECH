/*
** EPITECH PROJECT, 2018
** my_params_to_list.c
** File description:
** params into linked list
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/mylist.h"

linked_list_t *add_linked(linked_list_t *linked_list, char *str)
{
    linked_list_t *new_link = malloc(sizeof(linked_list_t));

    new_link->data = str;
    new_link->next = linked_list;

    return (new_link);
}

linked_list_t *my_params_to_list(int argc, char * const *argv)
{
    int a = 0;
    linked_list_t *first_maillon;

    first_maillon = NULL;

    while (a != argc) {
        first_maillon = add_linked(first_maillon, argv[a]);
        a++;
    }
    return (first_maillon);
}
