#include "main.h"

int _atoi(char  *str)
{
    int i = 0, sign = 1, val = 0;

    if (str == NULL)
        return (0);

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }


    for (; i < _strlen(str); i++)
    {   
        
        val = val * 10 + (str[i] - '0');
       
    }

    return (val * sign);
}