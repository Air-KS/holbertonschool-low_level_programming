#include "hash_tables.h"

/**
* key_index - Calculate the index of a key in a hash table.
* @key: Pointer to an array of characters representing the key.
* @size: Size of the hash table.
*
* Return: hash_djb2
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
