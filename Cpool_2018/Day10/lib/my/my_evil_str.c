/*
** EPITECH PROJECT, 2018
** my_evil_str.c
** File description:
** reverse a string
*/

#include "../../include/my.h"

char *my_evil_str(char *str)
{
    int a = 0;
    int b = my_strlen(str) - 1;
    char c;

    while(a < b) {
        c = str[a];
        str[a] = str[b];
        str[b] = c;
        a++;
        b--;
    }
    return(str);
}

