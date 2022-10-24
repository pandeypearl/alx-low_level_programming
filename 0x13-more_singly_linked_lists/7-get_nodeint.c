#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Function that returns
 * nth node of lined list
 * @head: Start of linked list
 * @index: index of node
 * Return: nth node or 0 if
 * node non existant
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s = 0;

	if (head)
	{
		while (head)
		{
			if (s == index)
				return (head);
			head = head->next;
			s++;
		}
	}
	return (NULL);
}
