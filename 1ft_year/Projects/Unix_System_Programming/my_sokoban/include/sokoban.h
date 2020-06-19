/*
** EPITECH PROJECT, 2018
** sokoban.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#ifndef _SOKOBAN_H_
#define _SOKOBAN_H_

#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct map_list {
    int player;
    int boxes;
    int storage;
}map_list;

typedef struct data_array {
    int line;
    int column;
    char **array;
}data_array;

//open_map.c
char *open_map(char *str, map_list *map);
int main(int ac, char **av);

//struct_instance.c
void init_map(map_list *map);
void init_data(data_array *data);

//check_file.c
int check_player(char *buf, map_list *map);
int check_boxes_storages(char *buf, map_list *map);
int check_all_caract(char *buf);
void check_files(char *buf, map_list *map);

//rb_error.c
void rb_print_err(char *str);
void rb_xerror(char *c);

//convert_to_array.c
int strlenght(char *buf, data_array *data);
int strwidth(char *buf, data_array *data);

//utils.c
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);

#endif /* !_SOKOBAN_H_ */
