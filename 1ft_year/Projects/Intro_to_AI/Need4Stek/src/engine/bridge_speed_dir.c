/*
** EPITECH PROJECT, 2019
** bridge_speed_dir.c
** File description:
** choose_dir_or_speed
*/

#include "get_next_line.h"
#include "n4s.h"

static int right_or_left_dir(double direction, char *str)
{
    char *wheel_command = "WHEELS_DIR:";
    char *line = NULL;

    my_putstr(wheel_command);
    if (direction < 0)
        my_putchar('-');
    my_putstr(str);
    if ((line = get_next_line()) == NULL)
        return (84);
    if (finished_sim(line) == 1)
        return (1);
    return (0);
}

static int choose_direction(char **data, double direction)
{
    double value = my_atof(data[1]) - my_atof(data[31]);
    int dir;
    char *str = NULL;

    if (direction >= 1500)
    	str = "0.01\n";
    else if (direction >= 1000)
    	str = "0.05\n";
    else if (direction >= 600)
    	str = "0.1\n";
    else if (direction >= 400)
    	str = "0.3\n";
    else if (direction >= 200)
    	str = "0.4\n";
    else
    	str = "0.6\n";
    dir = right_or_left_dir(value, str);
    return (dir);
}

static int command_run(double speed_value)
{
    char *line = NULL;

    my_putstr("CAR_FORWARD:");
    my_put_float(speed_value);
    my_putchar('\n');
    line = get_next_line();
    if (finished_sim(line) == 1)
        return (1);
    return (0);
}

static int run_forward(double speed)
{
    double speed_val;
    int run;

    if (speed >= 2000)
        speed_val = 0.8;
    else if (speed >= 1500)
        speed_val = 0.5;
    else if (speed >= 1000)
        speed_val = 0.4;
    else if (speed >= 600)
        speed_val = 0.3;
    else if (speed >= 400)
        speed_val = 0.2;
    else
        speed_val = 0.1;
    run = command_run(speed_val);
    return (run);
}

int dir_or_speed(char *str, int nbr)
{
    char *line = NULL;
    char **tab = NULL;
    double speed;

    my_putstr(str);
    line = get_next_line();
    if (finished_sim(line) == 1)
        return (1);
    line = clear_info(line);
    tab = my_str_to_tab(line, ':');
    if (tab == NULL)
        return (84);
    speed = my_atof(tab[16]);
    if (nbr == 1)
    	speed = choose_direction(tab, speed);
    else
    	speed = run_forward(speed);
    free_all(line, tab);
    return (speed);
}