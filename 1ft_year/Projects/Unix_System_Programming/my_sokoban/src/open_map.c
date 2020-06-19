/*
** EPITECH PROJECT, 2018
** open_map.c
** File description:
** open map 
*/

#include "sokoban.h"

char *open_map(char *str, map_list *map)
{
    int fd = 0;
    struct stat size;
    char *buf;

    fd = open(str, O_RDONLY);
    if (fd < 0)
        rb_xerror("impossible opening");
    stat(str, &size);
    buf = malloc(sizeof(char *) * size.st_size + 1);
    read(fd, buf, size.st_size);
    check_files(buf, map);
    close(fd);
    return (buf);
}

int main(int ac, char **av)
{
    map_list map;
    data_array data;
    
    if (ac == 2) {
        init_map(&map);
        init_data(&data);
        char *buf = open_map(av[1], &map);
        display_map(buf);
//        strlenght(buf, &data);
//        strwidth(buf, &data);
//        printf("lenght = %d\nwidth = %d\n", data.line, data.column);
    }
    else if (ac != 2)
        rb_xerror("mode : ./my_sokoban [maps]");
    return (0);
}
