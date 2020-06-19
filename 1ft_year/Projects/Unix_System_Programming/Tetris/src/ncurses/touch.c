/*
** EPITECH PROJECT, 2018
** touch.c
** File description:
** touch.c
*/

#include "my.h"

int touch(void)
{
    int input = 0;

    input = getch();
    switch (input) {
    case KEY_RIGHT:
        return (1);
    case KEY_LEFT:
        return (2);
    case 410:
        return (3);
    default:
        break;
    }
    return (0);
}

int touch_display(int b)
{
    b = touch();
    display_game();
    return (b);
}