#include "lists.h"
/**
 **insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: pointer
 *@idx:  index of the list
 *@n: the value
 *
 *Return:  new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	head = *h;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	while (head)
	{
		if (i == idx - 1 && head->next == NULL)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		else if (idx - 1 == i)
		{
			new_node->next = head->next;
			new_node->prev = head;
			head->next->prev = new_node;
			head->next = new_node;
			return (new_node);
		}
		i++;
		head = head->next;
	}
	free(new_node);
	return (NULL);
}
