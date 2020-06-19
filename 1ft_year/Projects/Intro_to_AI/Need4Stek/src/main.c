/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "get_next_line.h"
#include "n4s.h"

static int start(char *str)
{
    int state_car = 0;

    while (1) {
        state_car = dir_or_speed(str, 1);
        if (state_car == 84)
            return (84);
        if (state_car == 1)
            break;
        state_car = dir_or_speed(str, 0);
        if (state_car == 84)
            return (84);
        if (state_car == 1)
            break;
    }
    my_putstr(STOP_SIMULATION);
    return (0);
}

static int start_sim(void)
{
    my_putstr(START_SIMULATION);
    get_next_line();
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return (84);
    start_sim();
    start("GET_INFO_LIDAR\n");
}