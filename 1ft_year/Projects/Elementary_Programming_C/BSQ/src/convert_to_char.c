/*
** EPITECH PROJECT, 2018
** convert_to_char.c
** File description:
** convert my array of int into char
*/

#include "bsq.h"

int *find_coordinate(int **tab)
{
    int a = 0;
    int b = 0;
    int *save = malloc(sizeof(int) * 3);
    save[2] = 0;

    while (tab[a] != NULL) {
        if (tab[a][b] > save[2]) {
            save[2] = tab[a][b];
            save[0] = a;
            save[1] = b;
        }
        else if (tab[a][b] == -1) {
            a++;
            b = 0;
        }
        b++;
    }
    return (save);
}

int **convert_my_square(int **tab)
{
    int *array = find_coordinate(tab);
    int b = array[1];
    int c = array[0];
    int d = array[2];

    while (c > array[0] - d) {
        tab[c][b] = -2;
        b--;
        if (b <= array[1] - d) {
            c--;
            b = array[1];
        }
    }
    return (tab);
}

char what_is_caract(int **tab, int a, int b)
{
    if (tab[a][b] == -2)
        return ('x');
    else if (tab[a][b] == 0)
        return ('o');
    else
        return ('.');
}

char *convert_to_char(int **tab, int width, int lenght)
{
    int a = 0;
    int b = 0;
    int c = 0;
    tab = convert_my_square(tab);
    char *array = malloc(sizeof(char) * (width * lenght) + 1);

    for (; tab[b] != NULL; c++) {
        if (tab[b][c] == -1) {
            array[a] = '\n';
            b++;
            c = -1;
        }
        else
            array[a] = what_is_caract(tab, b, c);
        a++;
    }
    write(1, array, a);
    return (array);
}
