/*
** EPITECH PROJECT, 2018
** debug_pause.c
** File description:
** debug_pause.c
*/

#include "my.h"

char *key_pause(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "-p") == 0) {
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

char key_pause_flag(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_compare_string(av[i], "--key-pause=") == 0) {
            return (av[i][12]);
        }
        i++;
    }
    return ('\0');
}

void display_key_pause(char **av)
{
    char a;
    char *str = malloc(sizeof(char) * 10);

    str = key_pause(av);
    a = key_pause_flag(av);
    if (a == ' ')
        str = "(space)";
    if (a != '\0' && a != ' ')
        my_printf("Key Pause : %c\n", a);
    else if (str == NULL)
        my_printf("Key Pause : (space)\n");
    else
        my_printf("Key Pause : %s\n", str);
}
