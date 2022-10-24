#include "lists.h"

/**
 * print_listint_safe - Safely prints linked list
 * @head: list of type listint_t to print
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (i);
}
