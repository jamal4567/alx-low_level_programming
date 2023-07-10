#include "main.h"
#include <stdlib.h>
/**
 **_strdup -  pointer to a newly allocated space
 *
 *@str: string
 *
 *Return: result
 */
char *_strdup(char *str)
{
	int i, j;
	char *Nstr;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (str == NULL)
		return (NULL);
	Nstr = malloc(sizeof(char) * (i + 1));
	if (Nstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		Nstr[j] = str[j];
	}
	return (Nstr);
}
