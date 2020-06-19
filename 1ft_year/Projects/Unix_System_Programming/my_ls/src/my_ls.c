/*
** EPITECH PROJECT, 2019
** my_ls.c
** File description:
** ls fct system
*/

#include "my_ls.h"

int check_is_file(char *str)
{
    int status;
    struct stat size;

    status = stat(str, &size);
    if (status != 0) {
        my_putstr("Error, erno =");
        my_put_nbr(errno);
        my_putstr("\n");
        return (84);
    }
    if (S_ISREG(size.st_mode)) {
        my_putstr(str);
        my_putstr("\n");
        exit (0);
    }
    else
        return (0);
}

void read_dir(DIR *dir)
{
    struct dirent *rep = NULL;

    while ((rep = readdir(dir)) != NULL) {
        if (rep->d_name[0] != '.') {
            my_putstr(rep->d_name);
            my_putstr("\n");
        }
    }
}

int browse_dir(DIR *dir, char *str)
{
    dir = opendir(str);

    if (dir == NULL) {
        check_is_file(str);
        my_putstr("ls: impossible d'acceder à ");
        my_putstr(str);
        my_putstr(": No such file or directory\n");
        exit (84);
    }
    read_dir(dir);
    closedir(dir);
    return (0);
}

int main(int ac, char **av)
{
    DIR *dir = NULL;
    
    if (ac != 1) {
        browse_dir(dir, av[1]);
        closedir(dir);
    } else {
        browse_dir(dir, ".");
        closedir(dir);
    }
    return (0);
}
