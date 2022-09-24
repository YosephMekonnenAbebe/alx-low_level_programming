#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *yosephhead = ht;
	hash_node_t *yosephnode, *tmp;
	unsigned long int yosephi;

	for (yosephi = 0; yosephi < ht->size; yosephi++)
	{
		if (ht->array[yosephi] != NULL)
		{
			yosephnode = ht->array[yosephi];
			while (yosephnode != NULL)
			{
				tmp = yosephnode->next;
				free(yosephnode->key);
				free(yosephnode->value);
				free(yosephnode);
				yosephnode = tmp;
			}
		}
	}
	free(yosephhead->array);
	free(yosephhead);
}
