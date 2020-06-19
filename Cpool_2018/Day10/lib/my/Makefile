##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lucas.dos-santos@epitech.eu
##

NAME	=	libmy.a

SRC	=	my_compute_factorial_it.c	\
		my_compute_factorial_rec.c	\
		my_compute_power_it.c		\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_evil_str.c			\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_isneg.c			\
		my_is_prime.c			\
		my_print_alpha.c		\
		my_print_comb2.c		\
		my_print_comb.c			\
		my_print_digits.c		\
		my_print_revalpha.c		\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_showmem.c			\
		my_showstr.c			\
		my_show_word_array.c		\
		my_sort_int_array.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strdup.c			\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_str_to_word_array.c		\
		my_strupcase.c			\
		my_swap.c			

CC	=	ar rc

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(NAME) *.o

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
