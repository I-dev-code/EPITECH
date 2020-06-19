##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME    =       my_hunter

SRC     =       src/my_hunter.c		\
		src/animation.c		\
		src/init_struct.c	\
		src/menu.c		\
		src/utils.c		\
		src/games_rules.c

CC      =       gcc -Ofast -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio

CFLAGS  =      -I ./include

OBJ     =       $(SRC:.c=.o)

all:            $(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(CFLAGS) $(SRC)

tests_run:	fclean all
		gcc -o test tests/*.c libmy.a --coverage -lcriterion

clean:
		rm -f $(OBJ)
		rm -f *.o
		rm -f *.*~
		rm -f *.~
		rm -f src/*.o
		rm -f src/*.*~

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
