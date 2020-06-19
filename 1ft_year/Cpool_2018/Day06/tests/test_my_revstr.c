/*
** EPITECH PROJECT, 2018
** test_my_revstr.c
** File description:
** test criterion revstr
*/
#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, return_reverse)
{
    char copy[6] = {'E', 'x', 'e', 'm', 'p', '\0'};
    
    cr_assert_str_eq(my_revstr(copy), "pmexE");
}
