/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** swap 2 pointer
*/

#include <stdlib.h>
#include <stdio.h>

int my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;    
}
