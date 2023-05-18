#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements
 * @h: pointer to the head
 * Return: number of elements
 */




size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t i = 0;
while (current != NULL)
{
current = current->next;
i++;
}
return (i);
}
