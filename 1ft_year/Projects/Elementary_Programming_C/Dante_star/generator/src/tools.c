/*
** EPITECH PROJECT, 2019
** tools.c
** File description:
** tools.c
*/

#include "dante.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i], 1);
    return (0);
}
