/*
** EPITECH PROJECT, 2018
** concat_params.c
** File description:
** concat argv 
*/
#include <stdlib.h>
#include <stdio.h>

int my_putstr(char const *str);

int count_argc(int ac, char **av)
{
    int a = 0;
    int b = 0;
    int c = 0;

    while (a < ac) {
        while (av[a][b] != '\0') {
            b++;
            c++;
        }
	a++;
	b = 0;
    }
    return (c);
}

char *concat_params(int ac, char **av)
{
    int d;
    int e = 0;
    int f = 0;
    int c = count_argc(ac, av);
    char *str = malloc(sizeof(str) *(c - 1 + ac + 1));
    
    for(d = 0; d < ac; d++) {
        while (av[d][e] != '\0') {
            str[f] = av[d][e];
            e++;
            f++;
        }
        if (d < ac)
            str[f] = '\n';
        e = 0;
        f++;
    }
    str[f - 1] = '\0';
    return (str);
}
