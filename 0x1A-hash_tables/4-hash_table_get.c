#include "hash_tables.h"

/**
* hash_table_get - function that retrieve a value.
* @ht: hash table
* @key: it's a key
* Return: value associated with key or NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *tp;
unsigned long int i;
if (ht == NULL || key == NULL)
return (NULL);
i = key_index((const unsigned char *)key, ht->size);
tp = ht->array[i];
if (tp == NULL)
return (NULL);
while (strcmp(tp->key, key) != 0)
tp = tp->next;
if (tp == NULL)
return (NULL);
return (tp->value);
}
