#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x, t, a = 0, s = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (t = 0; av[x][t]; t++)
			s++;
	}
	s += ac;

	str = malloc(sizeof(char) * s + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (t = 0; av[x][t]; t++)
	{
		str[a] = av[x][t];
		a++;
	}
	if (str[a] == '\0')
	{
		str[a++] = '\n';
	}
	}
	return (str);
}
