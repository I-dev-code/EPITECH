/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** compare 2 string
*/

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
