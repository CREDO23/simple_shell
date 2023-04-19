#include "main.h"

char *_strcpy(char *src, char *dest)
{
    size_t a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}