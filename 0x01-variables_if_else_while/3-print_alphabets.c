#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'Printing the alphabet '
 * Return: Always 0 (Success)
 */

int main(void)
{
char a = 'a';
char A = 'A'; 
while (a <= 'z')
{
putchar(a); 
a++;
}
while (A <= 'Z')
{
putchar(A);
A++;
} 
putchar('\n');
return (0);
}
