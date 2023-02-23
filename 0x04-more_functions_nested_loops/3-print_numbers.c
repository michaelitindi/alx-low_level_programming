#include "main.h"



/**
 * main - Entry point
 * Description: 'Printing 0 to 9 '
 * Return: void
 */

void print_numbers(void)
{
int a = 0;
for (a = 0; a < 10; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
