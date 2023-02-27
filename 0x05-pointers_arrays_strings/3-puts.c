#include "main.h"

/**
 * _puts - Entry point
 * @str: pointer variable
 * Description: function that prints a string
 * Return: length
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
