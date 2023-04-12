#include "search_algos.h"

/**
 * linear_skip - function searches for value in sorted skip list
 * @list: head of list
 * @value: value to search for
 * Return: pointer to first node or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp, *node;
	size_t old_index;

	if (!list)
		return (NULL);

	for (tmp = list; tmp; tmp = tmp->express)
	{
		if (tmp->express)
		{
			node = tmp->express;
			printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		} else
		{
			node = tmp;
			while (node->next)
				node = node->next;
		}

		if (value <= node->n || !(tmp->express))
		{
			printf("Value found between indexes [%ld} and [%ld}\n",
					tmp->index, node->index);
			old_index = node->index;
			for (node = tmp; node && node->index <= old_index; node = node->next)
			{
				printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
				if (value == node->n)
					return (node);
			}
		}
	}
	return (NULL);
}
