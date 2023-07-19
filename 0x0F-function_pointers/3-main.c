#include "3-calc.h"
/**
 *main - Entry point
 *@argc: number og arguments
 *@argv: arguments
 *Return: 0 success
 */
int main(int argc, char **argv)
{
	int (*op)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);
	return (0);
}
