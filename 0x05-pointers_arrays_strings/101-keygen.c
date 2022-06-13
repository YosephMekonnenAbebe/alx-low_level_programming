#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -starting of the program
 * Description: pass word
 *
 * Return: always 0 for succes
 */

int main(void)
{
	int a = 0;
	int b, sum;
	int pw[100];

	sum = 0;

	srand(time(NULL));

	while (a < 100)
	{
		pw[a] = rand() % 78;
		sum += (pw[a] + '0');
		putchar(pw[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
		a++;
	}

	return (0);
}


