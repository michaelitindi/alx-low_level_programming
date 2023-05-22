#include "main.h"

/**
 * *_strncat - Entry point
 * @dest: pointer variable
 * @src: pointer variable
 * @n: integer
 * Description: function that concatenates two strings
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int i = 0;
while (*ptr != '\0')
{
ptr++;
}
while (i < n && *src != '\0')
{
*ptr++ = *src++;
i++;
}
*ptr = '\0';
return (dest);
}
