/*
** EPITECH PROJECT, 2020
** test.c
** File description:
** test unit
*/

#include <criterion/criterion.h>

char *infin_add(char const *str1, char const *str2);
Test(infin_add, zero_more_zero)
{
    cr_assert_str_eq(infin_add("0","0"),"0");
}

Test(infin_add, one_more_zero)
{
    cr_assert_str_eq(infin_add("1","0"),"1");
}

Test(infin_add, zero_more_one)
{
    cr_assert_str_eq(infin_add("0","1"),"1");
}
