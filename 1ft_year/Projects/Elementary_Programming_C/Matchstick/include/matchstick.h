/*
** EPITECH PROJECT, 2019
** matchstick.h
** File description:
** lucas.dos-santos@epitech.eu
*/

#ifndef  READ_SIZE
#define  READ_SIZE (1)
#endif /* !READ_SIZE  */

#ifndef MATCHSTICK_H_
    #define MATCHSTICK_H_

        #include <stdio.h>
        #include <stdlib.h>
        #include <unistd.h>
        #include <sys/types.h>
        #include <time.h>

typedef struct t_list {
    char **array;
    char *numb_matches;
    int number_matches;
    int lenght;
    int height;
    int matches;
    char *line;
    char *number;
    int line2;
    int numb;
    int numb_ia;
    int line_ia;
    int win_or_lose;
}t_list;

//main.c
int main(int ac, char **av);

//init_struct.c
void init_struct(t_list *info, char *str, char *column);

//check_array.c
int check_line(t_list *info);
int check_matches_per_line(t_list *info);
int check_matches(t_list *info);
int check_number_of_matches(t_list *info, int line);
int count_matches(t_list *info);

//game_player.c
int game_player_line(t_list *info);
int game_player_matches(t_list *info);
char **filling_my_array(t_list *info);
int game_player(t_list *info);
int removed_match(t_list *info);

//malloc_array.c
int check_numb(int nbr);
char **malloc_array(char *str, t_list *info);
char **convert_my_array(t_list *info);

//game_ia.c
int display_ia(t_list *info);
int random_matches(t_list *info);
int filling_my_array_ia(t_list *info);
int change_line(t_list *info);
int ia_game(t_list *info);

//utils.c
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_str_isnum(char *str);
int my_strlen(char *str);

//my_getnbr.c
int my_getnbr(char const *str);

//get_next_line.c
char *get_next_line(int fd);

//display;c
int display(t_list *info);
int check_new_line(t_list *info, int status);
int count_total_matches(t_list *info);
int check_win_or_lose(t_list *info);
int display_array(t_list *info);

#endif /* !MATCHSTICK_H_ */
