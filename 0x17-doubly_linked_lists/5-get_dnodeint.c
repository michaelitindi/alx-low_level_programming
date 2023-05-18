#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * get_dnodeint_at_index - gets node at certain index
 * @head: head pointer
 * @index: index of node
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
unsigned int i;
current = head;
i = 0;

while (current != NULL && i < index)
{
current = current->next;
i++;
}

if (i == index)
{
return (current);
}
else
{
return (NULL);
}

}
