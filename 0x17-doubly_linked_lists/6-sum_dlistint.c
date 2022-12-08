#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: pointer to the head of the dlistint_t list
 *
 * Return: the integer sum of all the elements, 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
