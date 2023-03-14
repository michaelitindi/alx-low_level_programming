#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _puts_recursion - Entry point
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
ptr = (char *) malloc(size * sizeof(char));
if (ptr == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
ptr[i] = str[i];
}
return (ptr);
free(ptr);
}
