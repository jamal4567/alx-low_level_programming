#include "lists.h"
/**
 **add_nodeint - adds a new node at the beginning of a listint_t list.
 *@head: first node address
 *@n: integer
 *Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
