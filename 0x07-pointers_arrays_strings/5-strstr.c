#include "main.h"
#include <stddef.h>
/**
 **_strstr - locates a substring.
 *@haystack: the string
 *@needle: the substring
 *
 *Return: pointer to the beginning of the located substring
 * ,or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
