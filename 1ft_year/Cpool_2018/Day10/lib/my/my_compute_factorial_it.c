/*
** EPITECH PROJECT, 2018
** my_compute_factorial_it.c
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it(int nb)
{
    int a = nb - 1;

    if (nb == 0)
        return (1);
    if (nb < 0 || nb >= 13)
        return (0);
    while (a > 1) {
        nb = nb * a;
        a--;
    }
    return (nb);
}
