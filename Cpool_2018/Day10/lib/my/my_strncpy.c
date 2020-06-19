/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** strcpy for n caract
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    while (a < n && src[a] != '\0') {
        dest[a] = src[a];
        a++;
    }
    while (a < n) {
        dest[a] = '\0';
        a++;
    }
    return (dest);
}
