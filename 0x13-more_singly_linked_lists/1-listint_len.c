#include "lists.h"

/**
*listint_len - function for listing length
*@h: list to go over
*
*Return: node count, success
*/
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
