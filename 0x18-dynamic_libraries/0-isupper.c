#include "main.h"

/**
 * _isupper - Entry point
 * @c: single character
 * Description: function that checks if character is uppercase
 * Return: integer
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
