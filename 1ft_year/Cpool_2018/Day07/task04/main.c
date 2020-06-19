/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** print all argu
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;

    while (i < ac) {
        my_putstr(av[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
