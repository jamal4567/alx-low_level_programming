#include <stdio.h>
/**
 *_isupper - checking for uppercase
 *@c:character
 *Return:1 if is uppercase
 *otherwise 0
 **/
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
	return (c);
}
