#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts binary string to integer
 * @b: string containing binary
 * Return: integer value
 */

unsigned int binary_to_uint(const char *b)
{
int i,x;
unsigned int sum, pow;
i = 0;
sum = 0;
pow = 0;
x = 0;
if (b == NULL)
{
return (0);
}
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
x = (b[i]-'0') << pow;
pow++;
i--;
sum += x;
}
return (sum);
}
