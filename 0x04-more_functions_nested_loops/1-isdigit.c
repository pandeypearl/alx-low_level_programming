#include "main.h"
#include <stdio.h>

/**
*_isdigit - function to check if c is a number between 0 and 9
*@c: is the int the will use for the argument of the function
*Return: 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

