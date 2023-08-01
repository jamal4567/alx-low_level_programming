#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list.
 *@head: pointer
 *Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	data = tmp->n;
	free(tmp);

	return (data);
}
