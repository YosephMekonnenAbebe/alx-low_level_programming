#include<stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -start point
 * Description: sum
 * Return: o means succes
 */
int main (void)
{
	int i = 0;
	int sum = 0;
	
	char c;

	for (i = 0; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	sum =sum + i;
	}
	}
	c = (((sum % 10) + ((10 * sum) / 10)) + '0');
	_putchar(c); 
	_putchar('\n');
	
	return (0);
}
