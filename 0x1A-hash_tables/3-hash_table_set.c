#include "hash_tables.h"
#include <string.h>
/**
 *hash_table_set - function that adds an element to the hash table.
 *
 *@ht: the hash table.
 *@key: key of the new element.
 *@value: value of the new element.
 *
 *Return: 1 if is success, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_h_node;
	unsigned long index;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);


	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

	new_h_node = malloc(sizeof(hash_node_t));
	if (new_h_node == NULL)
	{
		free(new_h_node);
		return (0);
	}

	new_h_node->key = strdup(key);
	new_h_node->value = strdup(value);
	new_h_node->next = ht->array[index];
	ht->array[index] = new_h_node;

	return (1);
}
