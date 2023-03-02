#include "main.h"

/**
 * *leet - Entry point
 * @str: string
 * Description: function that encodes a string
 * Return: string
 */
char *leet(char *str)
{
int i, j;
char leet_chars[] = "43071";
char leet_letters[] = "aAeEoOtTlL";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leet_letters[j])
{
str[i] = leet_chars[j / 2];
break;
}
}
}
return (str);
}
