#include "main.h"

/**
 *_primes - check for prime number
 *@x:integer
 *@i:iterator parametre
 *Return: result
 */
int _primes(int x, int i)
{
	if (i == 1)
		return (1);
	if (x % i == 0 && i > 0)
		return (0);
	return
		(_primes(x, i - 1));
}

/**
 *is_prime_number - print prime number
 *@n: number to print
 *Return:  1 if the input integer is a prime number
 *, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (_primes(n, n - 1));
	else
		return (0);
}
