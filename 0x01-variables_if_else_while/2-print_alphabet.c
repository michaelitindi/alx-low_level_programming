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
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
