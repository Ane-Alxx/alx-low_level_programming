#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* print_listint_safe - function for
* @head: point to top
* Return: node count
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t nod = 1;
	size_t ex = 0;
	const listint_t *t, *h;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

while (h)
	{
		if (t == h)
		{
			t = h;
			while (t != h)
			{
				nod++;
				t = t->next;
				h = h->next;
			}
			t = t->next;
			while (t != h)
			{
				nod++;
				t = t->next;
			}
		}

		t = t->next;
		h = (h->next)->next;
	}

	if (nod == 0)
	{
		for (; head != NULL; nod++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ex = 0; ex < nod; ex++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nod);
}
