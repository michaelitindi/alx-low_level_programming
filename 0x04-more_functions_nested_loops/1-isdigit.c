#include "main.h"

/**
 * _isdigit - Entry point
 * @c: integer
 * Description: function that checks if variable is digit
 * Return: void
 */

int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
