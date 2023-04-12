#include "search_algos.h"

/**
 * binary_recursive - function that recursively searches for value
 * in sorted array of integers using binary search algorithm
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

	if (!array || (int)last < (int)first)
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
	if (array[first] == value && array[mid] == value)
		return (first);
	else if (array[mid] == value)
		x = binary_recursive(array, first, mid, value);
	else if (array[mid] > value)
		x = (binary_recursive(array, first, mid - 1, value));
	else if (array[mid] < value)
		x = (binary_recursive(array, mid + 1, last, value));
	return (x);
}

/**
 * advanced_binary - function searches for value
 * in sorted array of integers using binary search algorithm
 * @array: array
 * @size: size of array
 * @value: value to search for
 * Return: index or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
