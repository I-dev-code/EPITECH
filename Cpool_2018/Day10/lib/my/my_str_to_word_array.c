/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** str to word array
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_show_word_array(char *const *str);

char **my_malloc(char const *str)
{
    int a = 0;
    int e = 0;
    char **tab;
    
    while (str[a])
        a++;
    tab = malloc(sizeof(char *) * a + 1);
    while (e <= a) {
        tab[e] = malloc(sizeof(char) * a + 1);
        e++;
    }
    return (tab);
}

char **my_str_to_word_array(char const *str)
{
    int b = 0;
    int c = 0;
    int d = 0;
    char **tab = my_malloc(str);

    while (str[d]) {
        while ((str[d] < '0' || str[d] > '9') && (str[d] < 'a' || str[d] > 'z')
               && (str[d] < 'A' || str[d] > 'Z') && str[d] != '\0')
            d++;
        while ((str[d] >= '0' && str[d] <= '9') || (str[d] >= 'a' && str[d] <= 'z')
               || (str[d] >= 'A' && str[d] <= 'Z')) {
            tab[b][c++] = str[d++];
        }
        tab[b][c] = '\0';
        c = 0;
        b++;
    }
    tab[b - 1] = NULL;
    return (tab);
}
