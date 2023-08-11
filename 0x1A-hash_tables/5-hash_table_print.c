#include "hash_tables.h"

/**
* hash_table_print - function to print ht
* @ht: ou hash table
**/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tp;
	int lim = 98;
	unsigned long int x;

	if (ht == NULL || (*ht).array == NULL)
	{
		return;
	}
	printf("{");
	for (x = 0; (*ht).size > x; x++)
	{
		tp = (*ht).array[x];
		while (tp != NULL)
		{
			if (lim == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", (*tp).key, (*tp).value);
			tp = (*tp).next;
			lim = 1;
		}
	}
	printf("}\n");
}
