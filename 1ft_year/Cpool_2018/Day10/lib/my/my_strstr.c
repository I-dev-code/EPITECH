/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** as str compare
*/

#include "../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    while (to_find[d])
        d++;
    while (str[a]) {
        if (to_find[b] == str[a]) {
            b++;
            c++;
        } else if (c != d) {
            b = 0;
            c = 0;
        }
        a++;
    }
    if (c == d)
        return (to_find);
    else
        return (0);
}


