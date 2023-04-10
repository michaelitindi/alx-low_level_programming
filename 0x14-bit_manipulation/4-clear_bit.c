#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets bit to 0
 * @n: pointer to integer
 * @index: index of bit
 * Return: 1
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
