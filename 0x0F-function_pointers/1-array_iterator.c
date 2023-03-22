#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator- iterates through array
 * @array: array of integers
 * @size: size of array
 * @action: function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
i = 0;
if (array == 0 || size == 0 || action == NULL)
{
return;
}

while (i < size)
{
(*action)(array[i]);
i++;
}
}
