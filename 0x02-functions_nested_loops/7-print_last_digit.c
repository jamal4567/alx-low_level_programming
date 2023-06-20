#include "main.h"
/**
 *print_last_digit - entry point
 *@n:integer
 *Return:p success
 *
 */
int print_last_digit(int n)
{
	int p;

	p = n % 10;
	if (p < 0)
	{
		_putchar(-p + '0');
		return (-p);
	}
	else
	{
		_putchar(p + '0');
		return (p);
	}
}
