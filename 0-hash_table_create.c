#include "hash_tables.h"
/**
* hash_table_create - function that create a hash table
* @size: it's the size of the arry
* Return: new hash table or NULL if error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hsh;
unsigned long int y;
if (size == 0)
return (NULL);
hsh = malloc(sizeof(hash_table_t));
if (hsh == NULL)
return (NULL);
hsh->array = malloc(sizeof(hash_node_t *) * size);
if (hsh->array == NULL)
{
free(hsh);
return (NULL);
}
hsh->size = size;
for (y = 0; y < size; y++)
hsh->array[y] = NULL;
return (hsh);
}
