#include "main.h"

/**
 * *_memcpy - Entry point
 * @dest: pointer
 * @src: character
 * @n: integer
 * Description: function that fills memorry with a constant byte
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *destorg = dest;
for (i = 0; i < n; i++)
{
*dest++ = *src++;
}
return (destorg);
}
