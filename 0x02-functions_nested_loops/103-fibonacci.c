#include <stdio.h>
/**
 * main -starting point
 * Description: fibo
 * Return 0: succes
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, f_sum;
	float t_sum;

	while (1)
	{
		f_sum = f1 + f2;
		if (f_sum > 4000000)
			break;

		if((f_sum % 2) == 0)
			t_sum = t_sum + f_sum;

		f1 = f2;
		f2 = f_sum;
	}
	printf("%.0f\n", t_sum);

	return (0);
}
