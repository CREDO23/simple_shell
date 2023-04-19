#include "main.h"

char *_strtok(char *string, char *del)
{
    static char *remain, *token, nil[1] = "0";
    int i = 0, j = 0, k;
    char *str; 

    if (nil[0] == '1')  return NULL;
    str = remain ? _strdup(remain) : _strdup(string);
    token = malloc(sizeof(char) * 1023);
    if (token == NULL)
        return (NULL);
    while (str[i] != '\0')
    {
        if (str[i] == del[0])
        {
            k = i;
            for (j = 0; j < _strlen(del); j++)
            {
                if (del[j] != str[k++])
                    break;
            }
            if (j == _strlen(del))
            {
                j = 0;
                _free(remain);
                remain = malloc(sizeof(char) * 1026);
                if (remain == NULL)
                    return (NULL);
                for (i = i + 1; str[i] != '\0'; i++)
                    remain[j++] = str[i];
                remain[j] = '\0';
                _free(str);
                return (token);
            }
        }
        token[i] = str[i];
        token[i + 1] = '\0';
        i++;
    }
    _free(str);
    _free(remain);
    nil[0] = '1';
    return (token);
}