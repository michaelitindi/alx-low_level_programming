#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns bit value at certain index
 * @n: integer
 * @index: index of bit
 * Return: void
 */

int get_bit(unsigned long int n, unsigned int index)
{
int x;
if (n == NULL && index == NULL)
{
return (-1);
}
x = (n >> index) & 1;
return (x);
}
