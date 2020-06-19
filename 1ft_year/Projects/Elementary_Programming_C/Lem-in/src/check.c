/*
** EPITECH PROJECT, 2019
** check.c
** File description:
** check comment and command
*/

#include "my.h"

char *clean_str(char *str)
{
    char *str_clean = malloc(sizeof(char) * my_strlen(str) + 1);
    int a = 0;
    int b = 0;

    for (; str[a] != '\0' && str[a] != '\n'; a++) {
        for (; str[a] == ' ' || str[a] == '\t'; a++);
        for (; str[a] != ' ' && str[a] != '\t' && str[a] != '\0' \
            && str[a] != '\n'; b++, a++)
            str_clean[b] = str[a];
        str_clean[b++] = ' ';
        for (; str[a] == ' ' || str[a] == '\t'; a++);
        if ((str[a] == '\n' || str[a] == '\0') && str_clean[b - 1] != ' ')
            str_clean[b] = '\0';
        else if ((str[a] == '\n' || str[a] == '\0') && \
            str_clean[b - 1] == ' ')
            str_clean[b - 1] = '\0';
        else
            a--;
    }
    return (str_clean);
}

char **clean_space_array(char **tab)
{
    char *tmp;
    char **array = malloc_my_board(100, 10);
    int a = 0;
    int b = 0;

    for (; tab[a] != NULL; a++) {
        tmp = clean_str(tab[a]);
        if (tmp[0] == '\n' || tmp[0] == '\0')
            b--;
        else
            array[b] = my_strcpy(tmp, array[b]);
        b++;
    }
    array[b] = NULL;
    free(tab);
    return (array);
}

char **strcpy_array(char **src, int k, int j)
{
    char **dest = malloc(sizeof(char *) * size_my_tab(src));
    for (int i = 0; i < size_my_tab(src); i++)
        dest[i] = malloc(sizeof(char) * 256);
    for (int i = 0; src[i] != NULL; i++) {
        for (j = 0; src[i][j] != '\0'; j++) {
            if ((src[i][j] == '#' && src[i][j + 1] != '#') &&
                (src[i][j] == '#' && src[i][j - 1] != '#')) {
                k--;
                if (j > 1)
                    k++;
                break;
            }
            else
                dest[k][j] = src[i][j];
        }
        k++;
    }
    dest[k] = NULL;
    return (dest);
}

int check_bad_char(char **tab)
{
    int a;
    int b;

    for (a = 0; tab[a]; a++) {
        for (b = 0; tab[a][b] != '\0'; b++) {
            if (tab[a][b] == '#')
                a++;
            else if ((tab[a][b] <= 'z' && tab[a][b] >= 'a') ||
(tab[a][b] <= 'Z' && tab[a][b] >= 'A')) {
                return (1);
            }
        }
    }
    return (0);
}

char **clean_comment(char **tab)
{
    int k = 0;
    int j = 0;
    char **array = malloc_my_board(100, 10);
    tab = clean_space_array(tab);
    array = strcpy_array(tab, k, j);
    array = clean_space_array(array);
    if (check_bad_char(array) == 1)
        return (NULL);
    else
        return (array);
}
