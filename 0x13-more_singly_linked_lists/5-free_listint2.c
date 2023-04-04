#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: pointer to header pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *a;
if (head == NULL)
{
return;
}
while (*head != NULL)
{
a = *head;
*head = (*head)->next;
free(a);
}
}
