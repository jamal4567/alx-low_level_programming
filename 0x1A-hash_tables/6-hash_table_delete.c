#include "hash_tables.h"
/**
 *hash_table_delete - function that deletes a hash table.
 *
 *@ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while ((tmp = node) != NULL)
		{
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array[i]);
	free(ht);
}
