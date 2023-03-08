#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: character
 * Description: function that gets length of a string.
 * Return: integer
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
