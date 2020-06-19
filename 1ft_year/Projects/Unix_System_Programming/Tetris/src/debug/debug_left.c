/*
** EPITECH PROJECT, 2018
** debug_left.c
** File description:
** debug_left.c
*/

#include "my.h"

char *key_left(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "-l") == 0) {
            if (av[i + 1] == NULL)
                return (NULL);
            else if (my_strcmp(av[i + 1], " ") == 0)
                av[i + 1] = "(space)";
            return (av[i + 1]);
        }
        i++;
    }
    return (NULL);
}

char key_left_flag(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_compare_string(av[i], "--key-left=") == 0)
            return (av[i][11]);
        i++;
    }
    return ('\0');
}

void display_key_left(char **av)
{
    char a;
    char *str = malloc(sizeof(char) * 10);

    str = key_left(av);
    a = key_left_flag(av);
    if (a == ' ')
        str = "(space)";
    if (a != '\0' && a != ' ')
        my_printf("Key Left :  %c\n", a);
    else if (str == NULL)
        my_printf("Key Left :  ^EOD\n");
    else
        my_printf("Key Left :  %s\n", str);
}
