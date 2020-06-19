##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC =	src/main.c\
		src/debug/debug.c\
		src/debug/debug_drop.c\
		src/debug/debug_left.c\
		src/debug/debug_level.c\
		src/debug/debug_next.c\
		src/debug/debug_pause.c\
		src/debug/debug_quit.c\
		src/debug/debug_right.c\
		src/debug/debug_size.c\
		src/debug/debug_turn.c\
		src/display/display_map.c\
		src/display/display_tetris.c\
		src/help/help.c\
		src/ncurses/next_tetris.c\
		src/ncurses/map.c\
		src/ncurses/objet.c\
		src/ncurses/open.c\
		src/ncurses/read.c\
		src/ncurses/score.c\
		src/ncurses/size_tetris.c\
		src/ncurses/tetrimino_debug.c\
		src/ncurses/touch.c\
		src/printf/my_printf.c\
		src/utils/display.c\
		src/utils/my_getnbr.c

OBJ	=	$(SRC:.c=.o)

CC =	gcc

CFLAGS =	-Wall -Wextra -I./include -lncurses

NAME	=	tetris

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
