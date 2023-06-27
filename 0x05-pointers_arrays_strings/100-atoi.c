#include "main.h"
/**
 *_atoi - convert string to integer
 *@s:string
 *Return:the converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
			sign *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
			result = (result * 10) + (s[0] - '0') * sign;
		else if (result)
			break;
		s++;
	}
	return (result);
}
