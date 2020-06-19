/*
** EPITECH PROJECT, 2018
** my_print_comb.c
** File description:
** print digit 012 to 789
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_comb(void)
{
    char a = '2';
    char b = '1';
    char c = '0';

    while (c < '7') {
        print_comb(a,b,c);
        print_indent();
        a++;
        if (a == '9') {
            print_comb(a,b,c);
            print_indent();
            ++b;
            a = b + 1;
        }
        if (b == '8') {
            print_comb(a,b,c);
            print_indent();
            ++c;
            b = c + 1;
            a = b + 1;
        }
    }
    print_comb(a,b,c);
    return (0);
}

void print_comb(char a, char b, char c)
{
    my_putchar(c);
    my_putchar(b);
    my_putchar(a);
}
void print_indent(void)
{
    my_putchar(',');
    my_putchar(' ');
}
