/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** strcpy for n caract
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    while (a != n + 1) {
        dest[a] = src[a];
        a++;
    }
    dest[a - 1] = '\0';
    return (dest);
}
