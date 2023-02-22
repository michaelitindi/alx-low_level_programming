#include "main.h"

/**
 * _isalpha - Entry point
 * @c: single letter
 * Description: function that checks if character is alphabetic
 * Return: void
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
