##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME    =       libmy.a

SRC     =       src/check_flags.c		\
                src/my_base_conversion.c	\
                src/my_put_nbr.c		\
                src/utils.c			\
                src/my_printf.c			\
                src/my_put_unsigned_int.c	\

CC      =       gcc

CFLAGS	+=	-I ./include	

OBJ     =       $(SRC:.c=.o)

all:            $(NAME)

$(NAME):        $(OBJ)
		ar rc -o  $(NAME) $(OBJ)

tests_run: fclean all
		gcc -o test tests/*.c libmy.a --coverage -lcriterion

clean:
		rm -f $(OBJ)
		rm -f *.o
		rm -f *.gcno
		rm -f *.gcda
		rm -f *.*~
		rm -f src/*.o
		rm -f src/*.*~
		rm -f tests/*.gcno
		rm -f tests/*.gcda
		rm -f tests/*.*~
		rm -f tests/*.gcov

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
