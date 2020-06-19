/*
** EPITECH PROJECT, 2018
** test_my_strcmp.c
** File description:
** test criterion
*/
#include <criterion/criterion.h>

int my_strcmp(char *s1, char *s2);

Test(my_strcmp, what_number)
{
    char *s1 = "salut";
    char *s2 = "salut";

    cr_assert_eq(my_strcmp(s1, s2), 0);
}

Test(my_strcmp, what_number_is_upper)
{
    char *s1 = "salut";
    char *s2 = "salui";

    cr_assert_eq(my_strcmp(s1, s2), 1);  
}

Test(my_strcmp, what_number_is_lower)
{
    char *s1 = "salui";
    char *s2 = "salut";

    cr_assert_eq(my_strcmp(s1, s2), -1);
}
