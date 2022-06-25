#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main -adds a number
 * @argc: Numbers of line comands
 * @argv: value
 * Return: 1 for succes
 */

int main(int argc, char *argv[])
{
	int count = 0;
	add = 0;

	if (argc < 1)
		return (0);
	while (count < argc)
	{
		if (!atoi(argv[count]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
		count++;
	}
	printf("%d\n", add);

	return (0);
}
