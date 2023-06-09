#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value that comes with the key
 * Return: 1 Success
 */




int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i;
hash_node_t *new;
hash_node_t *current;
if (ht == NULL || key == NULL || *key == '\0')
{
return (0);
}
i = key_index((const unsigned char *)key, ht->size);
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
return (0);
}
new->key = strdup(key);
new->value = strdup(value);
new->next = NULL;
current = ht->array[i];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(new->key);
free(new->value);
free(new);
free(current->value);
current->value = strdup(value);
return (1);
}
current = current->next;
}

new->next = ht->array[i];
ht->array[i] = new;

return (1);
}
