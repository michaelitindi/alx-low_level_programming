#include "main.h"



/**
 * more_numbers - Entry point
 * Description: 'Printing 0 to 14 ten times'
 * Return: void
 */

void more_numbers(void)
{
int b = 0;
for (b = 0; b <= 10; b++)
{  
int a = 0;
for (a = 0; a <= 14; a++)
{
_putchar(a + '0');
}
_putchar('\n'); 
}
}
