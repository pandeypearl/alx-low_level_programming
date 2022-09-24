#include "main.h"

/**
*print_most_numbers - Print numbers from 0 to 9 excluding 2 and 4
*
*Return: 0
*/

int print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '2' && ch != '4')
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
	return (0);
}

