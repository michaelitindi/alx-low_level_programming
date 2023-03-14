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
if (str == NULL)
{
return (NULL);
}
ptr = (char *) malloc(size *sizeof(char) + 1);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = str[i];
}
ptr[i] = '\0';
return (ptr);



}
