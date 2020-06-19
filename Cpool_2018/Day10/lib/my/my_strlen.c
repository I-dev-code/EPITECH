/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** count nb caract of string
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int a = 0;
    
    while(str[a] != '\0')
        a++;
    return (a);
}
