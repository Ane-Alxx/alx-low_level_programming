#include "lists.h"

/**
* add_nodeint_end - function for add node int
* @head: first node pointer
* @n: content for each node
*
* Return: pointer or NULL, Success or Fail
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *container = *head;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (container->next)
		container = container->next;

	container->next = w;

	return (w);
}
