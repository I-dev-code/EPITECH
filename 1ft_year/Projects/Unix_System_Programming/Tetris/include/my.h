/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>

//debug.c
int return_debug(char **av);
int display_debug(char **av);
int my_compare_string(char const *s1, char const *s2);
int return_getch(void);

//debug_drop.c
char *key_drop(char **av);
char key_drop_flag(char **av);
void display_key_drop(char **av);

//debug_left.c
char *key_left(char **av);
char key_left_flag(char **av);
void display_key_left(char **av);

//debug_level.c
char *key_level(char **av);
char key_level_flag(char **av);
void display_key_level(char **av);

//debug_next.c
int key_next(char **av);
void display_key_next(char **av);

//debug_pause.c
char *key_pause(char **av);
char key_pause_flag(char **av);
void display_key_pause(char **av);

//debug_quit.c
char *key_quit(char **av);
char key_quit_flag(char **av);
void display_key_quit(char **av);

//debug_right.c
char *key_right(char **av);
char key_right_flag(char **av);
void display_key_right(char **av);

//debug_size.c
char *key_size(char **av);
char *key_size_flag(char **av);
void display_key_size(char **av);

//debug_turn.c
char *key_turn(char **av);
char key_turn_flag(char **av);
void display_key_turn(char **av);

//display_map.c
void map_top(void);
void map_middel(void);
void map_end(void);
void display_game(void);

//display_tetris.c
void display_writting(void);
void display_tetris(void);
void display_map(void);
void add_color_func(int i);

//help.c
int display_h(char **av);
int help(char **av);

//next_tetris.c
void next_top(void);
void next_middel(void);
void next_end(void);
void display_next(void);

//objet.c
void dodo(void);
char *mouv_obj(int x, int y, int r);

//open.c
char *my_strcat_mod(char *dest, char *src);
int long_file(char const *str);
int my_orde(char const *s1, char const *s2);
int tcheck_file_tetrimino(char *str);
char **open_tetrimino(void);

//read.c
int return_long_read(char *read_tetris);
char **readd(char *read_tetris);
int return_nbr_file(char **buf);

//score.c
void score_top(void);
void score_middel(void);
void score_end(void);
void display_score(void);

//size_tetris.c
int size_tetrimino(int i, int y);
char return_size_tetris(char *str, int i);

//tetrimino_debug.c
int tetrimino_nbr(void);
char *get_right_tetris_name(char *dos);
char **tetrimino_name(void);
int tetri_debug_sentence(void);
char **get_order(char **dos);

//touch.c
int touch(void);

//display.c
void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);

//my_get_nbr.c
int my_is_neg(char *str);
int my_is_num(char c);
int my_getnbr(char *str);

//map.c
int r_random(void);
int cal_x(int x);
int cal_y(int x, int y , int b);
int touch_display(int b);
int display_window(int x, int y);

//printf.c
int my_put_nbr(int nb);
int switch_print(char const *s, va_list ap, int i);
int my_printf(char const *s, ...);
int my_strcmp(char const *s1, char const *s2);