#include "main.h"
/**
 *flip_bits - number of bits you would need to flip
 *,to get from one number to another.
 *@n:number
 *@m:another number
 *Return: i number of bytes.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;


	n = n ^ m;

	for (i = 0; n; i++)
	{
		n &= (n - 1);
	}
	return (i);
}
