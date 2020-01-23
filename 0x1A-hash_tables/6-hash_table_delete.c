#include "hash_tables.h"
/**
* hash_table_delete - this is function that deletes a hash table.
* @ht : it's hash table
* Return : none
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int counter;
hash_node_t *current1;
hash_node_t *current2;
if (ht == NULL)
{
return;
}
counter = 0;
while (counter < ht->size)
{
current1 = ht->array[counter];
while (current1)
{
current2 = current1->next;
free(current1->key);
free(current1->value);
free(current1);
current1 = current2;
}
counter++;
}
free(ht->array);
free(ht);
}
