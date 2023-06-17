#include <stdio.h>
/**
 *main - entry point
 *print combination of tow tow digit
 *Return: 0
 */
int main(void)
{
	int i;
	int r;

	for (i = 0; i < 100; i++)
	{
		for (r = 0; r < 100; r++)
		{
			if (i < r)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((r / 10) + 48);
				putchar((r % 10) + 48);
				if (i != 98 || r != 99)
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
