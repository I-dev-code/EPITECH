/*
** EPITECH PROJECT, 2018
** my_print_revalpha.c
** File description:
** print alphabet revers
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_revalpha(void)
{
    char a = 122;

    while (a >= 97) {
        my_putchar(a);
        a--;
    }
    return (0);
}
