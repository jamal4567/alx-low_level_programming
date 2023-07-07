#include <stdio.h>
/**
 *main - print the name
 *
 *@argc: counter
 *@argv: pointer
 *
 *Return: 0 success.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
