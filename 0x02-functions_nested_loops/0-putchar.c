#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Program that prints putchar
 * Return: Always (0) (Success)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}


int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
return (0);
}
