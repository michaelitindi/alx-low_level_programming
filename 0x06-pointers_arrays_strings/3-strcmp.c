#include "main.h"

/**
 * *_strcmp - Entry point
 * @s1: pointer variable
 * @s2: pointer variable
 * Description: function that compares two strings
 * Return: pointer
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
