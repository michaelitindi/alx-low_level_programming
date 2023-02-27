#include "main.h"

/**
 * rev_string - Entry point
 * @s: pointer variable
 * Description: function that reverses a string
 * Return: void
 */

void rev_string(char *s)
{
char st = s[0];
int count = 0;
int i;
while (s[count] != '\0')
{
count++;
}
for (i = 0; i < count; i++)
{
count--;
st = s[i];
s[i] = s[count];
s[count] = st;
}
}
