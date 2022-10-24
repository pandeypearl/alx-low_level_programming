#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns sum of all data
 * of linked list
 * @head: start of linked list
 * Return: sum of data(n) or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
