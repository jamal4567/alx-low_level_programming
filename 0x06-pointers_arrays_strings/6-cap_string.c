#include "main.h"
/**
 **cap_string - capitalizes all words of a string.
 *
 *@str: string
 *
 *Return: result
 */
char *cap_string(char *str)
{
	int i, j;
	char sw[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		j = 0;
		while (j < 13)
		{
			if (str[i] == sw[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}
