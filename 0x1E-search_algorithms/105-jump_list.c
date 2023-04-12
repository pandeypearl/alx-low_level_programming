#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function searches for value
 * in sorted singly linked list of integers using Jump search algorithm
 * @list: the head
 * @size: size of linked list
 * @value: value to search for
 * Return: Address of node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, index, old_index;
	listint_t *tmp;

	jump = (size_t)sqrt(size);
	if (!list)
		return (NULL);
	tmp = list;
	for (index = jump; index < size - 1 + jump; index += jump)
	{
		old_index = index;
		if (index >= size)
		{
			old_index = index;
			index = size - 1;
		}
		while (tmp && tmp->index != index)
		{
			tmp = tmp->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
		if (value <= tmp->n || index == size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					old_index - jump, index);
			tmp = list;
			while (tmp && tmp->index != old_index - jump)
			{
				tmp = tmp->next;
			}
			while (tmp && tmp->index <= index)
			{
				printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
				if (value == tmp->n)
					return (tmp);
				tmp = tmp->next;
			}
		}
	}
	return (NULL);
}
