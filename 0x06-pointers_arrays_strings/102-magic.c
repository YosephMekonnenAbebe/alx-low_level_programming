#include <stdio.h>

int main(void)
{
	int m;
	int z[5];
	int *p;

	z[2] = 1024;
	p = &m;
	/*
	 * writere...
	 * Rmr:
	 * - yo a
	 * - yo p
	 * - on
	 * - yo
	 */
	p[5]=98;
	/* ...prints 98\n */
	printf("z[2] = %d\n", z[2]);
	return (0);
}
