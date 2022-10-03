#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * and initialises it with a specific char
 * @size: size of the array to create
 * @c: char to intialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */

char create_array(unsigned in size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return NULL;

	p = (char *) malloc(sizeof(char) * size);

	if (p = NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
