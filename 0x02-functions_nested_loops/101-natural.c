#include<stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -start point
 * Description: sum
 * Return: o means succes
 */
int main(void)
{
	int i, sum = 0;
	
	for (i = 0; i < 1024; i++)
	{
	if ((i % 3) == 0 || (i % 5) == 0)
	{
	sum = sum + i;
	}
	}
	printf("%d\n", sum);

	return (0);
}
