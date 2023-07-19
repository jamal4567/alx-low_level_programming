#include "3-calc.h"
/**
 *main - Entry point
 *@argc: number og arguments
 *@argv: arguments
 *Return: 0 success
 */
int main(int argc, char **argv)
{
	int (*operator)(int, int);
	int calc, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = operator(num1, num2);

	printf("%d\n", calc);
	return (0);
}
