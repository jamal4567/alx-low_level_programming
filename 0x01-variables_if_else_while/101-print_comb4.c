#include <stdio.h>
/**
 *main - entry point
 *print combination of three diigit
 *Return: 0
 */
int main(void)
{
	int l;
	int i;
	int r;

	for (i = 48; i < 58; i++)
	{
		for (r = 49; r < 58; r++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > r && r > i)
				{
					putchar(i);
					putchar(r);
					putchar(l);
					if (i != 55 || r != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
