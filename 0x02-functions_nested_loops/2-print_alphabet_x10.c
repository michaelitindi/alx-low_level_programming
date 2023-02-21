#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: function that prints alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
int i = 0;
while (i <= 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
i++;
_putchar('\n');
}
}
