/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** function my_strcmp.c
*/

#include "minishell2.h"

int my_strcmp(char *s1, char *s2)
{
    int a = 0;

    for (; s1[a] && s1[a] == s2[a]; a++);
    if (s1[a] > s2[a])
        return (1);
    if (s1[a] < s2[a])
        return (-1);
    return (0);
}
