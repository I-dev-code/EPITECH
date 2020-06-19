/*
** EPITECH PROJECT, 2019
** check_array.c
** File description:
** check line and matches
*/

#include "matchstick.h"

int check_line(t_list *info)
{
    info->line2 = my_getnbr(info->line);
    int matches = my_getnbr(info->numb_matches);

    if (my_str_isnum(info->line) == 0) {
        my_putstr("invalid input (positive number expected)\n");
        return (1);
    }
    else if (info->line2 <= 0 || info->line2 > matches) {
        my_putstr("Error: this line is out of range\n");
        return (1);
    }
    else
        check_matches_per_line(info);
}

int check_matches_per_line(t_list *info)
{
    if (check_number_of_matches(info, info->line2) == 0) {
        my_putstr("Error: this line is empty\n");
        return (1);
    }
    else
        return (0);
}

int check_matches(t_list *info)
{
    info->numb = my_getnbr(info->number);

    if (my_str_isnum(info->number) == 0) {
        my_putstr("invalid input (positive number expected)\n");
        return (1);
    }
    else if (info->numb <= 0 || info->numb > info->matches) {
        my_putstr("Error: you can not remove more than ");
        my_put_nbr(info->matches);
        my_putstr(" matches per turn\n");
        return (1);
    }else {
        count_matches(info);
    }
}

int check_number_of_matches(t_list *info, int line)
{
    int count = 0;
    int tmp = 0;

    while (tmp <= info->lenght) {
        if (info->array[line][tmp] == '|') {
            count++;
            tmp++;
        }

        else {
            tmp++;
        }
    }
    return (count);
}

int count_matches(t_list *info)
{
    int count = check_number_of_matches(info, info->line2);

    if (info->numb <= count) {
        return (0);
    }else {
        my_putstr("Error: not enough matches on this line\n");
        return (1);
    }
}