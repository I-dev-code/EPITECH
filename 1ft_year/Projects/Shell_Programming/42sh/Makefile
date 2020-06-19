##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

RM		=	rm -f

NAME	=	42sh

SRCS	=	src/main.c					\
			src/exit.c					\
			src/manage_cmd.c			\
			src/env.c					\
			src/echo.c					\
			src/execve.c				\
			src/unsetenv.c				\
			src/cd.c					\
			src/tools.c					\
			tools/my_strcat.c			\
			tools/my_strdup.c			\
			tools/str_to_wordtab.c		\
			tools/get_next_line.c		\
			tools/my_getnbr.c			\
			printf/my_char_to_string.c	\
			printf/my_convertstr.c		\
			printf/my_flags.c			\
			printf/my_formats.c			\
			printf/my_length.c			\
			printf/my_pourcent.c		\
			printf/my_printf.c			\
			printf/my_putchar.c			\
			printf/my_put_hexa.c		\
			printf/my_put_long.c		\
			printf/my_put_nbr.c			\
			printf/my_putstr.c			\
			printf/my_put_unsigned.c	\
			printf/my_revstr.c			\
			printf/my_strcmp.c

OBJS	= 	$(SRCS:.c=.o)

INC		=	-I ./include/

CC		=	gcc -g $(INC)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) -Wall -Wextra $(SRCS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
