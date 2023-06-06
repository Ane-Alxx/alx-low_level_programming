#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* find_listint_loop - function for
* @head: list to look for
*
* Return: loop start addy or NULL, success or fail
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *w = head;
	listint_t *t = head;

	if (!head)
		return (NULL);

	while (w && t && t->next)
	{
		t = t->next->next;
		w = w->next;
		if (t == w)
		{
			w = head;
			while (w != t)
			{
				w = w->next;
				t = t->next;
			}
			return (t);
		}
	}

	return (NULL);
}
