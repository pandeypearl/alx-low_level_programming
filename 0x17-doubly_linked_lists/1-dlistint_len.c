#include "lists.h"

/**
 * dlistint_len - function that prints all the elements of dlistint_t list
 * @h: pointer to the head of the dlistint_t list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num = num + 1;
	}

	return (num);
}
