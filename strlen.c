#include "main.h"

int _strlen(char *str)
{
    int len;
    
    if (str == NULL)
        return (-1);

    for (len = 0; str[len] != '\0';)
        len++;

    return (len);
}