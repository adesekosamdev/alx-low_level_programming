#include "hash_tables.h"

/**
* key_index - gives you the idx of a key
* @key: key
* @size: array size
* Return: array idx
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;
	unsigned long int hsh;

	hsh = hash_djb2(key);
	idx = hsh % size;
	return (idx);
}
