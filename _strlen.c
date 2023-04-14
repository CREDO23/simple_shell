#include "main.h"

/**
*_strlen - computes the length of a string
*@str: the string to compute the length
*Return: the length of @str , -1 on failure.
*
*/

int _strlen ( char *str )
{
int count = 0;

while (*str != '\0')
{
count++;
str++;
}
return (count);
}
