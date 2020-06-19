/*
** EPITECH PROJECT, 2019
** my_ls.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#ifndef MY_LS_H_
	#define MY_LS_H_

        #include <stdio.h>
        #include <stdlib.h>
        #include <unistd.h>
        #include <string.h>
        #include <dirent.h>
        #include <sys/types.h>
        #include <sys/stat.h>
        #include <errno.h>

//my_ls.c
int check_is_file(char *str);
void read_dir(DIR *dir);
int browse_dir(DIR *dir, char *str);
int main(int ac, char **av);

//utils.c
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);

#endif /* !MY_LS_H_ */
