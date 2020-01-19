#include "hash_tables.h"
/**
* hash_djb2 - it's a hash function.
* @str: it's a string
* Return: value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int y;
while ((y = *str++))
hash = ((hash << 5) + hash) +y;
return (hash);
}
