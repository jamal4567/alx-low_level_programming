#include "main.h"
#include <stdlib.h>
/**
 **array_range - creates an array of integers.
 *@min: min value
 *@max: max value
 *Return: array a or NULL
 */
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min) + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
