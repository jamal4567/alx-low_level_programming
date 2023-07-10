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

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	Nstr = (char *)malloc(sizeof(char) * (i + 1));

	if (Nstr == NULL)
		return (NULL);

	j = 0;
	while (j <= i)
	{
		(Nstr[j] = str[j]);
		j++;
	}
	return (Nstr);
}
