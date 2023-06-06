#include "lists.h"

/**
* add_nodeint - function for add node int
* @head: first node
* @n: content for nodes
*
* Return: new node pointer or NULL, success or fail
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = *head;
	*head = w;

	return (w);
}
