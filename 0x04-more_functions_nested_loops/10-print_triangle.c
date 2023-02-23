#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of triangle
 * Return:void
 */

void print_triangle(int size)
{
int a, b, c;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
for (b = size; b > a; b--)
{
_putchar(' ');
}
for (c = 1; c <= b; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
