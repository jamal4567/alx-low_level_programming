#include <stdio.h>
/**
 *main - entry point
 *
 *Return:0
 *
 */
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_half1, f1_half2, f2_half1, f2_half2;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);
		f1 = f2;
		f2 = sum;
	}
	f1_half1 = f1 / 10000000000;
	f2_half1 = f2 / 10000000000;
	f1_half2 = f1 % 10000000000;
	f2_half2 = f2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		half1 = f1_half1 + f2_half1;
		half2 = f1_half2 + f2_half2;
		if (f1_half2 + f2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");
		f1_half1 = f2_half1;
		f1_half2 = f2_half2;
		f2_half1 = half1;
		f2_half2 = half2;
	}
	printf("\n");
	return (0);
}
