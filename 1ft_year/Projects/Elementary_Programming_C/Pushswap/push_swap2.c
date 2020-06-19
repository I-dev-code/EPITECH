/*
** EPITECH PROJECT, 2017
** push_swap2
** File description:
** sort nbr
*/
#include<stdio.h>

void bubble_sort(int *str) {
    int p = 0;
    int b = 1;
    int n;
    int e;

    while (b == 1) {
        b = 0;
        n++;
        for(n = 0; n < 20 - p; n++) {
            if (str[n] > str[n + 1]) {
                b = 1;
                e = str[n];
                str[n] = str[n + 1];
                str[n + 1] = e;
            }
        }
    }
}

int main (int ac, int **av) {
    int str[] = {4, 82, -28, -732, 28, 1, 29};
    int n = sizeof str;
    int i;

    bubble_sort(str);
    for (i = 0; i < n; i++) {
        printf("%d%s", str[i], i == n - 1 ? "\n" : " ");
    }
}