#include "main.h"
/**
 *print_rev - print string in reverse
 *
 *@s: string to print
 */
void print_rev(char *s)
{
	int i;
	int length;

	i = 0;
	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
