/*
** EPITECH PROJECT, 2019
** function_dislpay.c
** File description:
** display
*/

#include "n4s.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    int a;

    for (a = 0; str[a] != '\0'; a++)
        my_putchar(str[a]);
    return (0);
}

int my_strlen(char *str)
{
    int i = 0;
    for (;str[i]; i++);
    return (i);
}

int my_put_err(char *str)
{
    int a;

    for (a = 0; str[a] != '\0'; a++)
        write(2, &str[a], 1);
    return (0);
}

int my_strcmp(char const *s1, char const *s2)
{
    int a = 0;

    while (s1[a] && s1[a] == s2[a])
        a++;
    if (s1[a] > s2[a])
        return (1);
    if (s1[a] < s2[a])
        return (-1);
    return (0);
}