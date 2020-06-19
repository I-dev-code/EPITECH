##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME	=	my_ls

SRC	=	src/my_ls.c		\
		src/utils.c

CC	=	gcc

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
