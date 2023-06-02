#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - function to add node at end
* @head: pointy thingy
* @str: string_nody
*
* Return: Null or address, fail or success
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *w;
	list_t *p = *head;
	unsigned int n = 0;

	while (str[n])
		n++;

	w = malloc(sizeof(list_t));
	if (!w)
		return (NULL);

	w->str = strdup(str);
	w->n = n;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (p->next)
		p = p->next;

	p->next = w;

	return (w);
}
