/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "dante.h"

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_strcpy(char *src, char *dest)
{
    dest = malloc(sizeof(char) * my_strlen(src));
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char **malloc_my_board(int ln, int cln)
{
    char **tab = malloc(sizeof(char *) * ln);

    for (int i = 0; i <= ln; i++)
        tab[i] = malloc(sizeof(char) * cln);
    tab[ln - 1] = NULL;
    return (tab);
}

int generator(int x, int y, char *param, List *list)
{
    char **map = malloc_my_board(x + 1, y + 1);
    int *coord = malloc(sizeof(int) * 2);

    coord[0] = x;
    coord[1] = y;
    if (param != NULL && strcmp("perfect", param) == 0)
        map = perfect(map, coord, 0);
    else
        map = imperfect(map, coord);
    for (int i = 0; map[i + 1]; i++) {
        write(1, map[i], coord[0]);
        write(1, "\n", 1);
    }
    write(1, map[coord[1] - 1], coord[0]);
    return (0);
}

int main(int ac, char **av)
{
    List *list = malloc(sizeof(*list));

    if (ac < 3)
        return (84);
    else
        generator(atoi(av[1]), atoi(av[2]), av[3], list);
}
