/*
** EPITECH PROJECT, 2018
**  test_my_strstr.c
** File description:
** test strstr
*/
#include <criterion/criterion.h>

char *my_strstr(char *str, char *to_find);

Test(my_strstr, find_str_in_another)
{
    char *str = "fait tourner le joint";

    cr_assert_str_eq(my_strstr(str, "tourner"), "tourner");
}

Test(my_strstr, find_str_in_another2)
{
    char *str = "fait tourner le joint";

    cr_assert_null(my_strstr(str, "salut"));
}
