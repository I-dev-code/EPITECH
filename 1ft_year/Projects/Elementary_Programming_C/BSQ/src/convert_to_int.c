/*
** EPITECH PROJECT, 2018
** convert_to_int.c
** File description:
** convert . to 1 & o to 0
*/

#include "bsq.h"

int my_strline(char const *str);

int strwidth(char *str)
{
    int a = 0;
    int line = 0;

    while (str[a] != '\n')
        a++;
    a++;
    while (str[a] != '\n') {
        line++;
        a++;
    }
    return (line);
}

int strlenght(char *str)
{
    int a = 0;
    int column = -1;

    while (str[a]) {
        if (str[a] == '\n')
            column++;
        a++;
    }
    return (column);
}

int **my_array_malloc(int width, int lenght)
{
    int a = 0;
    int **array;

    array = malloc(sizeof(int *) * lenght + 1);
    while (a <= lenght) {
        array[a] = malloc(sizeof(int) * width + 1);
        a++;
    }
    return (array);
}

int **convert_to_int(char *str, int width, int lenght)
{
    int b = 0;
    int c = 0;
    int **array = my_array_malloc(width, lenght);

    if (array == NULL)
        exit(84);
    for (int a = my_strline(str) + 1; str[a]; a++) {
        if (str[a] == '.')
            array[b][c] = 1;
        else if (str[a] == 'o')
            array[b][c] = 0;
        else {
            array[b][c] = -1;
            b++;
            c = -1;
        }
        c++;
    }
    array[b] = NULL;
    return(array);
}
