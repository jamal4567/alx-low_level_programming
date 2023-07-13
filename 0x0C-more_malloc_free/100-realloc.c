#include "main.h"
#include <stdlib.h>
/**
 **_realloc - reallocates a memory block
 *@ptr:pointer
 *@old_size:olde size of allocated memory
 *@new_size:new size of allocated memory
 *
 *Return: result new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
