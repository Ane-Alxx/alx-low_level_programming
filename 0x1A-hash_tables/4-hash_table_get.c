#include "hash_tables.h"

/**
* hash_table_get - functions for hashtable
* @ht: the hash table
* @key: our key
* Return: a value or null, success or fail
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x = 0;
	hash_node_t *d;

	if (key == '\0' || key == NULL || ht == NULL)
		return (NULL);
	x = key_index((unsigned char *)key, (*ht).size);
	d = (*ht).array[x];
	while (Head != NULL)
	{
		if (strcmp((*d).key, key) == 0)
			return ((*d).value);
		d = (*d).next;
	}
	return (NULL);
}
