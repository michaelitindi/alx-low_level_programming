#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: pointer to head pointer
 * @n: value to be passed
 * Return: pointer to new node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node_x = malloc(sizeof(listint_t));
if (node_x == NULL)
{
return (NULL);
}
node_x->n = n;
node_x->next = *head;
*head = node_x;
return (node_x);
}
