/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** test criterion my_strncmp
*/
#include <criterion/criterion.h>

int my_strncmp(char *s1, char *s2, int n);

Test(my_strcmp, what_number)
{
    char *s1 = "salut";
    char *s2 = "salut";

    cr_assert_eq(my_strcmp(s1, s2, 4), 0);
}

Test(my_strcmp, what_number_is_upper)
{
    char *s1 = "Boqjour";
    char *s2 = "Bonjour";

    cr_assert_eq(my_strcmp(s1, s2, 5), 1);
}

Test(my_strcmp, what_number_is_lower)
{
    char *s1 = "Bonjour";
    char *s2 = "Boqjour";

    cr_assert_eq(my_strcmp(s1, s2, 5), -1);
}

