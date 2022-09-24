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
    char *yosephs;

    yosephs = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)yosephs));
    yosephs = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)yosephs));
    yosephs = "98";
    printf("%lu\n", hash_djb2((unsigned char *)yosephs));
    return (EXIT_SUCCESS);
}