#include "hash_tables.h"
/**
* hash_table_set - function that adds an element to the hash table
* @ht: hash table to add to
* @key: key to add
* @value: value stored of key
* Return: 1 if success, 0 if fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new, *tp;
unsigned long int i;
if (ht == NULL || key == NULL || value == NULL)
return (0);
i = key_index((const unsigned char *)key, ht->size);
tp = ht->array[i];
if (tp != NULL)
{
while (tp)
{
if (strcmp(tp->key, key) == 0)
{
tp->value = strdup(value);
return (1);
}
tp = tp->next;
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
new->key = strdup(key);
new->value = strdup(value);
new->next = NULL;
if (ht->array[i] != NULL)
new->next = ht->array[i];
ht->array[i] = new;
return (1);
}
