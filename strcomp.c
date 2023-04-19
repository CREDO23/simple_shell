#include "main.h"

int _strcmp(char *str1, char *str2)
{
    int i = 0;

    if (_strlen(str1) != _strlen(str2))
    {
        return (0);
    }
    
    while (*(str1 + i))
    {
        if (!(*(str1 + i) == *(str2 + i)))
        {
            return (0);
        }

        i++;
    }

    return (1);
}