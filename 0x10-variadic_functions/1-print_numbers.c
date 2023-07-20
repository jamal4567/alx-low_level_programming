#include "variadic_functions.h"
/**
 *print_numbers - prints numbers, followed by a new line.
 *@separator: string to be printed between numbers
 *@n:  number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	int p;

	va_start(arg, n);
	i = 0;
	while (i < n)
	{
		p = va_arg(arg, int);
		printf("%d", p);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arg);
}
