/*
** EPITECH PROJECT, 2018
** my_put_hexa.c
** File description:
** put hexa nb
*/

#include "../include/myprintf.h"

void my_fput_adress(va_list ap)
{
    long int n = va_arg(ap, long int);

    my_putstr("0x");
    my_printf("%x", n);
}

void my_fput_hexalow(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    int i = 0;
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    char tab[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
    '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    while (nb != 0) {
        tmp[i] = tab[nb % 16];
        i++;
        nb /= 16;
    }
    my_putstr(my_revstr(tmp));
}

void my_fput_hexaup(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    int i = 0;
    char *tmp = malloc(sizeof(char) * (my_intlen(nb) + 1));
    char tab[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
    '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (nb != 0) {
        tmp[i] = tab[nb % 16];
        i++;
        nb /= 16;
    }
    my_putstr(my_revstr(tmp));
}
