/*
** EPITECH PROJECT, 2018
** debug_drop.c
** File description:
** debug_drop.c
*/

#include "my.h"

char *key_drop(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "-d") == 0) {
            if (av[i + 1] == NULL) {
                return (NULL);
            }
            else if (my_strcmp(av[i + 1] , " ") == 0) {
                av[i + 1] = "(space)";
            }
            return (av[i + 1]);
        }
        i++;
    }
    return (NULL);
}

char key_drop_flag(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_compare_string(av[i], "--key-drop=") == 0) {
            return (av[i][11]);
        }
        i++;
    }
    return ('\0');
}

void display_key_drop(char **av)
{
    char a;
    char *str = malloc(sizeof(char) * 10);

    str = key_drop(av);
    a = key_drop_flag(av);
    if (a == ' ')
        str = "(space)";
    if (a != '\0' && a != ' ')
        my_printf("Key Drop :  %c\n", a);
    else if (str == NULL) {
        my_printf("Key Drop :  ^EOB\n");
    }
    else
        my_printf("Key Drop :  %s\n", str);
}
