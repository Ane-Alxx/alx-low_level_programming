#include "hash_tables.h"

/**
* hash_table_create - function for hash table
*
* @size: how big the table
* Return: table or null, success or fail
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb = NULL;

	if (size == 0)
		return (NULL);
	tb = malloc(sizeof(hash_table_t));
	if (!tb)
		return (NULL);
	(*tb).size = size;
	(*tb).array = malloc(sizeof(hash_node_t *) * size);
	if (!(*tb).array)
	{
		free(tb);
		return (NULL);
	}
	return (tb);
}
