#ifndef PRINT_NAME
#define PRINT_NAME
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: string
 * @f: function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}

#endif
