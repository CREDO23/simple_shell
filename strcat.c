#include "main.h"

char *_strcat(char *str1, char *str2)
{
    char *result;
    int i,j, len;

    len = _strlen(str1) + _strlen(str2);

    result = malloc(sizeof(char) * (len + 1));

    if (result == NULL)
        return NULL;

    for (i = 0; str1[i]; i++)
        result[i] = str1[i];

    
    for (j = 0; str2[j]; j++)
        result[i++] = str2[j];
    
    result[len] = '\0';

    _free(str1);

    return (result);
}