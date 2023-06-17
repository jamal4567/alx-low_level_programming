#include <stdio.h>
/**
 *main - entry point
 *print base 16
 *Return: 0
 */
int main(void)
{
	int i;
	int r;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (r = 97; r < 103; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
