#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main -adds a number
 * @argc: Numbers of line comands
 * @argv: value
 * Return: 1 for succes
 */

int main(int argc, char *argv[])
{
int count;
int ad = 0;

if (argc < 1)
return (0);

for (count = 1; count < argc; count++)
{
if (!atoi(argv[count]))
{
printf("%s\n", "Error");
return (1);
}
ad += atoi(argv[count]);
}
printf("%d\n", ad);

return (0);
}
