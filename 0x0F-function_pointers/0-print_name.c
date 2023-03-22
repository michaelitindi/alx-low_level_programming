
#include "function_pointers.h"



void printname_func(char *x)
{
int i;
i = 0;  
while (x[i] != '\0')
{
_putchar(x[i]);
i++;
}
}


void print_name(char *name, void (*f)(char *))
{
f = &printname_func;
(*f)(name);
}
