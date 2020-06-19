/*
** EPITECH PROJECT, 2018
** debug_right.c
** File description:
** debug_right.c
*/

#include "my.h"

char *key_right(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "-r") == 0 ) {
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

char key_right_flag(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_compare_string(av[i], "--key-right=") == 0)
            return (av[i][12]);
        i++;
    }
    return ('\0');
}

void display_key_right(char **av)
{
    char a;
    char *str = malloc(sizeof(char) * 10);

    str = key_right(av);
    a = key_right_flag(av);
    if (a == ' ')
        str = "(space)";
    if (a != '\0' && a != ' ')
        my_printf("Key Right :  %c\n", a);
    else if (str == NULL)
        my_printf("Key Right :  ^EOC\n");
    else
        my_printf("Key Right :  %s\n", str);
}
