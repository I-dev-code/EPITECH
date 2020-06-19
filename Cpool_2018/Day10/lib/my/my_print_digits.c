/*
** EPITECH PROJECT, 2018
** my_print_digits.c
** File description:
** print all digit in order
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
    char a = 48;

    while (a <= 57) {
        my_putchar(a);
        a++;
    }
    return (0);
}
