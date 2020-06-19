/*
** EPITECH PROJECT, 2018
** my_printf.h
** File description:
** functions from my printf
*/

#ifndef MYPRINTF_H_
#define MYPRINTF_H_

#include <stdarg.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

#define C my_fputchar
#define STR my_fputstr
#define PRCNT my_fpourcent
#define D my_fput_nbr
#define I my_fput_nbr
#define B my_fput_binary
#define O my_fput_octal
#define x my_fput_hexalow
#define X my_fput_hexaup
#define S my_fconvert_string
#define U my_fput_unsigned
#define Q my_fput_longlong
#define P my_fput_adress
#define LD my_fput_long
#define LI my_fput_long
#define LLD my_fput_longlong
#define LLI my_fput_longlong
#define LU my_fput_long_unsigned
#define LLU my_fput_longlong_unsigned

int my_printf(char const *str, ...);
int my_strcmp(char const *s1, char const *s2);
int reverse_sign(int nb);
int put_my_nbr(int nb, int base);
char *concat_char(int i, char const *str);
int my_intlen(int nb);
int my_strlen(char const *str);
char *my_revstr(char *str);
void my_putchar(char c);
void my_putstr(char const *str);

bool my_format(char to_cmp);
int nb_str_flags(char *to_cmp);
bool my_flags(char to_cmp);
int nb_flags(char to_cmp);

//my_flags fonctions
void my_fput_adress(va_list ap);
void my_fput_longlong_unsigned(va_list ap);
void my_fput_long_unsigned(va_list ap);
void my_fput_unsigned(va_list ap);
void my_fpourcent(void);
void my_fput_long(va_list ap);
void my_fput_longlong(va_list ap);
void my_fconvert_string(va_list ap);
void my_fput_hexalow(va_list ap);
void my_fput_hexaup(va_list ap);
void my_fput_octal(va_list ap);
void my_fput_nbr(va_list ap);
void my_fput_binary(va_list ap);
void my_fputchar(va_list ap);
void my_fputstr(va_list ap);

#endif /* !MYPRINTF_H_ */
