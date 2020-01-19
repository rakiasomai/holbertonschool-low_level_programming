#include "hash_tables.h"
/**
* hash_djb2 - it's a hash function.
* @str: it's a string
* Return: value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hsh;
int y;
hsh = 5381;
while ((y = *str++))
hsh = ((hsh << 5) + hsh) + y;
return (hsh);
}
