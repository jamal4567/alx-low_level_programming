#include "main.h"
/**
 *factorial - print factorial number
 *@n: number to factory
 *
 *Return: the result
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return 
		n = n * factorial(n - 1);
	_putchar('\n');
}
