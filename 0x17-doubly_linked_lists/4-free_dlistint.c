#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* free_dlistint - get this guy loose and free
* @head: start from here
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;
	dlistint_t *mxt;

	if (head)
	{
		cur = head;
		mxt = head->next;
		while (mxt)
		{
			free(cur);
			cur = mxt;
			mxt = mxt->next;
		}
		free(cur);
	}
}
