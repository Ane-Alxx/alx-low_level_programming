#include "hash_tables.h"

/**
* hash_table_set - function to add to
* @ht: our hash table
* @key: hash key
* @value: self explantroy
* Return: 1 or 0, on success or fail
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x;
	hash_node_t *w = NULL, *tp = NULL;

	if (key == NULL || key == '\0' || value == NULL || ht == NULL)
	{
		return (0);
	}
	x = key_index((const unsigned char *)key, (*ht).size);
	tp = (*ht).array[x];
	while (tp != NULL)
	{
		if (strcmp((*tp).key, key) == 0)
		{
			free((*tp).value);
			(*tp).value = strdup(value);
			return (1);
		}
		tp = (*tp).next;
	}
	w = malloc(sizeof(hash_node_t));
	if (!w)
	{
		return (0);
	}
	(*w).key = strdup(key);
	if (!(*w).key)
	{
		free(w);
		return (0);
	}
	(*w).value = strdup(value);
	if (!(*w).value)
	{
		free((*w).key);
		free(w);
		return (0);
	}
	(*w).next = (*ht).array[x];
	(*ht).array[x] = w;
	return (1);
}
