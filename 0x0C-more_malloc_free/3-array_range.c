#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array of integers
 * @min: integer
 * @max: integer
 * Return: pointer
 */



int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (!arr)
return (NULL);

for (i = 0; i < (max - min + 1); i++)
arr[i] = min + i;

return (arr);
}
