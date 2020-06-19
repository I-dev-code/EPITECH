/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** str n compare
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = 0;

    while (s1[a] && s1[a] == s2[a] && a <= n)
        a++;
    if (s1[a] > s2[a])
        return (1);
    if (s1[a] < s2[a])
        return (-1);
    return (0);
}

