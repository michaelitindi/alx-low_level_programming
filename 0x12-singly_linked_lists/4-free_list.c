#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t linked list.
 *
 * @head: Pointer to the head of the linked list.
 * Return: void
 */
void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}
