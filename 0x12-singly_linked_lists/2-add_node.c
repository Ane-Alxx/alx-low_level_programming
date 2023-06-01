#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - add_node function
* @head: pointy thingy
* @str: nString
*
* Return: addy or null, success or fail
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *w;
	unsigned int lenny = 0;

	while (str[lenny])
	{
		lenny++;
	}
	w = malloc(sizeof(list_t));
	if (!w)
	{
		return (NULL);
	}
	w->str = strdup(str);
	w->lenny = lenny;
	w->next = (*head);
	(*head) = w;

	return (*head);
}
