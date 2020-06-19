/*
** EPITECH PROJECT, 2018
** open.c
** File description:
** open.c
*/

#include "my.h"

char *my_strcat_mod(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    char *str = malloc(sizeof(char) * 40);

    while (dest[i] != '\0'){
        str[j] = dest[i];
        j++;
        i = i + 1;
    }
    i = 0;
    while (src[i] != '\0'){
        str[j] = src[i];
        j++;
        i = i + 1;
    }
    str[j] = '\0';
    return (str);
}

int long_file(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        if (str[n] == '.')
            return (n);
        n++;
    }
    return (0);
}

int my_orde(char const *s1, char const *s2)
{
    int n = 0;

    if (s1[0] == '\0' || s2[0] == '\0')
        return (84);
    while ((s1[n] != '\0') && (s2[n] != '\0') && s1[n] == s2[n]) {
        n++;
    }
    return (s1[n] - s2[n]);
}

int tcheck_file_tetrimino(char *str)
{
    if (my_strcmp(".tetrimino", str) == -1) {
        return (1);
    }
    else
        return (0);
}

char **open_tetrimino(void)
{
    DIR *pdir;
    int i = 0;
    struct dirent *pDirent = NULL;
    char **buf = malloc(sizeof(char *) * 30);

    pdir = opendir("tetriminos");
    if (pdir == NULL)
        return (NULL);
    while ((pDirent = readdir(pdir)) != NULL) {
        buf[i] = malloc(sizeof(char) * 256);
        if (tcheck_file_tetrimino(pDirent->d_name) != 1) {
            buf[i] = pDirent->d_name;
            buf[i] = my_strcat_mod("tetriminos/", buf[i]);
            i++;
        }
        buf[i] = NULL;
    }
    return (buf);
}
