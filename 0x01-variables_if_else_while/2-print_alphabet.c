#include <stdio.h>
/**
 *main - Entry point
 *tape alphabet in lower case
 *Return: 0 Always (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
