/*
** EPITECH PROJECT, 2018
** rb_error.c
** File description:
** utils for error
*/

#include "sokoban.h"

void rb_print_err(char *str)
{
    int a = 0;

    while (str[a])
        a++;
    write(2, str, a);
}

void rb_xerror(char *c)
{
    rb_print_err("Error: ");
    rb_print_err(c);
    rb_print_err("\n");
    exit(84);
}

