#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* free_listint_safe - function for linked
* @h: point to top
*
* Return: free count
*/
size_t free_listint_safe(listint_t **h)
{
	size_t free_count = 0;
	int f;
	listint_t *container;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			container = (*h)->next;
			free(*h);
			*h = container;
			free_count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			free_count++;
			break;
		}
	}

	*h = NULL;

	return (free_count);
}
