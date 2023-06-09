#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - gets value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with the elemen
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

unsigned long int i;
hash_node_t *current;
if (ht == NULL || key == NULL || *key == '\0')
{
return (0);
}
i = key_index((const unsigned char *)key, ht->size);
current = ht->array[i];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
return current->value;
}
current = current->next;
}
return (NULL);
}
