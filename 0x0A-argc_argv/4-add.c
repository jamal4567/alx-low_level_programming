#include <stdio.h>
#include <stdlib.h>
/**
 *main - addition of positive number
 *
 *@argc: number of arguments
 *@argv:array of pointer
 *
 *Return: result
 */
int main(int argc, char **argv)
{
	int i, add = 0, dig;

	for (i = 1; i < argc; i++)
	{
		for (dig = 0; argv[i][dig] != '\0'; dig++)
		{
			if (argv[i][dig] < 48 || argv[i][dig] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
