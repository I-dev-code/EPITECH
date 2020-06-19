/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** print rev argu
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
    int a = ac - 1;

    while (a >= 0) {
        my_putstr(av[a]);
        my_putchar('\n');
        a--;
    }
    return (0);
}


