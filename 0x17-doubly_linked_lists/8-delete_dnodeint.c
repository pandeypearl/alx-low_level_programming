#include "lists.h"

/**
 * delete_dnodeint_at_index -  function that deletes the node at
 * index index of a dlistint_t linked list
 * @head: double pointer to head of the dlistint_t list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	while (index != 0 && node != NULL)
	{
		index = index - 1;
		node = node->next;
	}
	if (index == 0 && node != NULL)
	{
		if (node->prev != NULL)
			(node->prev)->next = node->next;
		if (node->next != NULL)
			(node->next)->prev = node->prev;
		if (node == *head)
			*head = node->next;
		free(node);
		return (1);
	}
	return (-1);
}
