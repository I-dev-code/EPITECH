/*
** EPITECH PROJECT, 2018
** debug_turn.c
** File description:
** debug_turn.c
*/

#include "my.h"

char *key_turn(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "-t") == 0) {
            if (av[i + 1] == NULL)
                return (NULL);
            else if (my_strcmp(av[i + 1] , " ") == 0)
                av[i + 1] = "(space)";
            return (av[i + 1]);
        }
        i++;
    }
    return (NULL);
}

char key_turn_flag(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_compare_string(av[i], "--key-turn=") == 0) {
            return (av[i][11]);
        }
        i++;
    }
    return ('\0');
}

void display_key_turn(char **av)
{
    char a;
    char *str = malloc(sizeof(char) * 10);

    str = key_turn(av);
    a = key_turn_flag(av);
    if (a == ' ')
        str = "(space)";
    if (a != '\0' && a != ' ')
        my_printf("Key Turn :  %c\n", a);
    else if (str == NULL)
        my_printf("Key Turn :  ^EOA\n");
    else
        my_printf("Key Turn :  %s\n", str);
}
