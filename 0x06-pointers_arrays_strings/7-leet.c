#include "main.h"

/**
*leet - encodes a string in 1337
*@s: string to be encoded
*Return: the resulting string
*/

char *leet(char *s)
{
	char *m = "aeotl";
	char *M = "AEOTL";
	int x[] = {'4', '3', '0', '7', '1'};
	int i;
	char *p = s;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == *(m + i) || *s == *(M + i))
				*s = x[i];
		}
		s++;
	}

	return (p);
}
