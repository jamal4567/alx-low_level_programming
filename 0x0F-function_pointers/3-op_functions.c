#include "3-calc.h"

/**
 *op_add - addition of tow number
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substract tow number
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multipy tow number
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divide tow number
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - remainder of the division
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
