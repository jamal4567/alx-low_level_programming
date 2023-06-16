#include <stdio.h>
/**
 *main - entry point
 *alphabet in lowercase without eq
 *Return: 0 Always (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet == 'e' || alphabet == 'q')
	{
		continue;
		alphabet++;
	}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
