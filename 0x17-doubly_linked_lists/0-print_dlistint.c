#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of dlistint_t list
 * @h: pointer to the head of the dlistint_t list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num = num + 1;
	}
	return (num);
}
