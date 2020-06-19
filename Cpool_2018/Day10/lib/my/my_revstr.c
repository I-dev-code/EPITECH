/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int a = 0;
    int b = 0;
    char swap;

    while (str[a])
        a++;
    a--;
    while (b < a) {
        swap = str[a];
        str[a] = str[b];
        str[b] = swap;
        b++;
        a--;
    }
    return (str);
}
