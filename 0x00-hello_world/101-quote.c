#include <stdio.h>

/**
 *
 *  main -the starting point of the program
 *
 *  Description: printing without fprint and puts
 *
 *  Return: prints 1 as ordered
 *
 */

int main(void)
{
	FILE * fp;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fp = fopen("file.txt", "w");
	fwrite(str, 2, sizeof(str), fp);
	fclose(fp);
	return (1);
}
