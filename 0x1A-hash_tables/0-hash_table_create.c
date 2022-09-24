#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of hash table
 *
 * Return: returns the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/**
	 * Create a pointer and allocate a memory to the hash table nodes
	 * Validate the table and assign its size
	 * Traverse the table and set its initial value to null
	 */
	hash_table_t *yosephht;
	unsigned long int yosephi;

	yosephht = malloc(sizeof(hash_table_t));
	if (yosephht == NULL)
	{
		return (NULL);
	}
	yosephht->size = size;
	yosephht->array = malloc(sizeof(hash_table_t *) * size);
	if (yosephht->array == NULL)
	{
		return (NULL);
	}
	for (yosephi = 0; yosephi < size; yosephi++)
	{
		yosephht->array[yosephi] = NULL;
	}
	return (yosephht);
}
