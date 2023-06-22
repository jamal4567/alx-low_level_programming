#include <stdio.h>
/**
 *_isdigit - check fo digit
 *@c:represent digit
 *Return:1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
