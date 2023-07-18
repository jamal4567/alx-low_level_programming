#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free memmory
 *
 *@d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
