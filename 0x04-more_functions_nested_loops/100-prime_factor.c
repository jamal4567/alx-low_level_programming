#include <stdio.h>
#include "main.h"
/**
 *main - largest prime factor of the number
 *
 *Return:0
 */
int main(void)
{
	long int n;
	long int lg;

	n = 612852475143;

	for (lg = 2; lg <= n; lg++)
	{
		if (n % lg == 0)
		{
			n  /= lg;
			lg--;
		}
	}

	printf("largest prime factor is :%ld\n", lg);
	return (0);
}
