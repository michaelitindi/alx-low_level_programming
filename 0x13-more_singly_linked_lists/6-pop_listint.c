#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to head pointer
 * Return: data
 */

int pop_listint(listint_t **head)
{
int datastore;
listint_t *x;
if (*head == NULL)
{
return (0);
}
x = *head;
*head = (*head)->next;
datastore = x->n;
free(x);
return (datastore);
}

