#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */



char *str_concat(char *s1, char *s2)
{
char *con;
unsigned int len1;
unsigned int len2;
unsigned int i;
len1 = 0;
len2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1])
{
len1++;
}
while (s2[len2])
{
len2++;
}
con = malloc(len1 + len2 + 1);
if (!con)
return (NULL);

for (i = 0; i < len1; i++)
con[i] = s1[i];
for (i = 0; i < len2; i++)
con[len1 + i] = s2[i];
con[len1 + len2] = '\0';
return (con);
}
