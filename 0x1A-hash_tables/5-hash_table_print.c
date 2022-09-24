#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *yosephnode;
	unsigned long int yosephi;
	unsigned char yosephcomma_flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (yosephi = 0; yosephi < ht->size; yosephi++)
	{
		if (ht->array[yosephi] != NULL)
		{
			if (yosephcomma_flag == 1)
			{
				printf(", ");
			}
			yosephnode = ht->array[yosephi];
			while (yosephnode != NULL)
			{
				printf("'%s': '%s'", yosephnode->key, yosephnode->value);
				yosephnode = yosephnode->next;
				if (yosephnode != NULL)
					printf(", ");
			}
			yosephcomma_flag = 1;
		}
	}
	printf("}\n");
}
