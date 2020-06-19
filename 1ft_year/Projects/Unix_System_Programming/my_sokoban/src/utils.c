/*
** EPITECH PROJECT, 2018
** utils.c
** File description:
** function utils
*/

#include "sokoban.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_putstr(char const *str)
{
    int a = 0;

    while(str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    return(0);
}

char *my_revstr(char *str)
{
    int a = 0;
    int b = 0;
    char swap;

    while (str[a])
        a++;
    a--;
    while (b < a) {
        swap = str[a];
        str[a] = str[b];
        str[b] = swap;
        b++;
	a--;
    }
    return (str);
}

int my_strlen(char const *str)
{
    int a = 0;

    while(str[a] != '\0')
	a++;
    return (a);
}

char *my_strlowcase(char *str)
{
    int a = 0;

    while (str[a]) {
        if (str[a] >= 'A' && str[a] <= 'Z')
            str[a] = str[a] + 32;
	a++;
    }
    return (str);
}
