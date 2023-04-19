#include "main.h"

char *_strdup(char *str)
{
    char *result;
    int len, i = 0;

    if (str == NULL)
        return (NULL);

    result = malloc((sizeof(char) * _strlen(str)) +1);
    
    if (result == NULL)
        return (NULL);

    len = _strlen(str);

    while (i < len && *str != '\0')
    {
        result[i++] = *str++;
    }

    result[i] = '\0';
    return (result);
}