#include "main.h"

/**
 *_sqrt - chaeck for natural square root
 *
 *@n:integer
 *
 *@i:parametre
 *
 *Return: result
 */

int _sqrt(int n, int i)
{
	if (i *i > n)
		return (-1);
	if (i *i == n)
		return (i);
	return
		(_sqrt(n, i + 1));
}

/**
 *_sqrt_recursion - natural square root
 *@n: integer
 *Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return
		(_sqrt(n, 0));
}
