#include <stdio.h>
/**
 *main - number of arguments
 *@argc: 
 *argv: array of string
 *Return: 0 success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
