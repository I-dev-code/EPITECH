/*
** EPITECH PROJECT, 2018
** bsq.c
** File description:
** process for bsq
*/

#include "bsq.h"


int find_smallest(int **tab, int a, int b)
{
    int c = tab[a][b - 1];
    int d = tab[a - 1][b];
    int e = tab[a - 1][b - 1];

    if ((c <= d) && (c <= e)) {
        return (c);
    }
    else if ((d <= c) && (d <= e)) {
        return (d);
    }
    else {
        return (e);
    }
}

void process_bsq(int **tab)
{
    int a = 1;
    int b = 1;
    
    while (tab[a] != NULL) {
        if (tab[a][b] == -1) {
            a++;
            b = 0;
        }
        else if (tab[a][b] > 0) {
            tab[a][b] += find_smallest(tab, a, b);
        }
        b++;
    }
}
