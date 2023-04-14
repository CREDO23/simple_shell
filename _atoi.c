#include "main.h"

/**
*_atoi - Takes a string as argument and returns its value of type int
*@s: The number in string form
*Return: an integer
*/

int _atoi( char *s)
{

unsigned int res = 0;
int sign = 1;

if (*s == '\0')
return (0);

do {

if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
res = (res * 10) + (*s - '0');

else if (res > 0)
break;
} while (*s++);

return (res * sign);
}
