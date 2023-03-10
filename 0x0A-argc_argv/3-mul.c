#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: integer
 * @argv: array
 * Description: function that multiplies two arguments
 * Return: (0) Always success
 */


int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
