#include <stdlib.h>
#include "lists.h"

/**
* free_list - function for freeing lists
* @head: free this list woo
*/
void free_list(list_t *head)
{
	list_t *mpt;

	while (head)
	{
		mpt = head->next;
		free(head->str);
		free(head);
		head = mpt;
	}
}
