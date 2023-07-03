#include "main.h"
/**
 **_memcpy - copies memory area
 *@src: memory area to copy
 *@dest: memory area
 *@n: number of  bytes
 *Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
