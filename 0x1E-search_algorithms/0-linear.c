#include "search_algos.h"

/**
 * linear_search - function that searches for value in artay of integers
 * using linear search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: first index value of -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
