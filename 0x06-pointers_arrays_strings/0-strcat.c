#include "main.h"

/**
 * *_strcat - Entry point
 * @dest: pointer variable
 * @src: pointer variable
 * Description: function that concatenates two strings
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return dest;
}
