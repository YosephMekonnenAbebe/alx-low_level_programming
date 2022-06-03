#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -starting point
 *
 * Desription: modulo number
 * Return: 0 means succes
 */
int main(void)
{
	int n;
	int M;
	char string[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	M = n % 10;

	if (M > 5)
		printf("%s %d is %d and is greater than 5\n", string, n, M);
	else if (M == 0)
		printf("%s %d is %d and is 0\n", string, n, M);
	else if (M < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", string, n, M);

	return (0);
}
