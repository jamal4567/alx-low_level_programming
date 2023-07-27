#include "lists.h"
/**
 **add_node_end - adds a new node at the end of a list_t list.
 *@head:adrress of first node
 *@str:string to the new node
 *
 *Return: pointer to new node
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int length = 0;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);

	while (str[length])
		length++;

	new->len = length;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;

	return (*head);
}
