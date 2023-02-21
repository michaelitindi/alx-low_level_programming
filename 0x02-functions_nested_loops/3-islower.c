#include "main.h"

/**
 * _islower - Entry point
 * @c: single letter
 * Description: function that checks if character is lowercase
 * Return: void
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
