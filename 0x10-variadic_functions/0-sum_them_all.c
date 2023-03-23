#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of specified integers
 * @n: integer
 * Return: integer sum
 */


int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int x;
int sum;
sum = 0;
i = 0;
if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
sum = sum + x;
}
va_end(args);
return (sum);
}
