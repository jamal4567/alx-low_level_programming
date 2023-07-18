#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - nitialize a variable
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *@d: struct dog
 *
 *****/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
