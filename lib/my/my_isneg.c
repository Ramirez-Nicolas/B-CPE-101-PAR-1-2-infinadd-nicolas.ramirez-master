/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** 
*/
#include <unistd.h>

void my_putchar(char c);
int my_isneg(int nb)
{
    if (nb < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
