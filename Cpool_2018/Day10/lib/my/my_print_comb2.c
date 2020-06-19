/*
** EPITECH PROJECT, 2018
** my_print_comb2.c
** File description:
**  00 01 to 98 99
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_comb2(void)
{
    int a = 0;
    int b = 1;

    while(a != 99) {
        while(b <= 98) {
            print_comb2(a, b);
            b++;
        }
        print_comb2(a, b);
        a++;
        b = a + 1;
    }
}

int print_comb2(int a, int b)
{
    int c = (a / 10);
    int d = (a % 10);
    int e = (b / 10);
    int f = (b % 10);

    my_putchar(c + 48);
    my_putchar(d + 48);
    my_putchar(' ');
    my_putchar(e + 48);
    my_putchar(f + 48);
    if(a < 98) {
        my_putchar(',');
        my_putchar(' ');
    }    
}
