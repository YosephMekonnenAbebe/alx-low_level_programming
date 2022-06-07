#include "main.h"
/**
 * main -Starting point
 *
 * Description : character display
 * Return: 0 means succes
 */
void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z') 
	{
	print_alphabet(al);
	++al;
	}
	print_alphabet('\n');
	
	return (0);
}
