/*
** EPITECH PROJECT, 2018
** debug_level.c
** File description:
** debug_level.c
*/

#include "my.h"

char *key_level(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "-L") == 0) {
            if (av[i + 1] == NULL) {
                return (NULL);
            }
            else if (my_strcmp(av[i + 1], " ") == 0) {
                av[i + 1] = "(space)";
            }
            return (av[i + 1]);
        }
        i++;
    }
    return (NULL);
}

char key_level_flag(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_compare_string(av[i], "--level=") == 0) {
            return (av[i][8]);
        }
        i++;
    }
    return ('\0');
}

void display_key_level(char **av)
{
    char a;
    char *str = malloc(sizeof(char) * 10);

    str = key_level(av);
    a = key_level_flag(av);
    if (a != '\0')
        my_printf("Level :  %c\n", a);
    else if (str == NULL)
        my_printf("Level :  1\n");
    else
        my_printf("Level :  %s\n", str);
}
