##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME	=	matchstick

SRC	=		src/main.c		\
			src/utils.c 	\
			src/display.c 	\
			src/my_getnbr.c 	\
			src/get_next_line.c \
			src/init_struct.c 	\
			src/malloc_array.c 	\
			src/check_array.c 	\
			src/game_player.c 	\
			src/game_ia.c

CC	=	gcc -g

CFLAGS	=	 -I ./include -W -Wall -Wextra

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