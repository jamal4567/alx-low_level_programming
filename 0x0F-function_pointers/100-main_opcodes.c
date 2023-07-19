#include <stdio.h>
#include <stdlib.h>
/**
 *main -  prints the opcodes,
 *of its own main function
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	int bytes, i = 0;
	char *a;

	if (argc == 2)
	{
		bytes = atoi(argv[1]);
		if (bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		a = (char *)main;
		while (i < bytes)
		{
			if (i == bytes - 1)
			{
				printf("%02hhx\n", a[i]);
				break;
			}
			printf("%02hhx ", a[i]);
			i++;
		}
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
