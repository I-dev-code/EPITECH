##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

GENERATOR	=	generator/

SOLVER		= 	solver/

OUTPUT		=	tournament/

all:
		make -C $(GENERATOR)
		make -C $(SOLVER)

clean:
		make -C $(GENERATOR) clean
		make -C $(SOLVER) clean

fclean:		clean
		make -C $(GENERATOR) fclean
		make -C $(SOLVER) fclean

re:		fclean all

.PHONY:		all clean fclean re
