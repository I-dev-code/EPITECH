/*
** EPITECH PROJECT, 2018
** mylist.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#ifndef _mylist_h_
#define _mylist_h_

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

linked_list_t *add_linked(linked_list_t *linked_list, char *str);
linked_list_t *my_params_to_list(int argc, char * const *argv);
void my_putchar(char c);

#endif
