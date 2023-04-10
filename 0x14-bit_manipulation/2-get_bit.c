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
x = (n >> index) & 1;
if (x != 0 || x != 1) return (-1);
return (x);
}
