#include "main.h"



/**
 * print_most_numbers - Entry point
 * Description: 'Printing 0 to 9 '
 * Return: void
 */

void print_most_numbers(void)
{
int a = 0;
for (a = 0; a < 10; a++)
{
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
}
_putchar('\n');
}
