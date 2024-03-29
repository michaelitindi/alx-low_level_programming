#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum of data in linked list
 * @head: head pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *current;
int sum;
current = head;
sum = 0;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
