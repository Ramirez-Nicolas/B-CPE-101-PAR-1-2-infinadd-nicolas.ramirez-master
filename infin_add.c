/*
** EPITECH PROJECT, 2020
** infin_add.c
** File description:
** additioner 2 strings
*/

#include "my.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/*
void my_putchar(char c)
{
    write(1,&c,1);
}
*/

char *infin_add(char *const str1, char *const str2)
{
    if (str1[0] == '0' && str2[0] == '0')
        return(str1);
    else  if (str1[0] == '0')
        return(str2);
    else if (str2[0] == '0')
        return(str1);
    return (NULL);
}
