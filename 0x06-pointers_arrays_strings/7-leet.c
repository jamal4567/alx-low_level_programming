#include "main.h"
/**
 **leet - encodes a string into 1337.
 *@s:string
 *
 *Return: result s
 */
char *leet(char *s)
{
	int i, j;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j <= 9)
		{
			if (a[j] == s[i])
				s[i] =  b[j];
			j++;
		}
		i++;
	}
	return (s);
}
