#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * f3 - calculation of the 3rd character
 * @me: pointer to first input argument
 * @you: 6
 *
 * Return: result of the calculation
 */

unsigned long f3(char *me, int you)
{
	unsigned int x;
	int y;

	x = 1;
	y = 0;
	while (y < you)
	{
		x = me[y] * x;
		y = y + 1;
	}
	return ((unsigned long)((x ^ 0x55) & 0x3f));
}

/**
 * f4 - calculation of the 3rd character
 * @me: pointer to first input argument
 * @you: 6
 *
 * Return: result of the calculation
 */
unsigned long f4(char *me, int you)
{
	unsigned int s;
	unsigned int x;
	int y;

	x = me[0];
	y = 0;

	while (y < you)
	{
		if ((int)x < (int)me[y])
		{
			x = me[y];
		}
		y = y + 1;
	}
	srand(x ^ 0xe);
	s = rand();
	return ((unsigned long)(s & 0x3f));
}

/**
 * f5 - calculation of the 3rd character
 * @me: pointer to first input argument
 * @you: 6
 *
 * Return: result of the calculation
 */
unsigned long f5(char *me, int you)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (y < you)
	{
		x = x + me[y] * me[y];
		y = y + 1;
	}
	return ((unsigned long)((unsigned int)(char)((char)x ^ 0xef) & 0x3f));
}

/**
 * f6 - calculation of the 3rd character
 * @me: pointer to first input argument
 *
 * Return: result of the calculation
 */
unsigned long f6(char me)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (y < me)
	{
		x = rand();
		y = y + 1;
	}
	return ((unsigned long)((unsigned int)(char)((char)x ^ 0xe5) & 0x3f));
}

/**
 * main - program that generates a key for a given name
 * @argc: count of input arguments
 * @argv: array of string inputs
 *
 * Return: 0 on success, 1 if failed
 */
int main(int argc, char **argv)
{
	char *this_1, this_2[7], *m;
	uint t;
	unsigned long n;
	unsigned int x;
	int y;

	m = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
	{
		exit(1);
	}
	this_1 = argv[1];
	t = strlen(this_1);
	n = ((t ^ 0x3b) & 0x3f);
	this_2[0] = m[n];

	x = 0;
	y = 0;
	while (y < (int)t)
	{
		x = x + this_1[y];
		y = y + 1;
	}
	n = ((x ^ 0x4f) & 0x3f);

	this_2[1] = m[n];
	n = f3(this_1, t);
	this_2[2] = m[n];
	n = f4(this_1, t);
	this_2[3] = m[n];
	n = f5(this_1, t);
	this_2[4] = m[n];
	n = f6(*this_1);
	this_2[5] = m[n];
	this_2[6] = '\0';
	printf("%s", this_2);
	return (0);
}
