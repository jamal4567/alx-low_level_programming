#include "variadic_functions.h"
/**
 *print_strings - prints strings, followed by a new line.
 *@separator: string to be printed between the strings
 *@n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		printf("%s", s);
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
