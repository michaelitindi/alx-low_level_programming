#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'Printing hexadecimal'
 * Return: Always 0 (Success)
 */

int main(void)
{
char a = 'a';
int b = 0;
for (b = 0; b < 10; b++)
{
putchar('0' + b);
}
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
