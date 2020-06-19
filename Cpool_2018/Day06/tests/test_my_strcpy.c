/*
** EPITECH PROJECT, 2018
** test_my_strcpy.c
** File description:
** test criterion strcpy
*/
#include <criterion/criterion.h>

char *my_strcpy(char *dest, char *src);

Test(my_strcpy, copy_string)
{
    char dest[6] = {0};

    my_strcpy(dest, "how are you");
    cr_assert_str_eq(dest, "how are you");
}

Test(my_strcpy, copy_string_return_value)
{
    char dest[6] = {0};
    char *copy = my_strcpy(dest, "exemple");

    cr_assert_str_eq(copy, "exemple");
}
