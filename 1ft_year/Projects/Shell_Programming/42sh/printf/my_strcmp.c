/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** my_strcmp.c
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++);
    if (s1[i] > s2[i])
        return (1);
    else if (s2[i] > s1[i])
        return (-1);
    return (0);
}
