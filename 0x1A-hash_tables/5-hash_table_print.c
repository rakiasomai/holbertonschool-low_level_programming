#include "hash_tables.h"
/**
* hash_table_print - function that prints a hash table
* @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *tp;
unsigned long int y;
int rak;
if (ht == NULL)
return;
printf("{");
for (y = 0, rak = 0; y < ht->size; y++)
{
tp = ht->array[y];
if (tp != NULL)
{
if (rak == 1)
printf(", ");
printf("'%s': '%s'", tp->key, tp->value);
while ((tp = tp->next) != NULL)
{
printf(", ");
printf("'%s': '%s'", tp->key, tp->value);
}
rak = 1;
}
}
printf("}\n");
}
