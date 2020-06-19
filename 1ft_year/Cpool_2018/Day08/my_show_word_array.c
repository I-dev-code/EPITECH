/*
** EPITECH PROJECT, 2018
** my_show_word_array.c
** File description:
** display content of an array of word
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    int a = 0;
    int b;

    while (tab[a]) {
        b = 0;
        while(tab[a][b]) {        
            my_putchar(tab[a][b]);
            b++;
        }
        my_putchar('\n');
        a++;
    }
    return (0);
}
