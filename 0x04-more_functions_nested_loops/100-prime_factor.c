#include <stdio.h>
/**
 *main - largest prime factor of the number
 *
 *
 */
int main(void)
{
	long int a = 612852475143;
	long int i;

	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			a = a / i;
		}
	}
	printf("largest prime factor is :%ld\n", i);
	return (0);
}
