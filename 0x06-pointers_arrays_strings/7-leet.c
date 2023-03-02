#include "main.h"

/**
 * *leet - Entry point
 * @*: character
 * Description: function that encodes a string
 * Return: character
 */
char *leet(char *str)
{
int i, j;
char leet_chars[] = "443710";
char leet_letters[] = "aeotlAEOTL";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leet_letters[j])
{
str[i] = leet_chars[j/2];
break;
}
}
}
return str;
}
