#include "hash_tables.h"
/**
* hash_table_delete - function that delete a hash table
* @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *tp, *anc;
unsigned long int xt, y;
if (ht == NULL)
return;
if (ht->array == NULL)
{
free(ht);
return;
}
}
for (y = 0, xt = ht->size; y < sz)
{
tp = ht->array[y];
while (tp)
{
anc = tp;
tp = tp->next;
free(anc->key);
free(anc->value);
free(anc);
}
}
free(ht->array);
free(ht);
}
