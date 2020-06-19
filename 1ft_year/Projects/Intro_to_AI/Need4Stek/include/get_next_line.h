/*
** EPITECH PROJECT, 2018
** get_next_line.h
** File description:
** get_next_line.h
*/

#ifndef GET_NEXT_LINE
#ifndef  READ_SIZE
#    define  READ_SIZE (1)
#endif  /* !READ_SIZE  */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *get_next_line(void);

#endif /* !GET_NEXT_LINE */
