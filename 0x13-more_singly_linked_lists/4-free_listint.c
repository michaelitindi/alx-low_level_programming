#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: pointer
 * Return: void
 */


void free_listint(listint_t *head)
{
listint_t *x;
while (head != NULL)
{
x = head;
head = head->next;
free(x);
}

}
