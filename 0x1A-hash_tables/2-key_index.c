#include "hash_tables.h"

/**
* key_index - funtion for key index
* @key: our key
* @size: the size of ht
* Return: location of key value
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	x = hash_djb2(key) % size;
	return (x);
}
