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
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
return ('\0');
}
