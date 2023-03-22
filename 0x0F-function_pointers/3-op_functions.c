#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divide two integers
 * @a: first integer
 * @b: second integer
 * Return: quotient of a divided by b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - find remainder of division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
