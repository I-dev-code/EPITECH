/*
** EPITECH PROJECT, 2018
** my_evil_str.c
** File description:
** reverse a string
*/
#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str);

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

