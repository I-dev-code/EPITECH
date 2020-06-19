/*
** EPITECH PROJECT, 2018
** tetrimino_debug.c
** File description:
** tetrimino_debug.c
*/

#include "my.h"

int tetrimino_nbr(void)
{
    int a = 0;
    int b = 0;
    char **dos;

    dos = open_tetrimino();
    a = return_nbr_file(dos);
    if (a == 0)
        return (84);
    my_printf("Tetriminos :  %d\n", a);
    b = tetri_debug_sentence();
    if (b == 84)
        return (84);
    my_printf("Press any key to start Tetris");
    while (getchar())
        display_window(1, 100);
    return (0);
}

char *get_right_tetris_name(char *dos)
{
    int i = 0;

    while (dos[i] != '\0') {
        if (dos[i] == '.') {
            dos[i] = '\0';
            return (dos);
        }
        i++;
    }
    return (NULL);
}

char **tetrimino_name(void)
{
    DIR *pdir;
    struct dirent *pdirent = NULL;
    int i = 0;
    char **dos = malloc(sizeof(char *) * 20);

    pdir = opendir("tetriminos");
    if (pdir == NULL) {
        return (NULL);
    }
    while ((pdirent = readdir(pdir)) != NULL) {
        if (tcheck_file_tetrimino(pdirent->d_name) != 1) {
            dos[i] = malloc(sizeof(char) * 256);
            dos[i] = pdirent->d_name;
            i++;
        }
    }
    dos[i] = NULL;
    return (dos);
}

int tetri_debug_sentence(void)
{
    char **dos;
    int i = 0;
    int y = 0;

    dos = tetrimino_name();
    if (dos == NULL)
        return (84);
    dos = get_order(dos);
    while (dos[i] != NULL) {
        dos[i] = get_right_tetris_name(dos[i]);
        my_printf("Tetriminos :  Name %s : ", dos[i]);
        size_tetrimino(i , y);
        i++;
    }
    return (0);
}

char **get_order(char **dos)
{
    int j = 0;
    int a = 0;
    char *tmp = malloc(sizeof(char ) * 30);

    for (int i = 0; i < 7; i++) {
        j = i + 1;
        if (dos[i] == NULL)
            return (NULL);
        while (j < 7) {
            if (my_orde(dos[i], dos[j]) > 0) {
                tmp = dos[i];
                dos[i] = dos[j];
                dos[j] = tmp;
            }
            j++;
        }
        a++;
    }
    return (dos);
}
