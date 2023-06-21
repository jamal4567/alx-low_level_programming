#include <stdio.h>
/**
 *main - entry point
 *Return:0
 *
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, fsum;
	float total_sum;

	while (1)
	{
		fsum = f1 + f2;
		if (fsum > 4000000)
			break;
		if ((fsum % 2) == 0)
			total_sum += fsum;
		f1 = f2;
		f2 = fsum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
