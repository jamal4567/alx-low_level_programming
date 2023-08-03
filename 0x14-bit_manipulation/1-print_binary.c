#include "main.h"
/**
 *print_binary - prints the binary representation of a number.
 *@n: number to print
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int have;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	have = n;
	while ((have >>= 1) > 0)
		i++;

	while (i >= 0)
	{
		if ((n >> i) & 1)
			_putchar(49);
		else
			_putchar(48);
		i--;
	}
}
