#include "hash_tables.h"
/**
 *hash_table_print -  function that prints a hash table.
 *
 *@ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *split;

	printf("{");
	split = "";
	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s%s': '%s'", split, node->key, node->value);
			split = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
