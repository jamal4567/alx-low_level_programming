#include "main.h"
/**
 **infinite_add - adds two numbers.
 *@n1: number_1
 *@n2: number_2
 *@r: buffer
 *@size_r: buffer size
 *Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	int a, b, c, s, d = 0;

	for (i = 0; n1[i] != '\0'; i++)
	{
	}
	for (j = 0; n2[j] != '\0'; j++)
	{
	}
	if (j < i)
		a = i;
	else
		a = j;
	if (size_r <= a + 1)
	{
		return (0);
	}
	r[a] = '\0';
	i--;
	j--;
	size_r--;
	b = n1[i] - '0';
	c = n2[j] - '0';
	while (a >= 0)
	{
		s =b + c + d;
		if (s >= 10)
		{
			d = s / 10;
		}
		else
			d = 0;
		if (s > 0)
			r[a] = (s % 10) + '0';
		else
			r[a] = '0';
		if (i > 0)
		{
			i--;
			b = n1[i] - '0';
		}
		else
			b = 0;
		if (j > 0)
		{
			j--;
			c = n2[j] - '0';
		}
		else
			c = 0;
		a--;
		size_r--;
	}
	if (*r == '0')
		return (r + 1);
	else
		return (r);
}
