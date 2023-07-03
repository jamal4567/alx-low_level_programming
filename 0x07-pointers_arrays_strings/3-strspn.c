#include "main.h"
/**
 *_strspn - gets the length of a prefix substring.
 *@s: character to print
 *@accept: character
 *Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
		i++;
	}
	return (i);
}
