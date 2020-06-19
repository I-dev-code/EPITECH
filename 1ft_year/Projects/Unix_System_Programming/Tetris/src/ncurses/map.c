/*
** EPITECH PROJECT, 2018
** map.c
** File description:
** map.c
*/

#include "my.h"

int r_random(void)
{
    int r = random() % 6;

    if (r == 4)
        r = random() % 6;
    return (r);
}

int cal_x(int x)
{
    if (x <= 39)
        x = x + 4;
    if (x >= 39)
        x = 2;
    return (x);
}

int cal_y(int x, int y , int b)
{
    if (b == 3) {
        write(2, "Enlarge you terminal, you cann't play\n", 38);
        return (-1);
    }
    if (x <= 39) {
        x = x + 4;
        if (y > 83) {
            if (b == 2)
                y = y - 4;
        }
        if (y < 127) {
            if (b == 1)
                y = y + 4;
        }
    }
    if (x >= 40)
        y = 100;
    return (y);
}

static int loop_game(int x, int y, int r)
{
    int c = 0;
    int b = 0;
    char **tetris = malloc(sizeof(char *) * 20);

    while (1) {
        b = touch_display(b);
        tetris[c] = mouv_obj(x, y, r);
        dodo();
        if ((x = cal_x(x)) == 2 || x >= 39) {
            c++;
            r = r_random();
        }
        if ((y = cal_y(x, y, b)) == -1)
            return (84);
        clear();
    }
}

int display_window(int x, int y)
{
    WINDOW *win = initscr();
    timeout(0);
    curs_set(FALSE);
    int r = r_random();
    keypad(win, 1);
    loop_game(x, y, r);
    endwin();
    return (0);
}
