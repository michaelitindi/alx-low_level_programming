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
unsigned int len1,len2;
unsigned int i,j;
char *ptr;
i = 0;
j = 0;
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

while(s1[len1] != '\0')
{
len1++;
}
while (len2 < n && s2[len2] != '\0')
{
len2++;
}


ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
if (ptr == NULL)
{
return (NULL);
}

while (s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}
while (j < len2)
{
ptr[i] = s2[j];
i++;
j++;
}
ptr[i] = '\0';
return (ptr);
}
