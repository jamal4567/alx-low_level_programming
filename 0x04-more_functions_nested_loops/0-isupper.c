#include <stdio.h>
/**
 *_isupper - checking for uppercase
 *@c:character
 *Return:1 if is uppercase
 *otherwise 0
 **/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
