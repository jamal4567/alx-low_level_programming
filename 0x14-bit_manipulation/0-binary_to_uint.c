#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointer to string
 *Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int conver_num = 0;

	if (!b)
		return (0);

	while (b[len])
	{
		if (b[len] < 48 || b[len] > 49)
			return (0);
		conver_num = 2 * conver_num + (b[len] - 48);
		len++;
	}
	return (conver_num);
}
