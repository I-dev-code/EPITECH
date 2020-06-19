/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec.c
** File description:
** factorial in recursiv
*/

int my_compute_factorial_rec(int nb)
{
    int a;

    if (nb == 0)
        return (1);
    if (nb < 0 || nb >= 13)
        return (0);
    else
        a = nb * my_compute_factorial_rec(nb - 1);
    return (a);
}
