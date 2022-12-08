#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list
 * @head: pointer to the head of the dlistint_t list
 * @index: is the index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index != 0 && head != NULL)
	{
		head = head->next;
		index = index - 1;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
