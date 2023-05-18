#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning
 * @head: pointer to head pointer
 * @n: node data
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
if (head == NULL)
{
return (NULL);
}

new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
return (NULL);
}
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
{
(*head)->prev = new;
}
*head = new;
return (new);
}
