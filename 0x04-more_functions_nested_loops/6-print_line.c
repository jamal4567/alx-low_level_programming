#include <stdio.h>
#include "main.h"
/**
 *print_line - print eache time lines
 *@n:number of time
 *
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
