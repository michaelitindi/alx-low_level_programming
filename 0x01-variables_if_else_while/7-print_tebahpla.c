#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'Printing the alphabet'
 * Return: Always 0 (Success)
 */

int main(void)
{
char z = 'z';
while (z >= 'a')
{
putchar(z);
z--;
}
putchar('\n');
return (0);
}
