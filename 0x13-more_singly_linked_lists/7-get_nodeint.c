#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* get_nodeint_at_index - function for get node at index
* @head: top node
* @index: return node index
*
* Return: point or NULL, Success or fail
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int no = 0;
	listint_t *container = head;

	while (container && no < index)
	{
		container = container->next;
		no++;
	}

	return (container ? container : NULL);
}
