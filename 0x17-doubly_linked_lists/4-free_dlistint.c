#include "lists.h"
/**
 *free_dlistint -  frees a dlistint_t list.
 *
 *@head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
