#include "main.h"

/**
 * _strlen - Entry point
 * @s: pointer variable
 * Description: function that counts length of string
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
