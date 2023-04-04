#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements in a linked list
 * @h: pointer
 * Return: count of elements
 */

size_t print_listint(const listint_t *h)
{
size_t counter;
counter = 0;
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
