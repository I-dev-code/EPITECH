/*
** EPITECH PROJECT, 2019
** create_map.c
** File description:
** create_map.c
*/

#include "dante.h"

char **create_my_map(char **map, int x, int y, int i)
{
    int cln = 0;
    for (int ln = 0; map[ln] != NULL;) {
        for (;ln % 2 != 0 && cln < x; cln++)
            map[ln][cln] = 'X';
        while (rand ()% 2 == 0 && cln < x != 0) {
            if (cln % 3 == 0 && i == 0)
                map[ln][cln] = 'X';
            else if (i == 1)
                map[ln][cln] = 'X';
            else
                map[ln][cln] = '*';
            cln = cln + 1;
        }
        if (cln == x) {
            map[ln++][cln] = '\0';
            cln = 0;
        }
    }
    map[y] = NULL;
    return (map);
}

char **perfect(char **map, int *coord, int k)
{
    int j = 0;
    int i = 0;

    map = create_my_map(map, coord[0], coord[1], k);
    srand(time(NULL));
    for (int rando = 0; i < coord[0] - 1 ||
        j < coord[1] - 1; rando = rand() % 2) {
        if (rando == 0 && map[j + 1] != NULL) {
            j++;
            map[j][i] = '*';
        }
        if (rando == 1 && map[i + 1] != NULL) {
            i++;
            map[j][i] = '*';
        }
    }
    map[0][0] = '*';
    map[coord[1] - 1][coord[0] - 1] = '*';
    return (map);
}

char **imperfect(char **map, int *coord)
{
    map = perfect(map, coord, 1);
    for (int i = 0; map[i]; i++) {
        map[i][rand() % (0 - (coord[0] - 1))] = '*';
        map[i][rand() % (0 - (coord[0] - 1))] = '*';
        for (int rando = rand() % (0 - (coord[0] - 1)); rando % 2 != 0;) {
            map[i][rando] = '*';
            map[i][rando + 1] = '*';
            if (map[i + 2] != NULL && map[i + 1] != NULL &&
                map[i][rando + 1] != '\0') {
                map[i][rando] = '*';
                map[i][rando + 1] = '*';
                map[i + 1][rando] = '*';
                map[i + 2][rando] = 'X';
            }
            rando = rand() % (0 - (coord[0] - 1));
        }
    }
    map[0][0] = '*';
    map[coord[1] - 1][coord[0] - 1] = '*';
    return (map);
}
