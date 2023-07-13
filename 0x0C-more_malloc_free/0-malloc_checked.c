#include "main.h"
#include <stdlib.h>
/**
 **malloc_checked - allocate memory
 *@b:bytes to allocates
 *Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
