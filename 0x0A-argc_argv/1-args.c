#include "main.h"
#include <stdio.h>
/**
 * main - displays the no of passed args
 * @argc: Number
 * @argv: Array of names
 * Return: 0 is a succes
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
int m = 0;
while (m < argc)
{
m++;
}
printf("%d\n", m - 1);
return (0);
}
