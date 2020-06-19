/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** calc power in recursiv
*/

int my_compute_power_rec(int nb, int p)
{
    int res;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    else
        res = nb * my_compute_power_rec(nb, p - 1);
    return (res);
}
