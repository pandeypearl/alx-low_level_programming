#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string (Success), NULL (Error)
 */

char *argstostr(int ac, char **av)
{
	int count = 0;
	int i;
	int j = 0;
	int k = 0;
	char *str = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
		{
			count + 1;
			k++;
		}
		count++;
		k = 0;
	}

	count++;
	str = malloc(count * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
		{
			str[j++] = av[i][k];
			k++;
		}
		str[j++] = '\n';
		k = 0;
	}

	str[j] = 0;

	return (str);
}
