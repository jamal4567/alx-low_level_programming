#include "function_pointers.h"
/**
 *array_iterator - executes a function given as a parameter
 *@array: array
 *@size: size of the array
 *@action: pointer to function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
