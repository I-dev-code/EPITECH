/*
** EPITECH PROJECT, 2019
** minishell1
** File description:
** exit.c
*/

#include <mysh.h>
#include <myprintf.h>

void exit_command(int nb)
{
    while (nb > 255)
        nb -= 256;
    my_printf("exit\n");
    exit(nb);
}

int check_parenthesis(char *str)
{
    int op = 0;
    int cp = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '(')
            op++;
        else if (str[i] == ')')
            cp++;
        if (cp > 0 && str[i] == '(')
            return (2);
    }
    if (cp == op)
        return (0);
    else if (cp > op)
        return (-1);
    return (1);
}

bool is_numpar(char c)
{
    if ((c >= '0' && c <= '9') ||
        c == '(' || c == ')' || c == ' ')
        return (false);
    return (true);
}

int no_num(char *str)
{
    for (int i = 4; str[i]; i++) {
        if (is_numpar(str[i]) == true)
            return (1);
    }
    return (0);
}

void my_exit(data_t *data)
{
    int nb = my_getnbr(data->str);

    if (no_num(data->str) == 1) {
        my_printf("exit: Syntax error.\n");
        return ;
    }
    switch (check_parenthesis(data->str)) {
    case -1:
        my_printf("Error: need as much opening parenthesis as closing one\n");
        break;
    case 1:
        my_printf("Error: need as much closing parenthesis as opening one\n");
        break;
    case 2:
        my_printf("Error : wrong alignement of parenthesis\n");
        break;
    default :
        exit_command(nb);
        break;
    }
}
