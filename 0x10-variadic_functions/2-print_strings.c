#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: char
 * @n: unsigned int
 * Return: void
 */




void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++) {
const char *str = va_arg(args, const char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
