#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int yosephhash;
	int yosephc;

	yosephhash = 5381;
	while ((yosephc = *str++))
	{
		yosephhash = ((yosephhash << 5) + yosephhash) + yosephc; /* yosephhash * 33 + yosephc */
	}
	return (yosephhash);
}
