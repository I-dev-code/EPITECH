/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** str to word array
*/

#include "minishell2.h"

static int  num_word(char *str, char charact)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        while (str[i] == charact || str[i] == '\t')
            i++;
        if (str[i] != '\0')
            nb++;
        while (str[i] != charact && str[i] != '\t' && str[i] != '\0')
            i++;
    }
    return (nb);
}

static char **to_wordtab(char *str, char **tab, char charact, int num)
{
    int j = 0;
    int k;

    for (int i = 0; str[i] != '\0' || j < num;) {
        for (;str[i] == charact || str[i] == '\t'; i++);
        if (str[i] == '\0') {
            tab[j] = NULL;
            return tab;
        } else {
            tab[j] = malloc(sizeof(char) * ((my_strlen(str) + 1)));
            if (tab[j] == NULL)
                return (NULL);
            k = 0;
            while (str[i] != charact && str[i] != '\0' && str[i] != '\t')
                tab[j][k++] = str[i++];
            tab[j++][k] = '\0';
        }
    }
    tab[j] = NULL;
    return (tab);
}

char **my_str_to_tab(char *str, char charact)
{
    char **tab;
    int num = num_word(str, charact);

    if (num == 0)
        num = 1;
    tab = malloc(sizeof(char *) * num + 1);
    if (tab == NULL)
        return (NULL);
    tab = to_wordtab(str, tab, charact, num);
    return (tab);
}