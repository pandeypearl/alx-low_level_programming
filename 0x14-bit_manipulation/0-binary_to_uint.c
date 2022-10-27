#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -converts binary number to unsigned int
 * @b: poining to string of 0 and 1 chars
 * Return: coverted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count;

		count++;
	}
	return (sum);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
