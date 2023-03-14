#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "main.h"
/**
 * _strdup - Entry point
 * @str: character
 * Description: function that copies a string.
 * Return: pointer
 */


char *_strdup(char *str)
{
unsigned int i;
unsigned int size;
char *ptr;
size = strlen(str);
if (str == 0)
{
return (0);
}
ptr = (char *) malloc(size *sizeof(char) + 1);
if (ptr == 0)
{
return (0);
}
for (i = 0; i < size + 1; i++)
{
ptr[i] = str[i];
}
return (ptr);
}
