#include "main.h"
/**
 *_print_rev_recursion - print in revers
 *
 *@s: stinge
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
