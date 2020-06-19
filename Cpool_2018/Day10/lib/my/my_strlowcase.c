/*
** EPITECH PROJECT, 2018
** my_strlowcase.c
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    int a = 0;

    while (str[a]) {
        if (str[a] >= 'A' && str[a] <= 'Z')
            str[a] = str[a] + 32;
        a++;
    }
    return (str);
}
