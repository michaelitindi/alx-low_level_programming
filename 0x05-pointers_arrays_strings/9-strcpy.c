#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: pointer variable
 * @src: pointer variable
 * Description: function that copies string to buffer
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != 0; i++)
{
dest[i] = src[i];
}
return (dest);
}
