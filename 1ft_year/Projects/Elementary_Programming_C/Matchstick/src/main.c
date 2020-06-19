/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "matchstick.h"

int main(int ac, char **av)
{
    t_list info;
    int a = 0;
    int status = 0;

    if (ac == 1) {
        write(2, "Error: need 3 arguments\n", 24);
        return (84);
    }
    else {
        init_struct(&info, av[1], av[2]);
        info.array = convert_my_array(&info);
        if (info.array == NULL)
            return 84;
        while (1) {
            while (info.array[a]) {
                my_putstr(info.array[a]);
                my_putchar('\n');
                a++;
            }
            my_putstr("\nYour turn:\n");
            status = removed_match(&info);
            if (status == -1)
                return 0;
        if (status == 1)
            return (1);
        else if (status == 2)
            return (2);
        }
    }
    return (0);
}
