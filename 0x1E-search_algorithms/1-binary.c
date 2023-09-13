#include "search_algos.h"

/**
 * print_array - print the current array being evaluated
 *
 * @array: pointer to the first element of the array to search in
 * @left: starting index
 * @right: ending index
 */
void print_array(int *array, size_t left, size_t right)
{
printf("Searching in array: ");
while (left < right)
{
printf("%d, ", array[left]);
left++;
}
printf("%d\n", array[left]);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if value is
 * not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
size_t left;
size_t right;
size_t mid;
left = 0;
right = size - 1;
if (!array)
return (-1);

while (left <= right)
{
print_array(array, left, right);
mid = left + (right - left) / 2;
if (array[mid] == value)
return ((int)mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}
return (-1);
}
