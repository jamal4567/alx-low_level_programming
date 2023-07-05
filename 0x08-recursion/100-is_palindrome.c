#include "main.h"
/**
 *_strlen - print the length
 *of string
 *
 *@s: string
 *
 *Return: the length.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 *_check - check fo character
 *
 *@s: string
 *@i: iterator parametre
 *@len: the length
 *
 *Return:result
 */
int _check(char *s, int i, int len)
{
	if (s[i] != s[len - 1])
		return (0);
	if (i >= len)
		return (1);
	return (_check(s, i + 1, len - 1));
}
/**
 *is_palindrome - print palindrome
 *
 *@s: string
 *
 *Return: result
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_check(s, 0, _strlen(s)));
}
