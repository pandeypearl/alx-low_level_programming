#include "lists.h"

/**
 * print_listint_safe - Safely prints linked list
 * @head: list of type listint_t to print
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
			break;
		}
		head = head->next;
	}

	return (num);
}
