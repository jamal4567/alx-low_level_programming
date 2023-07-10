#include "main.h"
#include <stdlib.h>
/**
 **create_array - creates an array of chars
 *and initializes it with a specific char.
 *@size: size of array
 *@c: char
 *Return:  pointer to the array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(c) * size);

	if (ptr == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
