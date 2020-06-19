/*
** EPITECH PROJECT, 2018
** debug_quit.c
** File description:
** debug_quit.c
*/

#include "my.h"

char *key_quit(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_strcmp(av[i], "-q") == 0) {
            if (av[i + 1] == NULL){
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

char key_quit_flag(char **av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (my_compare_string(av[i], "--key-quit=") == 0)
            return (av[i][11]);
        i++;
    }
    return ('\0');
}

void display_key_quit(char **av)
{
    char a;
    char *str = malloc(sizeof(char) * 10);

    str = key_quit(av);
    a = key_quit_flag(av);

    if (a == ' ')
        str = "(space)";
    if (a != '\0' && a != ' ')
        my_printf("Key Quit :  %c\n", a);
    else if (str == NULL) {
        my_printf("Key Quit :  q\n");
    }
    else
        my_printf("Key Quit :  %s\n", str);
}
