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
    hash_table_print(yosephht);
    hash_table_set(yosephht, "c", "fun");
    hash_table_set(yosephht, "python", "awesome");
    hash_table_set(yosephht, "Jennie", "and Jay love asm");
    hash_table_set(yosephht, "N", "queens");
    hash_table_set(yosephht, "Asterix", "Obelix");
    hash_table_set(yosephht, "Betty", "Holberton");
    hash_table_set(yosephht, "98", "Battery Street");
    hash_table_print(yosephht);
    return (EXIT_SUCCESS);
}