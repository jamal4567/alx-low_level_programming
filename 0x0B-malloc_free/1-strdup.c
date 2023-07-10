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
	unsigned int i, j;
	char *Nstr;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (str == NULL)
		return (NULL);

	Nstr = (char *)malloc(sizeof(char) * (i + 1));

	if (Nstr == NULL)
		return (NULL);

	j = 0;
	while ((Nstr[j] = str[j]) != '\0')
	{
		j++;
	}
	return (Nstr);
}
