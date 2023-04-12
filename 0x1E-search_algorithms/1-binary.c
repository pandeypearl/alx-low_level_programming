#include "search_algos.h"

/**
 * binary_recursive - function recursively searches for value
 * in sorted array on integers using binary search algorithm
 * @array: array of integers
 * @first: first index of array
 * @last: last index of array
 * @value: value to search for
 * Return: returns index or -1
 */
int binary_recursive(int *array, size_t first, size_t last, int value)
{
	size_t mid;
	int x;

	if (!array || last < first)
		return (-1);
	printf("Searching in array: ");
	for (mid = first; mid <= last; mid++)
	{
		if (mid != first)
			printf(", ");
		printf("%d", array[mid]);
	}
	printf("\n");
	mid = (first + last) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		x = (binary_recursive(array, first, mid - 1, value));
	else if (array[mid] < value)
		x = (binary_recursive(array, mid + 1, last, value));
	return (x);
}

/**
 * binary_search - function thats searches for a value
 * in sorted array of integers using binary search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: returns index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
