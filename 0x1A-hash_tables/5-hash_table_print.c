#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 */




void hash_table_print(const hash_table_t *ht)
{
hash_node_t *current;
int j;
unsigned long int i;
if (ht == NULL)
{
return;
}
j = 1;
printf("{");
for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
while (current != NULL)
{
if (!j)
{
printf(", ");
}
printf("'%s': '%s'", current->key, current->value);
j = 0;
current = current->next;
}
}
printf("}\n");
}
