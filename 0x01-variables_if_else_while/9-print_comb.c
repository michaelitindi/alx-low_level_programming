#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'Printing numbers with spaces'
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = 0;
while (a < 10)
{
putchar('0' + a);
putchar(',');
putchar(' ');
a++;
}
putchar('\n');
return (0);
}
