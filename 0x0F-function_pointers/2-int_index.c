#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
i = 0;
if (array == 0 || cmp == NULL)
{
return (-1);
}

if (size <= 0)
{
return (-1);
}
while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
return (-1);
}
