/*
** EPITECH PROJECT, 2019
** converter.c
** File description:
** function convert
*/

#include "n4s.h"

static int my_putnbr_base_long(long nbr, char *base)
{
    int i = 0;
    int size;
    long nb;

    if (nbr < 0) {
        nbr = - nbr;
        i += 1;
        my_putchar('-');
    }
    size = my_strlen(base);
    if (nbr > 0) {
        nb = nbr;
        nbr /= size;
        i += my_putnbr_base_long(nbr, base);
        i += 1;
        my_putchar(base[nb % size]);
    }
    return (i);
}

static int is_number(char c)
{
    if (!(c >= '0' && c <= '9'))
        return (1);
    return (0);
}

int my_put_float(double nbr)
{
    char *base = "0123456789";
    long dec;
    long ent;
    double dec2;
    int i = 0;

    ent = nbr;
    dec = nbr * (float)1000000;
    dec -= ent * 1000000;
    dec2 = (double)dec;
    i += my_putnbr_base_long(ent, base);
    i++;
    my_putchar('.');
    i += my_putnbr_base_long((long)dec2, base);
    return (i);
}

double my_atof(char *str)
{
    double val = 0;
    int e = 0;
    int i = 0;

    while (*str != '\0' && is_number(*str) == 0)
        val = val * 10 + (*str++ - '0');
    if (str[i] == '.')
        while (*str != '\0' && is_number(*str) == 0)
            val = val * 10 + (*str++ - '0');
    while (e++ < 0)
        val *= 0.1;
    return (val);
}