#include "main.h"

/**
 * reset_to_98 - Entry point
 * @a: pointer variable
 * @b: pointer variable
 * Description: function that swaps two numbers
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
