/*
** EPITECH PROJECT, 2018
** debug_size.c
** File description:
** debug_size.c
*/

#include "my.h"

char *key_size(char **av)
{
    int i = 0;
    int j = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "--map-size=") == 0 ) {
            while (av[i][j] != '\0') {
                if (av[i][j] == ',')
                    av[i][j] = '*';
                j++;
            }
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

char *key_size_flag(char **av)
{
    int i = 0;
    char *str = malloc(sizeof(char ) * 6);

    while (av[i] != NULL) {
        if (my_compare_string(av[i], "--map-size=") == 0) {
            str[0] = av[i][11];
            str[1] = av[i][12];
            str[2] = '*';
            str[3] = av[i][14];
            str[4] = av[i][15];
            str[5] = '\0';
            return (str);
        }
        else
            return (NULL);
        i++;
    }
    return (NULL);
}

void display_key_size(char **av)
{
    char *str = malloc(sizeof(char) * 10);
    char *tmp = malloc(sizeof(char) * 10);

    str = key_size(av);
    tmp = key_size_flag(av);
    if (tmp != NULL) {
        my_printf("Size :  %s\n", tmp);
    }
    else if (str == NULL) {
        my_printf("Size :  20*10\n");
    }
    else
        my_printf("Size :  %s\n", str);
}
