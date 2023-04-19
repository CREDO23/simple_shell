#include "main.h"

size_t _getline(char **lineptr, size_t *n, FILE *stream)
{
    char *buffer;
    char ch;
    static ssize_t inputs ;
    ssize_t i;

    if (inputs > 0)
        fflush(stream);
    inputs = 0;

    buffer = malloc(sizeof(char) * 1024);

    while (ch != '\n')
    {
        i = read(STDIN_FILENO, &ch, 1);
        if ( i == -1 )
        {
            _free(buffer);
            return -1;
        }
        else if ( inputs >= 1024){
                buffer = _ralloc(buffer, inputs, inputs + 1);
        }
        else if (i == 0 && inputs != 0)
        {
            inputs++;
            break;
        }

        buffer[inputs] = ch;
        inputs++;
    }

    buffer[inputs] = '\0';
    *n = inputs;
    *lineptr = _strdup(buffer);
    _free(buffer);
    return inputs;
}