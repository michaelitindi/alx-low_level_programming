#include "main.h"

/**
 * puts2 - Entry point
 * @str: pointer variable
 * Description: function that prints every other variable
 * Return: void
 */

void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
