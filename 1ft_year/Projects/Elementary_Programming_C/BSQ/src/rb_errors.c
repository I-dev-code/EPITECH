/*
** EPITECH PROJECT, 2018
** utils_errors.c
** File description:
** utils for errors
*/

#include "bsq.h"

int rb_print_err(char *str)
{
    int a = 0;

    while (str[a])
        a++;
    write(2, str, a);
    return (0);
}

void rb_xerror(char *c)
{
    rb_print_err("Error: ");
    rb_print_err(c);
    rb_print_err("\n");
    exit(84);
}

int check_files(char *buf)
{
    int a = 0;

    while(buf[a] != '\n') {
        if (buf[a] < '0' || buf[a] > '9')
            rb_xerror("not a map");
        a++;
    }
    a++;    
    while (buf[a]) {
        if (buf[a] == '.' || buf[a] == 'o' || buf[a] == '\n')
            a++;
        else {
            rb_xerror("not a map");
        }
    }
    return (0);
}
