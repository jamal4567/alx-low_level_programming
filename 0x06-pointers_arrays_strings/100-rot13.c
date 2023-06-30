#include "main.h"
/**
 **rot13 - encodes a string
 *
 *@s: string
 *
 *Return: result
 */
char *rot13(char *s)
{
	int i, j;
	char I[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char O[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (I[j] != '\0')
		{
			if (s[i] == I[j])
			{
				s[i] = O[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
