#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Entry point
 * @size: integer
 * @c: character
 * Description: function that creates array.
 * Return: pointer
 */



char *create_array(unsigned int size, char c)
{
char  *mal;
unsigned int i;
if (size == 0)
{
return (0);
}
mal = (char*) malloc(size * sizeof(char));

if (mal == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
mal[i] = c;
}
return (mal);
}
