#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number elements in a linked list
 * @h: pointer
 * Return: count of elements
 */

size_t listint_len(const listint_t *h)
{
size_t counter;
counter = 0;
while (h != NULL)
{
h = h->next;
counter++;
}
return (counter);
}
