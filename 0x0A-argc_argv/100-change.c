#include <stdio.h>
#include <stdlib.h>
/**
 *main - minimun number
 *
 *@argc: number of arguments
 *@argv: array of pointer
 *
 *Return: rasult
 */
int main(int argc, char **argv)
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (cents = atoi(argv[1]); cents > 0; coins++)
	{
		if (cents - 25 >= 0)
			cents -= 25;
		else if (cents - 10 >= 0)
			cents -= 10;
		else if (cents - 5 >= 0)
			cents -= 5;
		else if (cents - 2 >= 0)
			cents -= 2;
		else if (cents - 1 >= 0)
			cents -= 1;
	}
	printf("%d\n", coins);
	return (0);
}
