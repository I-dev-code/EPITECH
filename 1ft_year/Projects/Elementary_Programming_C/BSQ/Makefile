##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME	=	bsq

SRC	=	src/open_map.c			\
		src/utils.c			\
		src/rb_errors.c			\
		src/convert_to_int.c		\
		src/bsq.c			\
		src/convert_to_char.c

CC	=	gcc

CFLAGS	=	-I ./include -W -Wall -Wextra

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
