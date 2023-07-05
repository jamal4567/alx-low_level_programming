#include "main.h"
/**
 * _strlen_recursion - print the length
 *
 *@s: string
 *
 *Return: the length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
