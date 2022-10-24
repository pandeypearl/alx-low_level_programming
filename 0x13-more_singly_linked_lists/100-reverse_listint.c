#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint -function that reverses linked list
 * @head: start of linked list
 * Return: pointer to first node of reversed list
 * or NULL
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
}
