/*
** EPITECH PROJECT, 2018
** test_my_strdup.c
** File description:
** test criterion strdup
*/
#include <criterion/criterion.h>

char *my_strdup(char const *src);

Test(my_strdup, src_is_null)
{
    char const *str;

    cr_assert_null(my_strdup(str));
}

Test(my_strdup, src_is_good)
{
    char const *str = "Bonjour les putes";

    cr_assert_str_eq(my_strdup(str), "Bonjour les putes");
}
