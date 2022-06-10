#include "main.h"

/**
 * print_diagonal -  a function
 * @n: input number
 * Return: a diagonal
 * */
void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (co = 1; co <= n; co++)
	{
	for (sp = 1; sp < co; sp++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
