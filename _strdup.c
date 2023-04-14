#include "main.h"

/**
*_strdup - a function which duplicate a string
*@s: The string to be duplicated
*
*Return: a pointer to a newly string
*/

char *_strdup(char *s)
{
int len = 0;
char * dst;
if (s == NULL)
{

return (NULL);
}
len = strlen (s) + 1;
dst = (char *)malloc (len);
if (dst!= NULL)
memcpy(dst, s, len);
return (dst);
free(dst);
}

