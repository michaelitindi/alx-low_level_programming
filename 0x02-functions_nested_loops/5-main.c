#include "main.h"

/**
 * main - Entry point
 * Description: Program that prints sign of number
 * Return: Always (0) (Success)
 */

int main(void)
{
 int r;
r = print_sign(98);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0xff);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(-1);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
return (0);
}
