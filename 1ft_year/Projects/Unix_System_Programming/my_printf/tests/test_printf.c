/*
** EPITECH PROJECT, 2018
** test_printf.c
** File description:
** test_unitaire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "printf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, for_int, .init = redirect_all_std)
{
    my_printf("%d", 12);
    cr_assert_stdout_eq_str("12");
}

Test(my_printf, for_int2, .init = redirect_all_std)
{
    my_printf("%i", 11);
    cr_assert_stdout_eq_str("11");
}

Test(my_printf, binaire, .init = redirect_all_std)
{
    my_printf("%b", 15);
    cr_assert_stdout_eq_str("1111");
}

Test(my_printf, hexa_min, .init = redirect_all_std)
{
    my_printf("%x", 15);
    cr_assert_stdout_eq_str("f");
}

Test(my_printf, hexa_max, .init = redirect_all_std)
{
    my_printf("%X", 15);
    cr_assert_stdout_eq_str("F");
}

Test(my_printf, octal, .init = redirect_all_std)
{
    my_printf("%o", 15);
    cr_assert_stdout_eq_str("17");
}

Test(my_printf, modulo, .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, long_int, .init = redirect_all_std)
{
    long int ty = 45;
    
    my_printf("%li", ty);
    cr_assert_stdout_eq_str("45");
}

Test(my_printf, long_int2, .init = redirect_all_std)
{
    long int ty = 45;
    
    my_printf("%ld", ty);
    cr_assert_stdout_eq_str("45");
}

Test(my_printf, not_a_flag, .init = redirect_all_std)
{
    my_printf("%llv");
    cr_assert_stdout_eq_str("%llv");
}

Test(my_printf, lon_long_unsigned_int, .init = redirect_all_std)
{
    long long unsigned int u = -1200;
    
    my_printf("%llu", u);
    cr_assert_stdout_eq_str("18446744073709550416");
}

Test(my_printf, unsigned_int, .init = redirect_all_std)
{
    unsigned int b = -123;

    my_printf("%u", b);
    cr_assert_stdout_eq_str("4294967173");        
}

Test(my_printf, long_unsigned_int, .init = redirect_all_std)
{
    long unsigned int c = -120;

    my_printf("%lu", c);
    cr_assert_stdout_eq_str("18446744073709551496");
}
