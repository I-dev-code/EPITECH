##
## EPITECH PROJECT, 2017
## makefile
## File description:
## c
##

CC		=		gcc -lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio

NAME		=		my_defender

SRCS		=		./SRC/main.c 	\
				./SRC/pause_menu.c	\
				./SRC/buttons.c	\
				./SRC/init_and_set.c	\
				./SRC/draws_and_sprites.c	\
				./SRC/others.c

OBJ		=		$(SRC.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
		$(CC) -g3 $(SRCS) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f $(OBJ)
		rm -f include/*.gch
		rm -f SRC/*.o

re:		fclean all

.PHONY: all clean fclean all
