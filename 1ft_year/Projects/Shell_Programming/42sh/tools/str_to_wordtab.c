/*
** EPITECH PROJECT, 2019
** tools
** File description:
** str to wordtab
*/

#include "mysh.h"
#include "myprintf.h"

char **malloc_tab(char *str, int size)
{
    char **tmp = NULL;
    int i = 0;

    tmp = malloc(sizeof(char *) * (size + 1));
    for (i = 0; i < size; i++)
        tmp[i] = malloc(sizeof(char *) * (my_strlen(str) + 1));
    return (tmp);
}

bool check_space(char c)
{
    if (c == ' ' || c == '\t')
        return true;
    return false;
}

char **str_to_wordtab(char *str)
{
    int size = my_strlen(str);
    char **tab = malloc_tab(my_strdup(str), size);
    int a = 0;
    int i = 0;
    int b = 0;

    if (str == NULL)
        return (NULL);
    for (i = 0; str[i] != 0 && (str[i] == ' ' || str[i] == '\t'); i++);
    while (str[i]) {
        for (b = 0; str[i] != 0 && check_space(str[i]) == false; b++, i++) {
            tab[a][b] = str[i];
            if (str[i + 1] == 0 || check_space(str[i + 1]) == true)
                a++;
        }
        i++;
    }
    tab[a] = NULL;
    return (tab);
}
