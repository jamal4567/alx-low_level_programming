#include "dog.h"
#include <stdlib.h>
/**
 **new_dog - create new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *
 *Return: new_dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	(*ndog).name = name;
	(*ndog).age = age;
	(*ndog).owner = owner;
	return (ndog);
}
