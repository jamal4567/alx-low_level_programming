#include "main.h"
#include <stdlib.h>
/********/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 1;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			j++;
			k++;
		}
		s[k] = '\n';
		k++;
		i++;
	}
	s[k] = '\0';
	return (s);
}
