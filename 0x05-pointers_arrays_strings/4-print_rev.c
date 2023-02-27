#include "main.h"

/**
 * print_rev - Entry point
 * @s: pointer variable
 * Description: function that reverses a string
 * Return: void
 */

void print_rev(char *s)
{
int count = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
for (i = count - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
