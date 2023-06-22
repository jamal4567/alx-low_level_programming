#include <stdio.h>
/**
 *main - largest prime factor of the number
 *
 *Return:0
 */
int main(void)
{
	long int i;
	long int n = 612852475143;
	long int lg = 0;

	while (lg % 2 == 0)
	{
		lg = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			lg = i;
			n = n / i;
		}
	}
	if (n > 2)
		lg = n;
	printf("largest prime factor is :%ld\n", lg);
	return (0);
}
