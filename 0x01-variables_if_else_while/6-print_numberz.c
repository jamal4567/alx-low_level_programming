#include <stdio.h>
/**
 *main - entry point
 *print digit of base 10
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
}

