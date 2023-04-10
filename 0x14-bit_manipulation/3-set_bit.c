#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets bit to 1
 * @n: pointer to integer
 * @index: index of bit
 * Return: void
 */


int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= (1 << index);
return (1);
}
