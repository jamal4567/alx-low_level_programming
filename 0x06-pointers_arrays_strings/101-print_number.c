#include "main.h"
/**
 *print_number - that prints an integer.
 *
 *@n: integer
 *
 */
void print_number(int n)
{
	unsigned int n1, p;
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}
	p = n1;
	i = 1;
	while (p > 9)
	{
		p /= 10;
		i *= 10;
	}
	while (i >= 1)
	{
	_putchar(((n1 / i) % 10) + '0');
	i /= 10;
	}
}
