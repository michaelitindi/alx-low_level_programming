#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Checks whether character is uppercase
 * Return: Always 0.
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
