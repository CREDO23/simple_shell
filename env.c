#include "main.h"


int _ispath (char *path, char *pathname)
{
    int i,n = 1;

    for (i=0; path[i] != '='; i++)
    {
        if (path[i] != pathname[i])
        {
            n = 0;
        }
    }

    return n;
}