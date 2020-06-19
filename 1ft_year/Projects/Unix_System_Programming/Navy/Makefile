##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME	=	navy

SRC	=		src/players.c 				\
			src/main.c 			\
			src/player2.c 			\
			src/process.c 			\
			src/utils.c 			\
			src/utils_bis.c 		\
			src/init_struct.c 		\
			src/map_empty.c 		\
			src/filling_map.c 		\
			src/place_boats.c 		\
			src/display_map.c 		\
			src/position.c

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