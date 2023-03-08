#include "main.h"

/**
 * factorial - Entry point
 * @n: integer
 * Description: function that returns factorial of number.
 * Return: integer
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
