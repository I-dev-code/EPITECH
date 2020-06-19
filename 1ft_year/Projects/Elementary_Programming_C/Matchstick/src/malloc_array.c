/*
** EPITECH PROJECT, 2019
** malloc_array.c
** File description:
** malloc my array
*/

#include "matchstick.h"

int check_numb(int nbr)
{
    if (nbr < 100 && nbr > 1)
        return (0);
    else {
        write(2, "Please select number between 2 and 99 matches\n", 46);
        return (84);
    }
}

char **malloc_array(char *str, t_list *info)
{
    int line = my_getnbr(str);
    int nb = 0;
    int column = ((2 * line) + 1);
    info->array = malloc(sizeof(char *) * (line + 3));

    if (check_numb(line) == 84) {
        return (NULL);
    }
    for (nb = 0; nb != line + 2; nb++)
        info->array[nb] = malloc(sizeof(char) * column);
    info->array[nb] = NULL;
    return (info->array);
}

char **convert_my_array(t_list *info)
{
    info->array = malloc_array(info->numb_matches, info);
    int nb_line = my_getnbr(info->numb_matches);
    int a;
    int b;

    if (info->array == NULL)
        return (NULL);
    for (a = 0; a < nb_line + 2; a++) {
        for (b = 0; b < info->lenght; b++)
            info->array[a][b] = '*';
        info->array[a][b] = '\0';
    }
    for (a = 1; a < nb_line + 1; a++)
        for (b = 1; b < info->lenght - 1; b++)
            info->array[a][b] = ' ';
    for (a = 1; a < nb_line + 1; a++)
        for (b = (info->lenght / 2) - a + 1; b <= info->lenght / 2 + a - 1; b++)
            info->array[a][b] = '|';
    return (info->array);
}