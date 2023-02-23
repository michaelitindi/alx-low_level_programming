#include "main.h"



/**
 * print_line - Entry point
 * @n: integer
 * Description: 'Printing line '
 * Return: void
 */

void print_line(int n)
{
int a = 0;
if (n > 0)
{
for (a = 0; a < n; a++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
