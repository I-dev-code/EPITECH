/*
** EPITECH PROJECT, 2019
** direction.c
** File description:
** manage direction
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
    
    if (direction >= 1500)
        dir = right_or_left_dir(value, "0.005\n");
    else if (direction >= 1000)
        dir = right_or_left_dir(value, "0.05\n");
    else if (direction >= 600)
        dir = right_or_left_dir(value, "0.1\n");
    else if (direction >= 400)
        dir = right_or_left_dir(value, "0.2\n");
    else if (direction >= 200)
        dir = right_or_left_dir(value, "0.3\n");
    else
        dir = right_or_left_dir(value, "0.5\n");
    return (dir);
}

int wheels_direction(char *str)
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
    speed = choose_direction(tab, speed);
    free (line);
    free_tab(tab);
    return (speed);
}