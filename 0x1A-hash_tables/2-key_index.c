#include "hash_tables.h"
/**
* key_index - function that gives the index of a key
* @key: it's a key of value
* @size: it's size of array
* Return: index where key/value pair should be stored in array of hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
