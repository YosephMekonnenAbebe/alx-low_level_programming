#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *yosephht;

    yosephht = hash_table_create(1024);
    printf("%p\n", (void *)yosephht);
    return (EXIT_SUCCESS);
}