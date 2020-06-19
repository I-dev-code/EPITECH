/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;
    
    while (dest[a])
        a++;
    while (b < nb && src[b]) {
        dest[a] = src[b];
        a++;
        b++;
    }
    dest[a] = '\0';
    return (dest);
}
