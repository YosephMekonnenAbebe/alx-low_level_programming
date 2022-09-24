#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0, Otherwise - 1.
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *yosephnew;
	char *yosephvalue_copy;
	unsigned long int yosephindex, yosephi;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	yosephvalue_copy = strdup(value);
	if (yosephvalue_copy == NULL)
		return (0);

	yosephindex = key_index((const unsigned char *)key, ht->size);
	for (yosephi = yosephindex; ht->array[yosephi]; yosephi++)
	{
		if (strcmp(ht->array[yosephi]->key, key) == 0)
		{
			free(ht->array[yosephi]->value);
			ht->array[yosephi]->value = yosephvalue_copy;
			return (1);
		}
	}

	yosephnew = malloc(sizeof(hash_node_t));
	if (yosephnew == NULL)
		free(yosephvalue_copy);
	return (0);

	yosephnew->key = strdup(key);
	if (yosephnew->key == NULL)
		free(yosephnew);
	return (0);

	yosephnew->value = yosephvalue_copy;
	yosephnew->next = ht->array[yosephindex];
	ht->array[yosephindex] = yosephnew;

	return (1);
}
