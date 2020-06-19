/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** swap 2 pointer
*/

#include "../../include/my.h"

int my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;    
}
