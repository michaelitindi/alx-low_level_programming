#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gets number of elements in a linked list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}





