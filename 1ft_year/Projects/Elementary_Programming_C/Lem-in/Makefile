##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

CC	=	gcc

NAME	=	lem_in

CFLAGS  +=	-I./include -g3

SRC	=	src/main.c	\
		src/init.c	\
		src/tools.c	\
		src/display.c	\
		src/check.c

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

tests_run:	fclean all
		gcc -o test -I include tests/*.c lem_in --coverage -lcriterion
clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re : 		fclean all

.PHONY:		all clean fclean re
