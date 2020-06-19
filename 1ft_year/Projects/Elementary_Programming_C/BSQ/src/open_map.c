/*
** EPITECH PROJECT, 2018
** open_map.c
** File description:
** open map
*/

#include "bsq.h"

char *open_map(char *str)
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
    check_files(buf);
    close(fd);
    return (buf);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        char *buf = open_map(av[1]);
        int width = strwidth(buf);;
        int lenght = strlenght(buf);
        int **tab = convert_to_int(buf, width, lenght);

        process_bsq(tab);
        convert_to_char(tab, width, lenght);
    }
    else if (ac != 2)
        rb_xerror("mode : ./bsq [maps]");
    return (0);
}
