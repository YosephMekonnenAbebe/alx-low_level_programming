#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: character desplay
 * Return: 0 means succes
 */
int main(void)
{
	int a;

	while (a <= 9)
	{
		putchar((a % 10) + '0');
		a++;
	}
	putchar("\n");

	return (0);
}
