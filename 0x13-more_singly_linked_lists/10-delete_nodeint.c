#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index ,
 *,index of a listint_t linked list.
 *@head:pointer
 *@index:node that should be deleted
 *Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *next;
	listint_t *current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!current && !(current->next))
			return (-1);
		current = current->next;
	}

	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
