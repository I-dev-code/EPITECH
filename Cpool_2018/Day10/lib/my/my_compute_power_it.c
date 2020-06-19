/*
** EPITECH PROJECT, 2018
** my_compute_power_it.c
** File description:
** calcul a power
*/

int my_compute_power_it(int nb, int p)
{
    int res = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    while (p > 1) {
        res = res * nb;
        p--;
    }
    return (res);
}
