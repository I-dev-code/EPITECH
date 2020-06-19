##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

SRC	=	get_next_line.c

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

tests_run:	fclean
		gcc -o test tests/*.c $(SRC) --coverage -lcriterion

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
		rm -f Makefile~
		rm -f get_next_line.h.gch
		rm -f test

fclean:		clean

re:		fclean tests_run

.PHONY:		all clean fclean re
