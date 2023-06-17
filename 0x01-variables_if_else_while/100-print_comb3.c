#include <stdio.h>
/**
 *main - entry point
 *print combination of tow numbers
 *Return: 0
 */
int main(void)
{
	int i;
	int r;

	for (i = 48; i <= 56; i++)
	{
		for (r = 49; r <= 57; r++)
		{
			if (r > i)
			{
				putchar(i);
				putchar(r);
				if (i != 56 || r != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
