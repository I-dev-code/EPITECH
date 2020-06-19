/*
** EPITECH PROJECT, 2018
** printf.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

//utils.c
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);

//my_put_nbr.c
int my_put_nbr(int nb);
int my_put_long_nbr(long int nb);
int my_put_long_long_nbr(long long int nb);

//my_put_unsigned_nbr.c
int my_put_unsigned_nbr(unsigned int nb);
int my_put_long_unsigned_nbr(long unsigned int nb);
int my_put_long_long_unsigned_nbr(long long unsigned int nb);

//my_base_conv.c
char *my_base_conv(int nb, int b);

//check_flags.c
int check_flg(char const *str, int i, va_list ap);
int check_flg_bis(char const *str, int i, va_list ap);
int check_flg_long_int(char const *str, int i, va_list ap);
int check_flg_long_long_int(char const *str, int i, va_list ap);
int check_flg_long_long_unsigned_int(char const *str, int i, va_list ap);

//my_printf.c
int my_printf(char *str, ...);
int my_putstr_isprintable(char const *str);
int check_lenght_octal(char const *str);

#endif /* ! _PRINTF_H_ */
