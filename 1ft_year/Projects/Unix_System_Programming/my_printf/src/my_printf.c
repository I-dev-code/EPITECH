/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** printf
*/

#include "printf.h"

int my_putstr_isprintable(char const *str)
{
    int a = 0;
    char *conv = malloc(sizeof(char) * my_strlen(str));

    if (str == NULL)
        return (84);
    while (str[a]) {
        if (str[a] <= 32 || str[a] >= 127) {
            my_putchar(92);
            check_lenght_octal(my_base_conv(str[a], 8));
            my_putstr(my_base_conv(str[a], 8));
        }
        else
            my_putchar(str[a]);
	a++;
    }
    return (0);
}

int check_lenght_octal(char const *str)
{
    int a = my_strlen(str);
    
    if (a == 1)
        my_putstr("00");
    else if (a == 2)
        my_putstr("0");
    else
        return (0);
}

int my_printf(char *str, ...)
{
    int a = 0;
    va_list (ap);

    va_start(ap, 0);
    while (str[a]) {    
        if (str[a] == '%') {
            a++;
            if (str[a] == '%')
                my_putchar('%');
            else
                a = check_flg(str, a, ap);
        }
        else if (str[a] != '%')
            my_putchar(str[a]);
        a++;
    }
    return (0);
    va_end(ap);    
}
