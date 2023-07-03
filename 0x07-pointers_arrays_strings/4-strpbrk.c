#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - searches a string
 *for any of a set of bytes.
 *@s: the string
 *@accept: any of the bytes in the string
 *
 *Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
