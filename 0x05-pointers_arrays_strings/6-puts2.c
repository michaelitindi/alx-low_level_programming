#include "main.h"

/**
 * puts2 - Entry point
 * @str: pointer variable
 * Description: function that prints every other variable
 * Return: void
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
{
_putchar(str[i]);
}
else
{
continue;
}
}
_putchar('\n');
}
