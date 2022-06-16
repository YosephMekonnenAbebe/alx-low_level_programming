#include "main.h"

/**
 * rot13 - encoding
 * @s: inputed
 *
 * Return: addres
 */
char *rot13(char *s)
{
	int l, m;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (l = 0; *(s + l); l++)
	{
		for (m = 0; m < 52; m++)
		{
			if (a[m] == *(s + l))
			{
				*(s + l) = b[m];
				break;
			}
		}
	}
		return (s);
}
