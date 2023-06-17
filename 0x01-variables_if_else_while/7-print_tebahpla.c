#include <stdio.h>
/**
 *main - entry point
 *revers lowercase alphabet
 *Return: 0
 */
int main(void)
{
	int alphabet = 122;

	while (alphabet >= 97)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
