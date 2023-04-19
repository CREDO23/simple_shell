#include "main.h" 

void _free(void *ptr)
{
    free(ptr);
    ptr = NULL;
}