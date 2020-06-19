/*
** EPITECH PROJECT, 2018
** test_my_strncpy.c
** File description:
** criterion strncpy
*/
#include <criterion/criterion.h>

char *my_strncpy(char *dest, char *src, int nb);

Test(my_strncpy, copy_caract)
{
    char dest[6] = {0};

    my_strncpy(dest, "Gryffindor", 5);
    cr_assert_str_eq(dest, "Gryff");
}
