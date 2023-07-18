#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 *print_dog - prints struct dog
 *
 *@d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name:%s\n", (*d).name);
		if ((*d).name == 0)
			printf("Name: (nil)\n");
		else
			printf("age:%f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("owner: (nil)\n");
		else
		printf("owner:%s\n", (*d).owner);
	}
}
