#include "main.h"

/**
 * _isalpha - Entry point
 * @c: single letter
 * Description: function that checks if character is alphabetic
 * Return: void
 */

int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
return (1);
}
else
{
return (0);
}
}
