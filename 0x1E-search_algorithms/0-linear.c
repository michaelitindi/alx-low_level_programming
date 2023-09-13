#include "search_algos.h"


/**
 * linear_search - uses linear search to find value
 * @array: pointer to the first element of the array
 * @size: number of elements
 * @value: value to search
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;
if (!array)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return ((int)i);
}
}
return (-1);
}
