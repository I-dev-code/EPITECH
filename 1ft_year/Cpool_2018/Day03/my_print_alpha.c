/*
** EPITECH PROJECT, 2018
** my_print_alpha.c
** File description:
** print alphabet
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
    char a = 97;

    while (a <= 122) {
        my_putchar(a);
        a++;
    }
    return (0);
}
