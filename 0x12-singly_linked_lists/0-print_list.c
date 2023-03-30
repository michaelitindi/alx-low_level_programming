#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: list
 * Return: number of nodes
 */



size_t print_list(const list_t *h)
{
size_t count;
count = 0;
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
while(h != NULL)
{
printf("%s %i\n",h->str, h->len);
h = h->next;
count++;
}
return (count);
}
