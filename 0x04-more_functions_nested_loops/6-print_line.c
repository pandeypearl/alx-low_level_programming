#include "main.h"

/**
*print_line - function that draws a straight line
*@n: is the integer for the paramaters of my function
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
