#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */

int main(void)
{
	char *yosephs;
	unsigned long int yosephhash_table_array_size;

	yosephhash_table_array_size = 1024;
	yosephs = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)yosephs));
	printf("%lu\n", key_index((unsigned char *)yosephs, yosephhash_table_array_size));
	yosephs = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *)yosephs));
	printf("%lu\n", key_index((unsigned char *)yosephs, yosephhash_table_array_size));
	yosephs = "98";
	printf("%lu\n", hash_djb2((unsigned char *)yosephs));
	printf("%lu\n", key_index((unsigned char *)yosephs, yosephhash_table_array_size));  
	return (EXIT_SUCCESS);
}
