#include "main.h"

/**
 * print_sign - Entry point
 * @n: single letter
 * Description: function that checks the sign of the number 
 * Return: (0) Always success
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(0 + '0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
