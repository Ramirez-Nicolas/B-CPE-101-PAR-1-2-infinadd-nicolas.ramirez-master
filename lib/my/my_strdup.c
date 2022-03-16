/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** une copie en supprimant le const du param
*/

#include <stdlib.h>

char *my_strcpy(char *dest,char const *src)
{
    int e = 0;

    while (src[e] != '\0') {
        dest[e] = src[e];
        e++;
    }
    dest[e] = '\0';
    return (dest);
}


int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c = c + 1;
    }
    return c;
}

char *my_strdup(char  const *src)
{
    char *str;
    int i;

    str = malloc(sizeof(char) * my_strlen(str));
    i = 0;
    while (src[i] < '\0') {
        str[i] = src[i];
        i = i + 1;
    }
    my_strcpy(str, src);
    return (str);
}
