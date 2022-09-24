#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/**
	 * Validate table and key;
	 */

	hash_node_t *yosephnode;
	unsigned long int yosephindex;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	yosephindex = key_index((const unsigned char *)key, ht->size);
	if (yosephindex >= ht->size)
	{
		return (NULL);
	}

	yosephnode = ht->array[yosephindex];
	while (yosephnode && strcmp(yosephnode->key, key) != 0)
	{
		yosephnode = yosephnode->next;
	}
	return ((yosephnode == NULL) ? NULL : yosephnode->value);
}
