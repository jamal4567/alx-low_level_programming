#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array of elements
 *@size: number of elements
 *@cmp: pointer to function
 *
 *Return: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL)
	{
		return (-1);
	}
	if (array)
		while (i < size)
		{
			if (cmp(array[i]))
			return (i);
			i++;
		}
	return (-1);
}
