#include "main.h"
/**
 *_strcmp - compares two strings.
 *@s1:string1
 *@s2:string2
 *Return: result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
