#include "main.h"
/**
 **_strcpy - copies the string
 *@dest:pointer
 *@src:pinter
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	for (length = 0; src[length] != '\0'; length++)
	{
	}
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
