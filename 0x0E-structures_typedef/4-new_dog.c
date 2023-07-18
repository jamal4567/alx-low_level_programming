#include "dog.h"
#include <stdlib.h>
/**
 *_lenght - print lenght of string
 *
 *@s: string
 *
 *Return: lenght
 **/
int _lenght(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


/**
 *_cpy - copy string
 *@s: source
 *@d: destination
 *Return: result
 **/
char *_cpy(char *d, char *s)
{
	int i = 0, j = 0;

	while (s[j] != '\0')
		j++;

	while (i < j)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
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
	int i, j;

	i = _lenght(name);
	j = _lenght(owner);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	(*ndog).name = malloc(sizeof(char) * (i + 1));
	if ((*ndog).name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	(*ndog).owner = malloc(sizeof(char) * (j + 1));
	if ((*ndog).owner == NULL)
	{
		free(ndog);
		free((*ndog).name);
		return (NULL);
	}

	_cpy((*ndog).name, name);
	_cpy((*ndog).owner, owner);
	(*ndog).age = age;

	return (ndog);
}
