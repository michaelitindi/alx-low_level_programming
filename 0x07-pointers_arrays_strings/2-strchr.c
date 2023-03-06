#include "main.h"

/**
 * *_strchr - Entry point
 * @s: pointer
 * @c: character
 * Description: function that locates character in a string
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (0);
}
