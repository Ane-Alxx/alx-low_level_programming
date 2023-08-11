#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete - function for del ht
* @ht: the table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *r, *next;
	unsigned long int x = 0;

	if ((*ht).size == 0 || !(*ht).array || !ht)
		return;
	for (; (*ht).size > x; x++)
	{
		if ((*ht).array[x] != NULL)
		{
			for (r = (*ht).array[x]; r != NULL; r = next)
			{
				next = (*r).next;
				free((*r).key);
				free((*r).value);
				free(r);
			}
		}
	}
	free((*ht).array);
	free(ht);
}
