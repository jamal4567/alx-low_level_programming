#include "lists.h"
/**
 **get_dnodeint_at_index - returns the nth node of a linked list
 *
 *@head: pointer
 *@index: index of the node, starting from 0
 *
 *Return:  returns the nth node or Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	i = 0;
	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
