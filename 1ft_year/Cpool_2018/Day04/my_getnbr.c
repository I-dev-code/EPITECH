/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** find good nb in a str
*/
#include <unistd.h>

int my_put_nbr(int nb);
void my_putchar(char c);

int my_getnbr(char const *str)
{
    int sign = 1;
    int a = 0;
    int b = 0;
    int nb = 0;
    
    while(str[a] == '-' || str[a] == '+') {
        if(str[a] == '-')
            sign = -1;
        if(str[a] == '+')
            sign = 1;
        a++;
    }
    while(str[a] != '\0' && str[a] >= '0' && str[a] <= '9') {
        if(b > 10)
            return (0);
        nb = nb * 10 + str[a] - 48;
        b++;
        a++;
    }
    if(b < 10)
        return (nb * sign);
}

