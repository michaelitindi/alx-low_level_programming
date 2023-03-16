#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A function to assign memory
 * @b: integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
return NULL;
}
return (ptr);
}
