#include <stdio.h>
#include <stdlib.h>
#ifndef MAIN_C
#define MAIN_C
#define FILENAME __FILE__
/**
 * main - program that prints filename
 * Return: (0) Always success
 */

int main(void)
{
printf(FILENAME);
printf("\n");
return (0);
}
#endif
