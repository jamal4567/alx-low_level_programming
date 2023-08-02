#include "lists.h"
/**
 **insert_nodeint_at_index - inserts a new node at a given position.
 *@head:pointer
 *@idx:node should be added
 *@n:inserts into node
 *Return:address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *h, *tmp;

	h = *head;
	if (idx)
	{
		for (; i < idx - 1 && h != NULL; i++)
			h = h->next;
		if (!h)
			return (NULL);
	}
	if (*head == NULL && idx != 0)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n =  n;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	tmp->next = h->next;
	h->next = tmp;

	return (tmp);
}
