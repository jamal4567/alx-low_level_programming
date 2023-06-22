#include <stdio.h>
#include <math.h>
/**
 *main - largest prime factor of the number
 *
 *Return:0
 */
int main(void)
{
	long int i;
	long int n;
	long int lg;

	n = 612852475143;
	lg = -1;
	while (lg % 2 == 0)
	{
		lg = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
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
