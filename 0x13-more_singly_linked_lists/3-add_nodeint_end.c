#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node to linked list at the end
 * @head: pointer to head pointer
 * @n: int value
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node_y, *node_z;
node_y = malloc(sizeof(listint_t));
if (node_y == NULL)
{
return (NULL);
}
node_y->n = n;
node_y->next = NULL;
if (*head == NULL)
{
*head = node_y;
return (node_y);
}
node_z = *head;
while (node_z->next != NULL)
{
node_z = node_z->next;
}
node_z->next = node_y;
return (node_y);
}
