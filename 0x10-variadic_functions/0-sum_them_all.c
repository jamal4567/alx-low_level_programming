#include "variadic_functions.h"
/**
 *sum_them_all -  sum of all its parameters.
 *@n: number of integer
 *
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arg, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (sum);

}
