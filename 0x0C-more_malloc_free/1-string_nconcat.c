#include "main.h"
#include <stdlib.h>
/**
 **string_nconcat - concatenates two strings.
 *@s1:string1
 *@s2:string2
 *@n:number of byts of s2
 *
 *Return: s3 if success or NULL if fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, k;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		n = j;
	s3 = malloc(sizeof(char) * i + n + 1);
	k = 0;
	while (k < i)
	{
		s3[k] = s1[k];
		k++;
	}
	while (k < (i + n))
	{
		s3[k] = s2[k - i];
		k++;
	}
	if (s3 == NULL)
		return (NULL);
	return (s3);



}
