#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int yosephi, yosephb;
	size_t yosephlen, yosephadd;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char yosephp[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	yosephlen = strlen(argv[1]);
	yosephp[0] = l[(yosephlen ^ 59) & 63];
	for (yosephi = 0, yosephadd = 0; yosephi < yosephlen; yosephi++)
		yosephadd += argv[1][yosephi];
	yosephp[1] = l[(yosephadd ^ 79) & 63];
	for (yosephi = 0, yosephb = 1; yosephi < yosephlen; yosephi++)
		yosephb *= argv[1][yosephi];
	yosephp[2] = l[(yosephb ^ 85) & 63];
	for (yosephb = argv[1][0], yosephi = 0; yosephi < yosephlen; yosephi++)
		if ((char)yosephb <= argv[1][yosephi])
			yosephb = argv[1][yosephi];
	srand(yosephb ^ 14);
	yosephp[3] = l[rand() & 63];
	for (yosephb = 0, yosephi = 0; yosephi < yosephlen; yosephi++)
		yosephb += argv[1][yosephi] * argv[1][yosephi];
	yosephp[4] = l[(yosephb ^ 239) & 63];
	for (yosephb = 0, yosephi = 0; (char)yosephi < argv[1][0]; yosephi++)
		yosephb = rand();
	yosephp[5] = l[(yosephb ^ 229) & 63];
	printf("%s\n", yosephp);
	return (0);
}
