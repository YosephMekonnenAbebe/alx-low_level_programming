#include <stdio.h>

int main(void)
{
	int m;
	int z[5];
	int *o;

	z[2] = 1024;
	o = &m;
	/*
	 * writere...
	 * Rmr:
	 * - yo a
	 * - yo p
	 * - on
	 * - yo
	 */
	o[5] = 98;
	/* ...prints 98\n */
	printf("z[2] = %d\n", z[2]);
	return (0);
}
