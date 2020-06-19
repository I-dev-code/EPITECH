/*
** EPITECH PROJECT, 2019
** navy.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>

typedef struct map_list {
    char *ft_line;
    char *sd_line;
    char **array;
    int lenght;
    int height;
}t_map;

typedef struct position_list {
    char **pos;
    char *position_boats;
    int lenght;
    int height;
}t_pos;

typedef struct info_position_list {
    int lenght;
    int ft_square;
    int sd_square;
    int ft_number;
    int sd_number;
    int a;
    int b;
    int c;
    int d;
    int e;
}t_infopos;

//main.C
int navy(int ac, char **av);
void print_help(void);
int main(int ac, char **av);

//player.c
void player_one_successfully_connected(int signum);
int player_one(void);
void waiting_player_one(void);

//player2
int player_two(pid_t pid_player1);
void waiting_player_two(void);
void player_two_connection(int signum, siginfo_t *siginfo, void *ucontext);

//process.c
int process_navy(char *filepath);
int display_game(t_map *map, t_pos *pos);
int process(t_map *map, t_pos *pos, int a);
int process_pos(t_pos *pos, char *filepath);
int process_position(t_pos *pos, t_infopos *info);

//init_struct.c
int init_struct_map(t_map *map);
int init_struct_position(t_pos *pos);
int init_struct(t_map *map, t_pos *pos, t_infopos *info);

//position.c
int check_pos_alpha(t_pos *pos, t_infopos *info);
int check_pos_num(t_pos *pos, t_infopos *info);
int get_position_to_int(t_pos *pos, t_infopos *info);
int check_position(t_pos *pos, t_infopos *info);

//filling_map.c
int malloc_position(t_pos *pos);
int read_file_pos(t_pos *pos, char *filepath);
int filling_pos(t_pos *pos);

//place_boats.c
int fill_vertical(t_map *map, int length, int x, int y);
int fill_horizontal(t_map *map, int length, int x, int y);
int find_sens_boats(t_pos *pos, int a, int x);
int filling_array_boards(t_pos *pos, t_map *map);

//map_empty.c
int malloc_map(t_map *map);
int filling_map(t_map *map);

//display_map.c
int display_map(char **array);
int display_line(t_map *map);

//utils.c
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char *str);
int my_put_nbr(int nb);
int check_num(char c);

//utils_bis.c
int check_alpha(char c);
int my_getnbr(char *str, int *stock);
