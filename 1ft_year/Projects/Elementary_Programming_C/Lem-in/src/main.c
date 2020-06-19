/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "my.h"

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_strcpy(char *src, char *dest)
{
    dest = malloc(sizeof(char) * my_strlen(src));
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char **malloc_my_board(int ln, int cln)
{
    char **tab = malloc(sizeof(char *) * ln);

    for (int i = 0; i <= ln; i++)
        tab[i] = malloc(sizeof(char) * cln);
    tab[ln - 1] = NULL;
    return (tab);
}

char **read_my_anthill(void)
{
    size_t len = 0;
    char **tab = malloc_my_board(100, 10);
    int offset = 0;
    char *buffer = malloc(sizeof(char) * len);

    while (getline(&buffer, &len, stdin) != -1) {
        tab[offset] = my_strcpy(buffer, tab[offset]);
        offset++;
    }
    tab[offset] = NULL;
    return (tab);
}

int main(void)
{
    anthill_t data;
    char **tab = read_my_anthill();
    int ret = 0;

    if (tab == NULL)
        return (84);
    tab = clean_comment(tab);
    init_struct(&data);
    if (init(tab, &data) == 84)
        return (84);
    if (data.end == NULL || data.start == NULL)
        return (84);
    display(&data);
    return (ret);
}
