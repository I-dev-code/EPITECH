/*
** EPITECH PROJECT, 2019
** speed.c
** File description:
** manage speed
*/

#include "get_next_line.h"
#include "n4s.h"

static int command_run(double speed_value)
{
    char *line = NULL;

    my_putstr("CAR_FORWARD:");
    my_put_float(speed_value);
    my_putchar('\n');
    line = get_next_line();
    if (line == NULL)
        return (84);
    if (finished_sim(line) == 1)
        return(1);
    return (0);
}

static int run_forward(double speed)
{
    double speed_val;
    int end;

    if (speed >= 2000)
        speed_val = 1.0;
    else if (speed >= 1500)
        speed_val = 0.8;
    else if (speed >= 1000)
        speed_val = 0.6;
    else if (speed >= 600)
        speed_val = 0.5;
    else if (speed >= 400)
        speed_val = 0.4;
    else
        speed_val = 0.3;
    end = command_run(speed_val);
    return (end);
}

int forward(char *str)
{
    char *line = NULL;
    char **tab = NULL;
    double speed;

    my_putstr(str);
    line = get_next_line();
    if (line == NULL)
        return (84);
    if (finished_sim(line) == 1)
        return (1);
    line = clear_info(line);
    tab = my_str_to_tab(line, ':');
    if (tab == NULL)
        return (84);
    speed = my_atof(tab[16]);
    speed = run_forward(speed);
    free (line);
    free_tab(tab);
    return (speed);
}