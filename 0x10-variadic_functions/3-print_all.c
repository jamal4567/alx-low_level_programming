#include "variadic_functions.h"
/**
 *print_all - prints anything.
 *
 *@format: list of types of arguments
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	const char *separator = "";
	char *str;

	va_start(args, format);

	if (format)
	{
		i = 0;
		while (format[i])
		{
			switch (format[i])
			{
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s%s", separator, str);
				else
					printf("(nil)");
				break;
			default:
				i++;
				continue;
			}
		separator = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(args);
}
