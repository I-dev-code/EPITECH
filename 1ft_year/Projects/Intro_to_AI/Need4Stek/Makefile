##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

SRC	=	src/main.c			\
		src/utils/function_display.c	\
		src/utils/converter.c 		\
		src/gnl/get_next_line.c 	\
		src/engine/bridge_speed_dir.c 	\
		src/management/string.c 	\
		src/str_to_word_tab/my_str_to_tab_delim.c 	\
		src/free/function_free.c


OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -pedantic -std=c99 \
		-I include -ggdb3 -Ofast

LDFLAGS	+=	-lm

NAME	=	ai

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(CFLAGS) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
