##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME	=	solver

SRC	=

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Werror -Wextra -pedantic -std=c99 \
		-I include -ggdb3 -Ofast

LDFLAGS	+=	-lm

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(CFLAGS) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f Makefile~
		rm -f include/*.h~
		rm -f src/*.c~
		rm -f src/#*#

re:		fclean all

.PHONY:		all clean fclean re
