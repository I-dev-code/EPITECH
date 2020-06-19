##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME	=	my_sokoban

SRC	=	src/open_map.c		\
		src/check_file.c	\
		src/struct_instance.c	\
		src/display_map.c	\
		src/rb_error.c		\
		src/utils.c

CC	=	gcc

CFLAGS	=	-I ./include -lncurses -W -Wall -Wextra -Ofast

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(CFLAGS) $(SRC)

clean:
		rm -f $(OBJ)
		rm -f *.o
		rm -f *.*~
		rm -f src/*.o
		rm -f src/*.*~

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
