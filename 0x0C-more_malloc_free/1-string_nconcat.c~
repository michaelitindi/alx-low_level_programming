#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: character
 * @s2: character
 * @n: integer
 * Return: pointer
 */




char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i,j;
char *ptr;
i = 0;
j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while(s1[i] != '\0')
{
i++;
}
while (j < n && s2[j] != '\0')
{
s1[i] = s2[j];
i++;
j++;
}
while (j >= n && s2[j] != '\0')
{
s1[i] = s2[j];
i++;
}
s1[i] = '\0';
ptr = (char *) malloc(sizeof(char) * (i + n + 1));
if (ptr == NULL)
{
return (NULL);
}
   
*ptr = *s1;
return (ptr);
free(ptr);
}
