#include "main.h"
#include <stdlib.h>
/**
 **str_concat -  concatenates two strings.
 *@s1: string
 *@s2: string
 *
 *Return: result
 *
 */
 char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, li;
	char *C;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	C = malloc(sizeof(char) * (i + j + 1));

	if (C == NULL)
	{
		free(C);
		return (NULL);
	}
	k = 0;
	while (k < i)
	{
		C[k] = s1[k];
		k++;
	}
	li = j;
	j = 0;
	while (j <= li)
	{
		C[k] = s2[j];
		k++;
		j++;
	}
	C[k] = '\0';
	return(C);

}
