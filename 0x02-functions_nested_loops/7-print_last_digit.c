#include "main.h"

/**
 * print_last_digit - Entry point
 
 * Description: function thatprints the last digit
 * Return: (int) Always success
 */

int print_last_digit(int n)
{
  int m = (n % 10);
  if (m < 0)
    {
      m = (m * -1);
    }
  _putchar(m + '0');
  return (m);
}
