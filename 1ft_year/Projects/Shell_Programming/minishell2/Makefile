##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME	=	mysh

SRC 	=	src/main.c													\
			src/gnl/get_next_line.c 									\
			src/str_to_word_tab/my_str_to_word_array.c 					\
			src/parser/my_parser.c 										\
			src/manage_command/check_command/check_command.c 			\
			src/manage_command/command_list/manage_exit.c				\
			src/manage_command/command_list/manage_cd.c					\
			src/manage_command/command_list/manage_env.c				\
			src/manage_command/command_list/manage_setenv.c				\
			src/manage_command/command_list/manage_exec.c				\
			src/manage_command/command_into_tab/put_command_into_tab.c	\
			src/utils/output.c 											\
			src/utils/output_error.c 									\
			src/utils/my_strcmp.c 										\
			src/utils/string_to_int.c 									\
			src/utils/my_strcat.c 										\
			src/utils/my_strcpy.c 										\
			src/utils/my_realloc.c

CC	=	gcc -g

CFLAGS	=	-I ./include -W -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(SRC)

clean:
	rm -f $(OBJ)
	rm -f *.*~
	rm -f src/*.*~
	rm -f Makefile~
	rm -f include/*.h~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
