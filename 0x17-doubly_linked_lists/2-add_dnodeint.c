#include "lists.h"
/**
 **add_dnodeint - adds a new node at the beginning of a list.
 *@head: pointer
 *@n: the value
 *Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}

	h = *head;
	new_node->next = h;
	h->prev = new_node;
	*head = new_node;

	return (*head);
}
