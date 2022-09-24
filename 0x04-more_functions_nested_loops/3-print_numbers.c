#include "main.h"

/**
*print_numbers - function to print numbers 1 to 9
*
*Return: 0
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

