#include "main.h"
#include <stdio.h>
/**
 * main -displays argument it receives
 * @argc: arguments to be given
 * @argv: pointer argument
 * Return: succes
 */
int main(int argc, char *argv[])
{
	int m;

	for (m=0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
		m++;
	}
	return (0);
}
