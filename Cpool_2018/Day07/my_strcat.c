/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** concat 2 string
*/

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int b = 0;

    while (dest[a])
        a++;
    while (src[b]) {
        dest[a] = src[b];
        a++;
        b++;
    }
    dest[a] = '\0';
    return (dest);
}
