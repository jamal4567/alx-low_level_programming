#include "lists.h"
/**
 **add_dnodeint_end - adds a new node at the end of a list
 *@head: pointer
 *@n: the value
 *Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	h = *head;
	while (h->next)
		h = h->next;
	new_node->prev = h;
	h->next = new_node;

	return (new_node);
}
